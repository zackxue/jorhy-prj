/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr_w32_bld-000000000/build/dom/interfaces/xul/nsIDOMXULElement.idl
 */

#ifndef __gen_nsIDOMXULElement_h__
#define __gen_nsIDOMXULElement_h__


#ifndef __gen_nsIDOMElement_h__
#include "nsIDOMElement.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIRDFCompositeDataSource; /* forward declaration */

class nsIXULTemplateBuilder; /* forward declaration */

class nsIRDFResource; /* forward declaration */

class nsIControllers; /* forward declaration */

class nsIBoxObject; /* forward declaration */


/* starting interface:    nsIDOMXULElement */
#define NS_IDOMXULELEMENT_IID_STR "bece5b0b-6e59-4de5-98d0-088adfd1cadc"

#define NS_IDOMXULELEMENT_IID \
  {0xbece5b0b, 0x6e59, 0x4de5, \
    { 0x98, 0xd0, 0x08, 0x8a, 0xdf, 0xd1, 0xca, 0xdc }}

class NS_NO_VTABLE nsIDOMXULElement : public nsIDOMElement {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMXULELEMENT_IID)

  /* attribute DOMString className; */
  NS_IMETHOD GetClassName(nsAString & aClassName) = 0;
  NS_IMETHOD SetClassName(const nsAString & aClassName) = 0;

  /* attribute DOMString align; */
  NS_IMETHOD GetAlign(nsAString & aAlign) = 0;
  NS_IMETHOD SetAlign(const nsAString & aAlign) = 0;

  /* attribute DOMString dir; */
  NS_IMETHOD GetDir(nsAString & aDir) = 0;
  NS_IMETHOD SetDir(const nsAString & aDir) = 0;

  /* attribute DOMString flex; */
  NS_IMETHOD GetFlex(nsAString & aFlex) = 0;
  NS_IMETHOD SetFlex(const nsAString & aFlex) = 0;

  /* attribute DOMString flexGroup; */
  NS_IMETHOD GetFlexGroup(nsAString & aFlexGroup) = 0;
  NS_IMETHOD SetFlexGroup(const nsAString & aFlexGroup) = 0;

  /* attribute DOMString ordinal; */
  NS_IMETHOD GetOrdinal(nsAString & aOrdinal) = 0;
  NS_IMETHOD SetOrdinal(const nsAString & aOrdinal) = 0;

  /* attribute DOMString orient; */
  NS_IMETHOD GetOrient(nsAString & aOrient) = 0;
  NS_IMETHOD SetOrient(const nsAString & aOrient) = 0;

  /* attribute DOMString pack; */
  NS_IMETHOD GetPack(nsAString & aPack) = 0;
  NS_IMETHOD SetPack(const nsAString & aPack) = 0;

  /* attribute boolean hidden; */
  NS_IMETHOD GetHidden(bool *aHidden) = 0;
  NS_IMETHOD SetHidden(bool aHidden) = 0;

  /* attribute boolean collapsed; */
  NS_IMETHOD GetCollapsed(bool *aCollapsed) = 0;
  NS_IMETHOD SetCollapsed(bool aCollapsed) = 0;

  /* attribute DOMString observes; */
  NS_IMETHOD GetObserves(nsAString & aObserves) = 0;
  NS_IMETHOD SetObserves(const nsAString & aObserves) = 0;

  /* attribute DOMString menu; */
  NS_IMETHOD GetMenu(nsAString & aMenu) = 0;
  NS_IMETHOD SetMenu(const nsAString & aMenu) = 0;

  /* attribute DOMString contextMenu; */
  NS_IMETHOD GetContextMenu(nsAString & aContextMenu) = 0;
  NS_IMETHOD SetContextMenu(const nsAString & aContextMenu) = 0;

  /* attribute DOMString tooltip; */
  NS_IMETHOD GetTooltip(nsAString & aTooltip) = 0;
  NS_IMETHOD SetTooltip(const nsAString & aTooltip) = 0;

  /* attribute DOMString width; */
  NS_IMETHOD GetWidth(nsAString & aWidth) = 0;
  NS_IMETHOD SetWidth(const nsAString & aWidth) = 0;

  /* attribute DOMString height; */
  NS_IMETHOD GetHeight(nsAString & aHeight) = 0;
  NS_IMETHOD SetHeight(const nsAString & aHeight) = 0;

  /* attribute DOMString minWidth; */
  NS_IMETHOD GetMinWidth(nsAString & aMinWidth) = 0;
  NS_IMETHOD SetMinWidth(const nsAString & aMinWidth) = 0;

  /* attribute DOMString minHeight; */
  NS_IMETHOD GetMinHeight(nsAString & aMinHeight) = 0;
  NS_IMETHOD SetMinHeight(const nsAString & aMinHeight) = 0;

  /* attribute DOMString maxWidth; */
  NS_IMETHOD GetMaxWidth(nsAString & aMaxWidth) = 0;
  NS_IMETHOD SetMaxWidth(const nsAString & aMaxWidth) = 0;

  /* attribute DOMString maxHeight; */
  NS_IMETHOD GetMaxHeight(nsAString & aMaxHeight) = 0;
  NS_IMETHOD SetMaxHeight(const nsAString & aMaxHeight) = 0;

  /* attribute DOMString persist; */
  NS_IMETHOD GetPersist(nsAString & aPersist) = 0;
  NS_IMETHOD SetPersist(const nsAString & aPersist) = 0;

  /* attribute DOMString left; */
  NS_IMETHOD GetLeft(nsAString & aLeft) = 0;
  NS_IMETHOD SetLeft(const nsAString & aLeft) = 0;

  /* attribute DOMString top; */
  NS_IMETHOD GetTop(nsAString & aTop) = 0;
  NS_IMETHOD SetTop(const nsAString & aTop) = 0;

  /* attribute DOMString datasources; */
  NS_IMETHOD GetDatasources(nsAString & aDatasources) = 0;
  NS_IMETHOD SetDatasources(const nsAString & aDatasources) = 0;

  /* attribute DOMString ref; */
  NS_IMETHOD GetRef(nsAString & aRef) = 0;
  NS_IMETHOD SetRef(const nsAString & aRef) = 0;

  /* attribute DOMString tooltipText; */
  NS_IMETHOD GetTooltipText(nsAString & aTooltipText) = 0;
  NS_IMETHOD SetTooltipText(const nsAString & aTooltipText) = 0;

  /* attribute DOMString statusText; */
  NS_IMETHOD GetStatusText(nsAString & aStatusText) = 0;
  NS_IMETHOD SetStatusText(const nsAString & aStatusText) = 0;

  /* attribute boolean allowEvents; */
  NS_IMETHOD GetAllowEvents(bool *aAllowEvents) = 0;
  NS_IMETHOD SetAllowEvents(bool aAllowEvents) = 0;

  /* readonly attribute nsIRDFCompositeDataSource database; */
  NS_IMETHOD GetDatabase(nsIRDFCompositeDataSource * *aDatabase) = 0;

  /* readonly attribute nsIXULTemplateBuilder builder; */
  NS_IMETHOD GetBuilder(nsIXULTemplateBuilder * *aBuilder) = 0;

  /* readonly attribute nsIRDFResource resource; */
  NS_IMETHOD GetResource(nsIRDFResource * *aResource) = 0;

  /* readonly attribute nsIControllers controllers; */
  NS_IMETHOD GetControllers(nsIControllers * *aControllers) = 0;

  /* readonly attribute nsIBoxObject boxObject; */
  NS_IMETHOD GetBoxObject(nsIBoxObject * *aBoxObject) = 0;

  /* void focus (); */
  NS_IMETHOD Focus(void) = 0;

  /* void blur (); */
  NS_IMETHOD Blur(void) = 0;

  /* void click (); */
  NS_IMETHOD Click(void) = 0;

  /* void doCommand (); */
  NS_IMETHOD DoCommand(void) = 0;

  /* nsIDOMNodeList getElementsByAttribute (in DOMString name, in DOMString value); */
  NS_IMETHOD GetElementsByAttribute(const nsAString & name, const nsAString & value, nsIDOMNodeList * *_retval) = 0;

  /* nsIDOMNodeList getElementsByAttributeNS (in DOMString namespaceURI, in DOMString name, in DOMString value); */
  NS_IMETHOD GetElementsByAttributeNS(const nsAString & namespaceURI, const nsAString & name, const nsAString & value, nsIDOMNodeList * *_retval) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMXULElement, NS_IDOMXULELEMENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMXULELEMENT \
  NS_IMETHOD GetClassName(nsAString & aClassName); \
  NS_IMETHOD SetClassName(const nsAString & aClassName); \
  NS_IMETHOD GetAlign(nsAString & aAlign); \
  NS_IMETHOD SetAlign(const nsAString & aAlign); \
  NS_IMETHOD GetDir(nsAString & aDir); \
  NS_IMETHOD SetDir(const nsAString & aDir); \
  NS_IMETHOD GetFlex(nsAString & aFlex); \
  NS_IMETHOD SetFlex(const nsAString & aFlex); \
  NS_IMETHOD GetFlexGroup(nsAString & aFlexGroup); \
  NS_IMETHOD SetFlexGroup(const nsAString & aFlexGroup); \
  NS_IMETHOD GetOrdinal(nsAString & aOrdinal); \
  NS_IMETHOD SetOrdinal(const nsAString & aOrdinal); \
  NS_IMETHOD GetOrient(nsAString & aOrient); \
  NS_IMETHOD SetOrient(const nsAString & aOrient); \
  NS_IMETHOD GetPack(nsAString & aPack); \
  NS_IMETHOD SetPack(const nsAString & aPack); \
  NS_IMETHOD GetHidden(bool *aHidden); \
  NS_IMETHOD SetHidden(bool aHidden); \
  NS_IMETHOD GetCollapsed(bool *aCollapsed); \
  NS_IMETHOD SetCollapsed(bool aCollapsed); \
  NS_IMETHOD GetObserves(nsAString & aObserves); \
  NS_IMETHOD SetObserves(const nsAString & aObserves); \
  NS_IMETHOD GetMenu(nsAString & aMenu); \
  NS_IMETHOD SetMenu(const nsAString & aMenu); \
  NS_IMETHOD GetContextMenu(nsAString & aContextMenu); \
  NS_IMETHOD SetContextMenu(const nsAString & aContextMenu); \
  NS_IMETHOD GetTooltip(nsAString & aTooltip); \
  NS_IMETHOD SetTooltip(const nsAString & aTooltip); \
  NS_IMETHOD GetWidth(nsAString & aWidth); \
  NS_IMETHOD SetWidth(const nsAString & aWidth); \
  NS_IMETHOD GetHeight(nsAString & aHeight); \
  NS_IMETHOD SetHeight(const nsAString & aHeight); \
  NS_IMETHOD GetMinWidth(nsAString & aMinWidth); \
  NS_IMETHOD SetMinWidth(const nsAString & aMinWidth); \
  NS_IMETHOD GetMinHeight(nsAString & aMinHeight); \
  NS_IMETHOD SetMinHeight(const nsAString & aMinHeight); \
  NS_IMETHOD GetMaxWidth(nsAString & aMaxWidth); \
  NS_IMETHOD SetMaxWidth(const nsAString & aMaxWidth); \
  NS_IMETHOD GetMaxHeight(nsAString & aMaxHeight); \
  NS_IMETHOD SetMaxHeight(const nsAString & aMaxHeight); \
  NS_IMETHOD GetPersist(nsAString & aPersist); \
  NS_IMETHOD SetPersist(const nsAString & aPersist); \
  NS_IMETHOD GetLeft(nsAString & aLeft); \
  NS_IMETHOD SetLeft(const nsAString & aLeft); \
  NS_IMETHOD GetTop(nsAString & aTop); \
  NS_IMETHOD SetTop(const nsAString & aTop); \
  NS_IMETHOD GetDatasources(nsAString & aDatasources); \
  NS_IMETHOD SetDatasources(const nsAString & aDatasources); \
  NS_IMETHOD GetRef(nsAString & aRef); \
  NS_IMETHOD SetRef(const nsAString & aRef); \
  NS_IMETHOD GetTooltipText(nsAString & aTooltipText); \
  NS_IMETHOD SetTooltipText(const nsAString & aTooltipText); \
  NS_IMETHOD GetStatusText(nsAString & aStatusText); \
  NS_IMETHOD SetStatusText(const nsAString & aStatusText); \
  NS_IMETHOD GetAllowEvents(bool *aAllowEvents); \
  NS_IMETHOD SetAllowEvents(bool aAllowEvents); \
  NS_IMETHOD GetDatabase(nsIRDFCompositeDataSource * *aDatabase); \
  NS_IMETHOD GetBuilder(nsIXULTemplateBuilder * *aBuilder); \
  NS_IMETHOD GetResource(nsIRDFResource * *aResource); \
  NS_IMETHOD GetControllers(nsIControllers * *aControllers); \
  NS_IMETHOD GetBoxObject(nsIBoxObject * *aBoxObject); \
  NS_IMETHOD Focus(void); \
  NS_IMETHOD Blur(void); \
  NS_IMETHOD Click(void); \
  NS_IMETHOD DoCommand(void); \
  NS_IMETHOD GetElementsByAttribute(const nsAString & name, const nsAString & value, nsIDOMNodeList * *_retval); \
  NS_IMETHOD GetElementsByAttributeNS(const nsAString & namespaceURI, const nsAString & name, const nsAString & value, nsIDOMNodeList * *_retval); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMXULELEMENT(_to) \
  NS_IMETHOD GetClassName(nsAString & aClassName) { return _to GetClassName(aClassName); } \
  NS_IMETHOD SetClassName(const nsAString & aClassName) { return _to SetClassName(aClassName); } \
  NS_IMETHOD GetAlign(nsAString & aAlign) { return _to GetAlign(aAlign); } \
  NS_IMETHOD SetAlign(const nsAString & aAlign) { return _to SetAlign(aAlign); } \
  NS_IMETHOD GetDir(nsAString & aDir) { return _to GetDir(aDir); } \
  NS_IMETHOD SetDir(const nsAString & aDir) { return _to SetDir(aDir); } \
  NS_IMETHOD GetFlex(nsAString & aFlex) { return _to GetFlex(aFlex); } \
  NS_IMETHOD SetFlex(const nsAString & aFlex) { return _to SetFlex(aFlex); } \
  NS_IMETHOD GetFlexGroup(nsAString & aFlexGroup) { return _to GetFlexGroup(aFlexGroup); } \
  NS_IMETHOD SetFlexGroup(const nsAString & aFlexGroup) { return _to SetFlexGroup(aFlexGroup); } \
  NS_IMETHOD GetOrdinal(nsAString & aOrdinal) { return _to GetOrdinal(aOrdinal); } \
  NS_IMETHOD SetOrdinal(const nsAString & aOrdinal) { return _to SetOrdinal(aOrdinal); } \
  NS_IMETHOD GetOrient(nsAString & aOrient) { return _to GetOrient(aOrient); } \
  NS_IMETHOD SetOrient(const nsAString & aOrient) { return _to SetOrient(aOrient); } \
  NS_IMETHOD GetPack(nsAString & aPack) { return _to GetPack(aPack); } \
  NS_IMETHOD SetPack(const nsAString & aPack) { return _to SetPack(aPack); } \
  NS_IMETHOD GetHidden(bool *aHidden) { return _to GetHidden(aHidden); } \
  NS_IMETHOD SetHidden(bool aHidden) { return _to SetHidden(aHidden); } \
  NS_IMETHOD GetCollapsed(bool *aCollapsed) { return _to GetCollapsed(aCollapsed); } \
  NS_IMETHOD SetCollapsed(bool aCollapsed) { return _to SetCollapsed(aCollapsed); } \
  NS_IMETHOD GetObserves(nsAString & aObserves) { return _to GetObserves(aObserves); } \
  NS_IMETHOD SetObserves(const nsAString & aObserves) { return _to SetObserves(aObserves); } \
  NS_IMETHOD GetMenu(nsAString & aMenu) { return _to GetMenu(aMenu); } \
  NS_IMETHOD SetMenu(const nsAString & aMenu) { return _to SetMenu(aMenu); } \
  NS_IMETHOD GetContextMenu(nsAString & aContextMenu) { return _to GetContextMenu(aContextMenu); } \
  NS_IMETHOD SetContextMenu(const nsAString & aContextMenu) { return _to SetContextMenu(aContextMenu); } \
  NS_IMETHOD GetTooltip(nsAString & aTooltip) { return _to GetTooltip(aTooltip); } \
  NS_IMETHOD SetTooltip(const nsAString & aTooltip) { return _to SetTooltip(aTooltip); } \
  NS_IMETHOD GetWidth(nsAString & aWidth) { return _to GetWidth(aWidth); } \
  NS_IMETHOD SetWidth(const nsAString & aWidth) { return _to SetWidth(aWidth); } \
  NS_IMETHOD GetHeight(nsAString & aHeight) { return _to GetHeight(aHeight); } \
  NS_IMETHOD SetHeight(const nsAString & aHeight) { return _to SetHeight(aHeight); } \
  NS_IMETHOD GetMinWidth(nsAString & aMinWidth) { return _to GetMinWidth(aMinWidth); } \
  NS_IMETHOD SetMinWidth(const nsAString & aMinWidth) { return _to SetMinWidth(aMinWidth); } \
  NS_IMETHOD GetMinHeight(nsAString & aMinHeight) { return _to GetMinHeight(aMinHeight); } \
  NS_IMETHOD SetMinHeight(const nsAString & aMinHeight) { return _to SetMinHeight(aMinHeight); } \
  NS_IMETHOD GetMaxWidth(nsAString & aMaxWidth) { return _to GetMaxWidth(aMaxWidth); } \
  NS_IMETHOD SetMaxWidth(const nsAString & aMaxWidth) { return _to SetMaxWidth(aMaxWidth); } \
  NS_IMETHOD GetMaxHeight(nsAString & aMaxHeight) { return _to GetMaxHeight(aMaxHeight); } \
  NS_IMETHOD SetMaxHeight(const nsAString & aMaxHeight) { return _to SetMaxHeight(aMaxHeight); } \
  NS_IMETHOD GetPersist(nsAString & aPersist) { return _to GetPersist(aPersist); } \
  NS_IMETHOD SetPersist(const nsAString & aPersist) { return _to SetPersist(aPersist); } \
  NS_IMETHOD GetLeft(nsAString & aLeft) { return _to GetLeft(aLeft); } \
  NS_IMETHOD SetLeft(const nsAString & aLeft) { return _to SetLeft(aLeft); } \
  NS_IMETHOD GetTop(nsAString & aTop) { return _to GetTop(aTop); } \
  NS_IMETHOD SetTop(const nsAString & aTop) { return _to SetTop(aTop); } \
  NS_IMETHOD GetDatasources(nsAString & aDatasources) { return _to GetDatasources(aDatasources); } \
  NS_IMETHOD SetDatasources(const nsAString & aDatasources) { return _to SetDatasources(aDatasources); } \
  NS_IMETHOD GetRef(nsAString & aRef) { return _to GetRef(aRef); } \
  NS_IMETHOD SetRef(const nsAString & aRef) { return _to SetRef(aRef); } \
  NS_IMETHOD GetTooltipText(nsAString & aTooltipText) { return _to GetTooltipText(aTooltipText); } \
  NS_IMETHOD SetTooltipText(const nsAString & aTooltipText) { return _to SetTooltipText(aTooltipText); } \
  NS_IMETHOD GetStatusText(nsAString & aStatusText) { return _to GetStatusText(aStatusText); } \
  NS_IMETHOD SetStatusText(const nsAString & aStatusText) { return _to SetStatusText(aStatusText); } \
  NS_IMETHOD GetAllowEvents(bool *aAllowEvents) { return _to GetAllowEvents(aAllowEvents); } \
  NS_IMETHOD SetAllowEvents(bool aAllowEvents) { return _to SetAllowEvents(aAllowEvents); } \
  NS_IMETHOD GetDatabase(nsIRDFCompositeDataSource * *aDatabase) { return _to GetDatabase(aDatabase); } \
  NS_IMETHOD GetBuilder(nsIXULTemplateBuilder * *aBuilder) { return _to GetBuilder(aBuilder); } \
  NS_IMETHOD GetResource(nsIRDFResource * *aResource) { return _to GetResource(aResource); } \
  NS_IMETHOD GetControllers(nsIControllers * *aControllers) { return _to GetControllers(aControllers); } \
  NS_IMETHOD GetBoxObject(nsIBoxObject * *aBoxObject) { return _to GetBoxObject(aBoxObject); } \
  NS_IMETHOD Focus(void) { return _to Focus(); } \
  NS_IMETHOD Blur(void) { return _to Blur(); } \
  NS_IMETHOD Click(void) { return _to Click(); } \
  NS_IMETHOD DoCommand(void) { return _to DoCommand(); } \
  NS_IMETHOD GetElementsByAttribute(const nsAString & name, const nsAString & value, nsIDOMNodeList * *_retval) { return _to GetElementsByAttribute(name, value, _retval); } \
  NS_IMETHOD GetElementsByAttributeNS(const nsAString & namespaceURI, const nsAString & name, const nsAString & value, nsIDOMNodeList * *_retval) { return _to GetElementsByAttributeNS(namespaceURI, name, value, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMXULELEMENT(_to) \
  NS_IMETHOD GetClassName(nsAString & aClassName) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetClassName(aClassName); } \
  NS_IMETHOD SetClassName(const nsAString & aClassName) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetClassName(aClassName); } \
  NS_IMETHOD GetAlign(nsAString & aAlign) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAlign(aAlign); } \
  NS_IMETHOD SetAlign(const nsAString & aAlign) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAlign(aAlign); } \
  NS_IMETHOD GetDir(nsAString & aDir) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDir(aDir); } \
  NS_IMETHOD SetDir(const nsAString & aDir) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetDir(aDir); } \
  NS_IMETHOD GetFlex(nsAString & aFlex) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFlex(aFlex); } \
  NS_IMETHOD SetFlex(const nsAString & aFlex) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFlex(aFlex); } \
  NS_IMETHOD GetFlexGroup(nsAString & aFlexGroup) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFlexGroup(aFlexGroup); } \
  NS_IMETHOD SetFlexGroup(const nsAString & aFlexGroup) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFlexGroup(aFlexGroup); } \
  NS_IMETHOD GetOrdinal(nsAString & aOrdinal) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOrdinal(aOrdinal); } \
  NS_IMETHOD SetOrdinal(const nsAString & aOrdinal) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetOrdinal(aOrdinal); } \
  NS_IMETHOD GetOrient(nsAString & aOrient) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOrient(aOrient); } \
  NS_IMETHOD SetOrient(const nsAString & aOrient) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetOrient(aOrient); } \
  NS_IMETHOD GetPack(nsAString & aPack) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPack(aPack); } \
  NS_IMETHOD SetPack(const nsAString & aPack) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetPack(aPack); } \
  NS_IMETHOD GetHidden(bool *aHidden) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetHidden(aHidden); } \
  NS_IMETHOD SetHidden(bool aHidden) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetHidden(aHidden); } \
  NS_IMETHOD GetCollapsed(bool *aCollapsed) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCollapsed(aCollapsed); } \
  NS_IMETHOD SetCollapsed(bool aCollapsed) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetCollapsed(aCollapsed); } \
  NS_IMETHOD GetObserves(nsAString & aObserves) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetObserves(aObserves); } \
  NS_IMETHOD SetObserves(const nsAString & aObserves) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetObserves(aObserves); } \
  NS_IMETHOD GetMenu(nsAString & aMenu) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMenu(aMenu); } \
  NS_IMETHOD SetMenu(const nsAString & aMenu) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetMenu(aMenu); } \
  NS_IMETHOD GetContextMenu(nsAString & aContextMenu) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetContextMenu(aContextMenu); } \
  NS_IMETHOD SetContextMenu(const nsAString & aContextMenu) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetContextMenu(aContextMenu); } \
  NS_IMETHOD GetTooltip(nsAString & aTooltip) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTooltip(aTooltip); } \
  NS_IMETHOD SetTooltip(const nsAString & aTooltip) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetTooltip(aTooltip); } \
  NS_IMETHOD GetWidth(nsAString & aWidth) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetWidth(aWidth); } \
  NS_IMETHOD SetWidth(const nsAString & aWidth) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetWidth(aWidth); } \
  NS_IMETHOD GetHeight(nsAString & aHeight) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetHeight(aHeight); } \
  NS_IMETHOD SetHeight(const nsAString & aHeight) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetHeight(aHeight); } \
  NS_IMETHOD GetMinWidth(nsAString & aMinWidth) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMinWidth(aMinWidth); } \
  NS_IMETHOD SetMinWidth(const nsAString & aMinWidth) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetMinWidth(aMinWidth); } \
  NS_IMETHOD GetMinHeight(nsAString & aMinHeight) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMinHeight(aMinHeight); } \
  NS_IMETHOD SetMinHeight(const nsAString & aMinHeight) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetMinHeight(aMinHeight); } \
  NS_IMETHOD GetMaxWidth(nsAString & aMaxWidth) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMaxWidth(aMaxWidth); } \
  NS_IMETHOD SetMaxWidth(const nsAString & aMaxWidth) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetMaxWidth(aMaxWidth); } \
  NS_IMETHOD GetMaxHeight(nsAString & aMaxHeight) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMaxHeight(aMaxHeight); } \
  NS_IMETHOD SetMaxHeight(const nsAString & aMaxHeight) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetMaxHeight(aMaxHeight); } \
  NS_IMETHOD GetPersist(nsAString & aPersist) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPersist(aPersist); } \
  NS_IMETHOD SetPersist(const nsAString & aPersist) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetPersist(aPersist); } \
  NS_IMETHOD GetLeft(nsAString & aLeft) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLeft(aLeft); } \
  NS_IMETHOD SetLeft(const nsAString & aLeft) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetLeft(aLeft); } \
  NS_IMETHOD GetTop(nsAString & aTop) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTop(aTop); } \
  NS_IMETHOD SetTop(const nsAString & aTop) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetTop(aTop); } \
  NS_IMETHOD GetDatasources(nsAString & aDatasources) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDatasources(aDatasources); } \
  NS_IMETHOD SetDatasources(const nsAString & aDatasources) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetDatasources(aDatasources); } \
  NS_IMETHOD GetRef(nsAString & aRef) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRef(aRef); } \
  NS_IMETHOD SetRef(const nsAString & aRef) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetRef(aRef); } \
  NS_IMETHOD GetTooltipText(nsAString & aTooltipText) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTooltipText(aTooltipText); } \
  NS_IMETHOD SetTooltipText(const nsAString & aTooltipText) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetTooltipText(aTooltipText); } \
  NS_IMETHOD GetStatusText(nsAString & aStatusText) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetStatusText(aStatusText); } \
  NS_IMETHOD SetStatusText(const nsAString & aStatusText) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetStatusText(aStatusText); } \
  NS_IMETHOD GetAllowEvents(bool *aAllowEvents) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAllowEvents(aAllowEvents); } \
  NS_IMETHOD SetAllowEvents(bool aAllowEvents) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAllowEvents(aAllowEvents); } \
  NS_IMETHOD GetDatabase(nsIRDFCompositeDataSource * *aDatabase) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDatabase(aDatabase); } \
  NS_IMETHOD GetBuilder(nsIXULTemplateBuilder * *aBuilder) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetBuilder(aBuilder); } \
  NS_IMETHOD GetResource(nsIRDFResource * *aResource) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetResource(aResource); } \
  NS_IMETHOD GetControllers(nsIControllers * *aControllers) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetControllers(aControllers); } \
  NS_IMETHOD GetBoxObject(nsIBoxObject * *aBoxObject) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetBoxObject(aBoxObject); } \
  NS_IMETHOD Focus(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Focus(); } \
  NS_IMETHOD Blur(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Blur(); } \
  NS_IMETHOD Click(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Click(); } \
  NS_IMETHOD DoCommand(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->DoCommand(); } \
  NS_IMETHOD GetElementsByAttribute(const nsAString & name, const nsAString & value, nsIDOMNodeList * *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetElementsByAttribute(name, value, _retval); } \
  NS_IMETHOD GetElementsByAttributeNS(const nsAString & namespaceURI, const nsAString & name, const nsAString & value, nsIDOMNodeList * *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetElementsByAttributeNS(namespaceURI, name, value, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMXULElement : public nsIDOMXULElement
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMXULELEMENT

  nsDOMXULElement();

private:
  ~nsDOMXULElement();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMXULElement, nsIDOMXULElement)

nsDOMXULElement::nsDOMXULElement()
{
  /* member initializers and constructor code */
}

nsDOMXULElement::~nsDOMXULElement()
{
  /* destructor code */
}

/* attribute DOMString className; */
NS_IMETHODIMP nsDOMXULElement::GetClassName(nsAString & aClassName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMXULElement::SetClassName(const nsAString & aClassName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString align; */
NS_IMETHODIMP nsDOMXULElement::GetAlign(nsAString & aAlign)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMXULElement::SetAlign(const nsAString & aAlign)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString dir; */
NS_IMETHODIMP nsDOMXULElement::GetDir(nsAString & aDir)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMXULElement::SetDir(const nsAString & aDir)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString flex; */
NS_IMETHODIMP nsDOMXULElement::GetFlex(nsAString & aFlex)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMXULElement::SetFlex(const nsAString & aFlex)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString flexGroup; */
NS_IMETHODIMP nsDOMXULElement::GetFlexGroup(nsAString & aFlexGroup)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMXULElement::SetFlexGroup(const nsAString & aFlexGroup)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString ordinal; */
NS_IMETHODIMP nsDOMXULElement::GetOrdinal(nsAString & aOrdinal)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMXULElement::SetOrdinal(const nsAString & aOrdinal)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString orient; */
NS_IMETHODIMP nsDOMXULElement::GetOrient(nsAString & aOrient)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMXULElement::SetOrient(const nsAString & aOrient)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString pack; */
NS_IMETHODIMP nsDOMXULElement::GetPack(nsAString & aPack)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMXULElement::SetPack(const nsAString & aPack)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean hidden; */
NS_IMETHODIMP nsDOMXULElement::GetHidden(bool *aHidden)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMXULElement::SetHidden(bool aHidden)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean collapsed; */
NS_IMETHODIMP nsDOMXULElement::GetCollapsed(bool *aCollapsed)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMXULElement::SetCollapsed(bool aCollapsed)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString observes; */
NS_IMETHODIMP nsDOMXULElement::GetObserves(nsAString & aObserves)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMXULElement::SetObserves(const nsAString & aObserves)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString menu; */
NS_IMETHODIMP nsDOMXULElement::GetMenu(nsAString & aMenu)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMXULElement::SetMenu(const nsAString & aMenu)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString contextMenu; */
NS_IMETHODIMP nsDOMXULElement::GetContextMenu(nsAString & aContextMenu)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMXULElement::SetContextMenu(const nsAString & aContextMenu)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString tooltip; */
NS_IMETHODIMP nsDOMXULElement::GetTooltip(nsAString & aTooltip)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMXULElement::SetTooltip(const nsAString & aTooltip)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString width; */
NS_IMETHODIMP nsDOMXULElement::GetWidth(nsAString & aWidth)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMXULElement::SetWidth(const nsAString & aWidth)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString height; */
NS_IMETHODIMP nsDOMXULElement::GetHeight(nsAString & aHeight)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMXULElement::SetHeight(const nsAString & aHeight)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString minWidth; */
NS_IMETHODIMP nsDOMXULElement::GetMinWidth(nsAString & aMinWidth)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMXULElement::SetMinWidth(const nsAString & aMinWidth)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString minHeight; */
NS_IMETHODIMP nsDOMXULElement::GetMinHeight(nsAString & aMinHeight)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMXULElement::SetMinHeight(const nsAString & aMinHeight)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString maxWidth; */
NS_IMETHODIMP nsDOMXULElement::GetMaxWidth(nsAString & aMaxWidth)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMXULElement::SetMaxWidth(const nsAString & aMaxWidth)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString maxHeight; */
NS_IMETHODIMP nsDOMXULElement::GetMaxHeight(nsAString & aMaxHeight)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMXULElement::SetMaxHeight(const nsAString & aMaxHeight)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString persist; */
NS_IMETHODIMP nsDOMXULElement::GetPersist(nsAString & aPersist)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMXULElement::SetPersist(const nsAString & aPersist)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString left; */
NS_IMETHODIMP nsDOMXULElement::GetLeft(nsAString & aLeft)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMXULElement::SetLeft(const nsAString & aLeft)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString top; */
NS_IMETHODIMP nsDOMXULElement::GetTop(nsAString & aTop)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMXULElement::SetTop(const nsAString & aTop)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString datasources; */
NS_IMETHODIMP nsDOMXULElement::GetDatasources(nsAString & aDatasources)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMXULElement::SetDatasources(const nsAString & aDatasources)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString ref; */
NS_IMETHODIMP nsDOMXULElement::GetRef(nsAString & aRef)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMXULElement::SetRef(const nsAString & aRef)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString tooltipText; */
NS_IMETHODIMP nsDOMXULElement::GetTooltipText(nsAString & aTooltipText)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMXULElement::SetTooltipText(const nsAString & aTooltipText)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString statusText; */
NS_IMETHODIMP nsDOMXULElement::GetStatusText(nsAString & aStatusText)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMXULElement::SetStatusText(const nsAString & aStatusText)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean allowEvents; */
NS_IMETHODIMP nsDOMXULElement::GetAllowEvents(bool *aAllowEvents)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMXULElement::SetAllowEvents(bool aAllowEvents)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIRDFCompositeDataSource database; */
NS_IMETHODIMP nsDOMXULElement::GetDatabase(nsIRDFCompositeDataSource * *aDatabase)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIXULTemplateBuilder builder; */
NS_IMETHODIMP nsDOMXULElement::GetBuilder(nsIXULTemplateBuilder * *aBuilder)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIRDFResource resource; */
NS_IMETHODIMP nsDOMXULElement::GetResource(nsIRDFResource * *aResource)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIControllers controllers; */
NS_IMETHODIMP nsDOMXULElement::GetControllers(nsIControllers * *aControllers)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIBoxObject boxObject; */
NS_IMETHODIMP nsDOMXULElement::GetBoxObject(nsIBoxObject * *aBoxObject)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void focus (); */
NS_IMETHODIMP nsDOMXULElement::Focus()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void blur (); */
NS_IMETHODIMP nsDOMXULElement::Blur()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void click (); */
NS_IMETHODIMP nsDOMXULElement::Click()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void doCommand (); */
NS_IMETHODIMP nsDOMXULElement::DoCommand()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMNodeList getElementsByAttribute (in DOMString name, in DOMString value); */
NS_IMETHODIMP nsDOMXULElement::GetElementsByAttribute(const nsAString & name, const nsAString & value, nsIDOMNodeList * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMNodeList getElementsByAttributeNS (in DOMString namespaceURI, in DOMString name, in DOMString value); */
NS_IMETHODIMP nsDOMXULElement::GetElementsByAttributeNS(const nsAString & namespaceURI, const nsAString & name, const nsAString & value, nsIDOMNodeList * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMXULElement_h__ */
