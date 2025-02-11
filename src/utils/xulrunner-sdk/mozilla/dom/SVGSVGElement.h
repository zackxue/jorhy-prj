/* -*- Mode: C++; tab-width: 2; indent-tabs-mode: nil; c-basic-offset: 2 -*- */
/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef mozilla_dom_SVGSVGElement_h
#define mozilla_dom_SVGSVGElement_h

#include "mozilla/dom/FromParser.h"
#include "nsISVGPoint.h"
#include "nsSVGEnum.h"
#include "nsSVGLength2.h"
#include "SVGGraphicsElement.h"
#include "nsSVGViewBox.h"
#include "SVGPreserveAspectRatio.h"
#include "SVGAnimatedPreserveAspectRatio.h"
#include "mozilla/Attributes.h"

nsresult NS_NewSVGSVGElement(nsIContent **aResult,
                             already_AddRefed<nsINodeInfo> aNodeInfo,
                             mozilla::dom::FromParser aFromParser);

class nsIDOMSVGNumber;
class nsSMILTimeContainer;
class nsSVGOuterSVGFrame;
class nsSVGInnerSVGFrame;
class nsSVGImageFrame;

namespace mozilla {
class DOMSVGAnimatedPreserveAspectRatio;
class DOMSVGTransform;
class SVGFragmentIdentifier;

namespace dom {
class SVGAngle;
class SVGMatrix;
class SVGViewElement;

class SVGSVGElement;

class DOMSVGTranslatePoint MOZ_FINAL : public nsISVGPoint {
public:
  DOMSVGTranslatePoint(SVGPoint* aPt, SVGSVGElement *aElement)
    : nsISVGPoint(aPt), mElement(aElement) {}

  DOMSVGTranslatePoint(DOMSVGTranslatePoint* aPt)
    : nsISVGPoint(&aPt->mPt), mElement(aPt->mElement) {}

  NS_DECL_ISUPPORTS_INHERITED
  NS_DECL_CYCLE_COLLECTION_CLASS_INHERITED(DOMSVGTranslatePoint, nsISVGPoint)

  virtual nsISVGPoint* Clone();

  // WebIDL
  virtual float X() { return mPt.GetX(); }
  virtual float Y() { return mPt.GetY(); }
  virtual void SetX(float aValue, ErrorResult& rv);
  virtual void SetY(float aValue, ErrorResult& rv);
  virtual already_AddRefed<nsISVGPoint> MatrixTransform(SVGMatrix& matrix);

  virtual nsISupports* GetParentObject() MOZ_OVERRIDE;

  nsRefPtr<SVGSVGElement> mElement;
};

class svgFloatSize {
public:
  svgFloatSize(float aWidth, float aHeight)
    : width(aWidth)
    , height(aHeight)
  {}
  bool operator!=(const svgFloatSize& rhs) {
    return width != rhs.width || height != rhs.height;
  }
  float width;
  float height;
};

typedef SVGGraphicsElement SVGSVGElementBase;

class SVGSVGElement MOZ_FINAL : public SVGSVGElementBase,
                                public nsIDOMSVGElement
{
  friend class ::nsSVGOuterSVGFrame;
  friend class ::nsSVGInnerSVGFrame;
  friend class ::nsSVGImageFrame;
  friend class mozilla::SVGFragmentIdentifier;

  SVGSVGElement(already_AddRefed<nsINodeInfo> aNodeInfo,
                FromParser aFromParser);
  virtual JSObject* WrapNode(JSContext *aCx, JSObject *aScope, bool *aTriedToWrap) MOZ_OVERRIDE;

  friend nsresult (::NS_NewSVGSVGElement(nsIContent **aResult,
                                         already_AddRefed<nsINodeInfo> aNodeInfo,
                                         mozilla::dom::FromParser aFromParser));

public:
  // interfaces:
  NS_DECL_ISUPPORTS_INHERITED
  NS_DECL_CYCLE_COLLECTION_CLASS_INHERITED(SVGSVGElement, SVGSVGElementBase)

  // xxx I wish we could use virtual inheritance
  NS_FORWARD_NSIDOMNODE_TO_NSINODE
  NS_FORWARD_NSIDOMELEMENT_TO_GENERIC
  NS_FORWARD_NSIDOMSVGELEMENT(SVGSVGElementBase::)

  /**
   * For use by zoom controls to allow currentScale, currentTranslate.x and
   * currentTranslate.y to be set by a single operation that dispatches a
   * single SVGZoom event (instead of one SVGZoom and two SVGScroll events).
   */
  void SetCurrentScaleTranslate(float s, float x, float y);

  /**
   * Retrieve the value of currentScale and currentTranslate.
   */
  const SVGPoint& GetCurrentTranslate() { return mCurrentTranslate; }
  float GetCurrentScale() { return mCurrentScale; }

  /**
   * Retrieve the value of currentScale, currentTranslate.x or
   * currentTranslate.y prior to the last change made to any one of them.
   */
  const SVGPoint& GetPreviousTranslate() { return mPreviousTranslate; }
  float GetPreviousScale() { return mPreviousScale; }

  nsSMILTimeContainer* GetTimedDocumentRoot();

  // nsIContent interface
  NS_IMETHOD_(bool) IsAttributeMapped(const nsIAtom* aAttribute) const;
  virtual nsresult PreHandleEvent(nsEventChainPreVisitor& aVisitor);

  virtual bool IsEventAttributeName(nsIAtom* aName) MOZ_OVERRIDE;

  // nsSVGElement specializations:
  virtual gfxMatrix PrependLocalTransformsTo(const gfxMatrix &aMatrix,
                      TransformTypes aWhich = eAllTransforms) const;
  virtual bool HasValidDimensions() const;

  // SVGSVGElement methods:
  float GetLength(uint8_t mCtxType);

  // public helpers:

  /**
   * Returns true if this element has a base/anim value for its "viewBox"
   * attribute that defines a viewBox rectangle with finite values, or
   * if there is a view element overriding this element's viewBox and it
   * has a valid viewBox.
   *
   * Note that this does not check whether we need to synthesize a viewBox,
   * so you must call ShouldSynthesizeViewBox() if you need to check that too.
   *
   * Note also that this method does not pay attention to whether the width or
   * height values of the viewBox rect are positive!
   */
  bool HasViewBox() const;

  /**
   * Returns true if we should synthesize a viewBox for ourselves (that is, if
   * we're the root element in an image document, and we're not currently being
   * painted for an <svg:image> element).
   *
   * Only call this method if HasViewBox() returns false.
   */
  bool ShouldSynthesizeViewBox() const;

  bool HasViewBoxOrSyntheticViewBox() const {
    return HasViewBox() || ShouldSynthesizeViewBox();
  }

  gfxMatrix GetViewBoxTransform() const;

  bool HasChildrenOnlyTransform() const {
    return mHasChildrenOnlyTransform;
  }

  void UpdateHasChildrenOnlyTransform();

  enum ChildrenOnlyTransformChangedFlags {
    eDuringReflow = 1
  };

  /**
   * This method notifies the style system that the overflow rects of our
   * immediate childrens' frames need to be updated. It is called by our own
   * frame when changes (e.g. to currentScale) cause our children-only
   * transform to change.
   *
   * The reason we have this method instead of overriding
   * GetAttributeChangeHint is because we need to act on non-attribute (e.g.
   * currentScale) changes in addition to attribute (e.g. viewBox) changes.
   */
  void ChildrenOnlyTransformChanged(uint32_t aFlags = 0);

  // This services any pending notifications for the transform on on this root
  // <svg> node needing to be recalculated.  (Only applicable in
  // SVG-as-an-image documents.)
  virtual void FlushImageTransformInvalidation();

  virtual nsresult Clone(nsINodeInfo *aNodeInfo, nsINode **aResult) const;

  // Returns true IFF our attributes are currently overridden by a <view>
  // element and that element's ID matches the passed-in string.
  bool IsOverriddenBy(const nsAString &aViewID) const {
    return mCurrentViewID && mCurrentViewID->Equals(aViewID);
  }

  svgFloatSize GetViewportSize() const {
    return svgFloatSize(mViewportWidth, mViewportHeight);
  }

  void SetViewportSize(const svgFloatSize& aSize) {
    mViewportWidth  = aSize.width;
    mViewportHeight = aSize.height;
  }

  virtual nsIDOMNode* AsDOMNode() { return this; }

  // WebIDL
  already_AddRefed<SVGAnimatedLength> X();
  already_AddRefed<SVGAnimatedLength> Y();
  already_AddRefed<SVGAnimatedLength> Width();
  already_AddRefed<SVGAnimatedLength> Height();
  float PixelUnitToMillimeterX();
  float PixelUnitToMillimeterY();
  float ScreenPixelToMillimeterX();
  float ScreenPixelToMillimeterY();
  bool UseCurrentView();
  float CurrentScale();
  void SetCurrentScale(float aCurrentScale);
  already_AddRefed<nsISVGPoint> CurrentTranslate();
  void SetCurrentTranslate(float x, float y);
  uint32_t SuspendRedraw(uint32_t max_wait_milliseconds);
  void UnsuspendRedraw(uint32_t suspend_handle_id);
  void UnsuspendRedrawAll();
  void ForceRedraw(ErrorResult& rv);
  void PauseAnimations();
  void UnpauseAnimations();
  bool AnimationsPaused();
  float GetCurrentTime();
  void SetCurrentTime(float seconds);
  already_AddRefed<nsIDOMSVGNumber> CreateSVGNumber();
  already_AddRefed<nsIDOMSVGLength> CreateSVGLength();
  already_AddRefed<SVGAngle> CreateSVGAngle();
  already_AddRefed<nsISVGPoint> CreateSVGPoint();
  already_AddRefed<SVGMatrix> CreateSVGMatrix();
  already_AddRefed<nsIDOMSVGRect> CreateSVGRect();
  already_AddRefed<DOMSVGTransform> CreateSVGTransform();
  already_AddRefed<DOMSVGTransform> CreateSVGTransformFromMatrix(SVGMatrix& matrix);
  Element* GetElementById(const nsAString& elementId, ErrorResult& rv);
  already_AddRefed<nsIDOMSVGAnimatedRect> ViewBox();
  already_AddRefed<DOMSVGAnimatedPreserveAspectRatio> PreserveAspectRatio();
  uint16_t ZoomAndPan();
  void SetZoomAndPan(uint16_t aZoomAndPan, ErrorResult& rv);

private:
  // nsSVGElement overrides

  virtual nsresult BindToTree(nsIDocument* aDocument, nsIContent* aParent,
                              nsIContent* aBindingParent,
                              bool aCompileEventHandlers);
  virtual void UnbindFromTree(bool aDeep, bool aNullParent);

  // implementation helpers:

  SVGViewElement* GetCurrentViewElement() const;

  // Methods for <image> elements to override my "PreserveAspectRatio" value.
  // These are private so that only our friends (nsSVGImageFrame in
  // particular) have access.
  void SetImageOverridePreserveAspectRatio(const SVGPreserveAspectRatio& aPAR);
  void ClearImageOverridePreserveAspectRatio();

  // Set/Clear properties to hold old or override versions of attributes
  bool SetPreserveAspectRatioProperty(const SVGPreserveAspectRatio& aPAR);
  const SVGPreserveAspectRatio* GetPreserveAspectRatioProperty() const;
  bool ClearPreserveAspectRatioProperty();
  bool SetViewBoxProperty(const nsSVGViewBoxRect& aViewBox);
  const nsSVGViewBoxRect* GetViewBoxProperty() const;
  bool ClearViewBoxProperty();
  bool SetZoomAndPanProperty(uint16_t aValue);
  uint16_t GetZoomAndPanProperty() const;
  bool ClearZoomAndPanProperty();

  bool IsRoot() const {
    NS_ASSERTION((IsInDoc() && !GetParent()) ==
                 (OwnerDoc() && (OwnerDoc()->GetRootElement() == this)),
                 "Can't determine if we're root");
    return IsInDoc() && !GetParent();
  }

  /**
   * Returns true if this is an SVG <svg> element that is the child of
   * another non-foreignObject SVG element.
   */
  bool IsInner() const {
    const nsIContent *parent = GetFlattenedTreeParent();
    return parent && parent->IsSVG() &&
           parent->Tag() != nsGkAtoms::foreignObject;
  }

  /* 
   * While binding to the tree we need to determine if we will be the outermost
   * <svg> element _before_ the children are bound (as they want to know what
   * timed document root to register with) and therefore _before_ our parent is
   * set (both actions are performed by Element::BindToTree) so we
   * can't use GetOwnerSVGElement() as it relies on GetParent(). This code is
   * basically a simplified version of GetOwnerSVGElement that uses the parent
   * parameters passed in instead.
   */
  bool WillBeOutermostSVG(nsIContent* aParent,
                          nsIContent* aBindingParent) const;

  // invalidate viewbox -> viewport xform & inform frames
  void InvalidateTransformNotifyFrame();

  // Returns true if we have at least one of the following:
  // - a (valid or invalid) value for the preserveAspectRatio attribute
  // - a SMIL-animated value for the preserveAspectRatio attribute
  bool HasPreserveAspectRatio();

 /**
  * Returns the explicit viewBox rect, if specified, or else a synthesized
  * viewBox, if appropriate, or else a viewBox matching the dimensions of the
  * SVG viewport.
  */
  nsSVGViewBoxRect GetViewBoxWithSynthesis(
      float aViewportWidth, float aViewportHeight) const;
  /**
   * Returns the explicit or default preserveAspectRatio, unless we're
   * synthesizing a viewBox, in which case it returns the "none" value.
   */
  SVGPreserveAspectRatio GetPreserveAspectRatioWithOverride() const;

  virtual LengthAttributesInfo GetLengthInfo();

  enum { ATTR_X, ATTR_Y, ATTR_WIDTH, ATTR_HEIGHT };
  nsSVGLength2 mLengthAttributes[4];
  static LengthInfo sLengthInfo[4];

  virtual EnumAttributesInfo GetEnumInfo();

  enum { ZOOMANDPAN };
  nsSVGEnum mEnumAttributes[1];
  static nsSVGEnumMapping sZoomAndPanMap[];
  static EnumInfo sEnumInfo[1];

  virtual nsSVGViewBox *GetViewBox();
  virtual SVGAnimatedPreserveAspectRatio *GetPreserveAspectRatio();

  nsSVGViewBox                   mViewBox;
  SVGAnimatedPreserveAspectRatio mPreserveAspectRatio;

  nsAutoPtr<gfxMatrix>           mFragmentIdentifierTransform;
  nsAutoPtr<nsString>            mCurrentViewID;

  // The size of the rectangular SVG viewport into which we render. This is
  // not (necessarily) the same as the content area. See:
  //
  //   http://www.w3.org/TR/SVG11/coords.html#ViewportSpace
  //
  // XXXjwatt Currently only used for outer <svg>, but maybe we could use -1 to
  // flag this as an inner <svg> to save the overhead of GetCtx calls?
  // XXXjwatt our frame should probably reset these when it's destroyed.
  float mViewportWidth, mViewportHeight;

  // The time container for animations within this SVG document fragment. Set
  // for all outermost <svg> elements (not nested <svg> elements).
  nsAutoPtr<nsSMILTimeContainer> mTimedDocumentRoot;

  // zoom and pan
  // IMPORTANT: see the comment in RecordCurrentScaleTranslate before writing
  // code to change any of these!
  SVGPoint mCurrentTranslate;
  float    mCurrentScale;
  SVGPoint mPreviousTranslate;
  float    mPreviousScale;

  // For outermost <svg> elements created from parsing, animation is started by
  // the onload event in accordance with the SVG spec, but for <svg> elements
  // created by script or promoted from inner <svg> to outermost <svg> we need
  // to manually kick off animation when they are bound to the tree.
  bool     mStartAnimationOnBindToTree;
  bool     mImageNeedsTransformInvalidation;
  bool     mIsPaintingSVGImageElement;
  bool     mHasChildrenOnlyTransform;
  bool     mUseCurrentView;
};

} // namespace dom
} // namespace mozilla

#endif // SVGSVGElement_h
