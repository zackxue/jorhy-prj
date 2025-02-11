/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr_w32_bld-000000000/build/toolkit/components/feeds/nsIFeedContainer.idl
 */

#ifndef __gen_nsIFeedContainer_h__
#define __gen_nsIFeedContainer_h__


#ifndef __gen_nsIFeedElementBase_h__
#include "nsIFeedElementBase.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIURI; /* forward declaration */

class nsIWritablePropertyBag2; /* forward declaration */

class nsIArray; /* forward declaration */

class nsIFeedTextConstruct; /* forward declaration */


/* starting interface:    nsIFeedContainer */
#define NS_IFEEDCONTAINER_IID_STR "577a1b4c-b3d4-4c76-9cf8-753e6606114f"

#define NS_IFEEDCONTAINER_IID \
  {0x577a1b4c, 0xb3d4, 0x4c76, \
    { 0x9c, 0xf8, 0x75, 0x3e, 0x66, 0x06, 0x11, 0x4f }}

class NS_NO_VTABLE nsIFeedContainer : public nsIFeedElementBase {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IFEEDCONTAINER_IID)

  /* attribute AString id; */
  NS_IMETHOD GetId(nsAString & aId) = 0;
  NS_IMETHOD SetId(const nsAString & aId) = 0;

  /* attribute nsIWritablePropertyBag2 fields; */
  NS_IMETHOD GetFields(nsIWritablePropertyBag2 * *aFields) = 0;
  NS_IMETHOD SetFields(nsIWritablePropertyBag2 *aFields) = 0;

  /* attribute nsIFeedTextConstruct title; */
  NS_IMETHOD GetTitle(nsIFeedTextConstruct * *aTitle) = 0;
  NS_IMETHOD SetTitle(nsIFeedTextConstruct *aTitle) = 0;

  /* attribute nsIURI link; */
  NS_IMETHOD GetLink(nsIURI * *aLink) = 0;
  NS_IMETHOD SetLink(nsIURI *aLink) = 0;

  /* attribute nsIArray links; */
  NS_IMETHOD GetLinks(nsIArray * *aLinks) = 0;
  NS_IMETHOD SetLinks(nsIArray *aLinks) = 0;

  /* attribute nsIArray categories; */
  NS_IMETHOD GetCategories(nsIArray * *aCategories) = 0;
  NS_IMETHOD SetCategories(nsIArray *aCategories) = 0;

  /* attribute nsIFeedTextConstruct rights; */
  NS_IMETHOD GetRights(nsIFeedTextConstruct * *aRights) = 0;
  NS_IMETHOD SetRights(nsIFeedTextConstruct *aRights) = 0;

  /* attribute nsIArray authors; */
  NS_IMETHOD GetAuthors(nsIArray * *aAuthors) = 0;
  NS_IMETHOD SetAuthors(nsIArray *aAuthors) = 0;

  /* attribute nsIArray contributors; */
  NS_IMETHOD GetContributors(nsIArray * *aContributors) = 0;
  NS_IMETHOD SetContributors(nsIArray *aContributors) = 0;

  /* attribute AString updated; */
  NS_IMETHOD GetUpdated(nsAString & aUpdated) = 0;
  NS_IMETHOD SetUpdated(const nsAString & aUpdated) = 0;

  /* void normalize (); */
  NS_IMETHOD Normalize(void) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIFeedContainer, NS_IFEEDCONTAINER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIFEEDCONTAINER \
  NS_IMETHOD GetId(nsAString & aId); \
  NS_IMETHOD SetId(const nsAString & aId); \
  NS_IMETHOD GetFields(nsIWritablePropertyBag2 * *aFields); \
  NS_IMETHOD SetFields(nsIWritablePropertyBag2 *aFields); \
  NS_IMETHOD GetTitle(nsIFeedTextConstruct * *aTitle); \
  NS_IMETHOD SetTitle(nsIFeedTextConstruct *aTitle); \
  NS_IMETHOD GetLink(nsIURI * *aLink); \
  NS_IMETHOD SetLink(nsIURI *aLink); \
  NS_IMETHOD GetLinks(nsIArray * *aLinks); \
  NS_IMETHOD SetLinks(nsIArray *aLinks); \
  NS_IMETHOD GetCategories(nsIArray * *aCategories); \
  NS_IMETHOD SetCategories(nsIArray *aCategories); \
  NS_IMETHOD GetRights(nsIFeedTextConstruct * *aRights); \
  NS_IMETHOD SetRights(nsIFeedTextConstruct *aRights); \
  NS_IMETHOD GetAuthors(nsIArray * *aAuthors); \
  NS_IMETHOD SetAuthors(nsIArray *aAuthors); \
  NS_IMETHOD GetContributors(nsIArray * *aContributors); \
  NS_IMETHOD SetContributors(nsIArray *aContributors); \
  NS_IMETHOD GetUpdated(nsAString & aUpdated); \
  NS_IMETHOD SetUpdated(const nsAString & aUpdated); \
  NS_IMETHOD Normalize(void); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIFEEDCONTAINER(_to) \
  NS_IMETHOD GetId(nsAString & aId) { return _to GetId(aId); } \
  NS_IMETHOD SetId(const nsAString & aId) { return _to SetId(aId); } \
  NS_IMETHOD GetFields(nsIWritablePropertyBag2 * *aFields) { return _to GetFields(aFields); } \
  NS_IMETHOD SetFields(nsIWritablePropertyBag2 *aFields) { return _to SetFields(aFields); } \
  NS_IMETHOD GetTitle(nsIFeedTextConstruct * *aTitle) { return _to GetTitle(aTitle); } \
  NS_IMETHOD SetTitle(nsIFeedTextConstruct *aTitle) { return _to SetTitle(aTitle); } \
  NS_IMETHOD GetLink(nsIURI * *aLink) { return _to GetLink(aLink); } \
  NS_IMETHOD SetLink(nsIURI *aLink) { return _to SetLink(aLink); } \
  NS_IMETHOD GetLinks(nsIArray * *aLinks) { return _to GetLinks(aLinks); } \
  NS_IMETHOD SetLinks(nsIArray *aLinks) { return _to SetLinks(aLinks); } \
  NS_IMETHOD GetCategories(nsIArray * *aCategories) { return _to GetCategories(aCategories); } \
  NS_IMETHOD SetCategories(nsIArray *aCategories) { return _to SetCategories(aCategories); } \
  NS_IMETHOD GetRights(nsIFeedTextConstruct * *aRights) { return _to GetRights(aRights); } \
  NS_IMETHOD SetRights(nsIFeedTextConstruct *aRights) { return _to SetRights(aRights); } \
  NS_IMETHOD GetAuthors(nsIArray * *aAuthors) { return _to GetAuthors(aAuthors); } \
  NS_IMETHOD SetAuthors(nsIArray *aAuthors) { return _to SetAuthors(aAuthors); } \
  NS_IMETHOD GetContributors(nsIArray * *aContributors) { return _to GetContributors(aContributors); } \
  NS_IMETHOD SetContributors(nsIArray *aContributors) { return _to SetContributors(aContributors); } \
  NS_IMETHOD GetUpdated(nsAString & aUpdated) { return _to GetUpdated(aUpdated); } \
  NS_IMETHOD SetUpdated(const nsAString & aUpdated) { return _to SetUpdated(aUpdated); } \
  NS_IMETHOD Normalize(void) { return _to Normalize(); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIFEEDCONTAINER(_to) \
  NS_IMETHOD GetId(nsAString & aId) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetId(aId); } \
  NS_IMETHOD SetId(const nsAString & aId) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetId(aId); } \
  NS_IMETHOD GetFields(nsIWritablePropertyBag2 * *aFields) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFields(aFields); } \
  NS_IMETHOD SetFields(nsIWritablePropertyBag2 *aFields) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFields(aFields); } \
  NS_IMETHOD GetTitle(nsIFeedTextConstruct * *aTitle) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTitle(aTitle); } \
  NS_IMETHOD SetTitle(nsIFeedTextConstruct *aTitle) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetTitle(aTitle); } \
  NS_IMETHOD GetLink(nsIURI * *aLink) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLink(aLink); } \
  NS_IMETHOD SetLink(nsIURI *aLink) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetLink(aLink); } \
  NS_IMETHOD GetLinks(nsIArray * *aLinks) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLinks(aLinks); } \
  NS_IMETHOD SetLinks(nsIArray *aLinks) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetLinks(aLinks); } \
  NS_IMETHOD GetCategories(nsIArray * *aCategories) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCategories(aCategories); } \
  NS_IMETHOD SetCategories(nsIArray *aCategories) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetCategories(aCategories); } \
  NS_IMETHOD GetRights(nsIFeedTextConstruct * *aRights) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRights(aRights); } \
  NS_IMETHOD SetRights(nsIFeedTextConstruct *aRights) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetRights(aRights); } \
  NS_IMETHOD GetAuthors(nsIArray * *aAuthors) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAuthors(aAuthors); } \
  NS_IMETHOD SetAuthors(nsIArray *aAuthors) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAuthors(aAuthors); } \
  NS_IMETHOD GetContributors(nsIArray * *aContributors) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetContributors(aContributors); } \
  NS_IMETHOD SetContributors(nsIArray *aContributors) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetContributors(aContributors); } \
  NS_IMETHOD GetUpdated(nsAString & aUpdated) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetUpdated(aUpdated); } \
  NS_IMETHOD SetUpdated(const nsAString & aUpdated) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetUpdated(aUpdated); } \
  NS_IMETHOD Normalize(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Normalize(); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsFeedContainer : public nsIFeedContainer
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIFEEDCONTAINER

  nsFeedContainer();

private:
  ~nsFeedContainer();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsFeedContainer, nsIFeedContainer)

nsFeedContainer::nsFeedContainer()
{
  /* member initializers and constructor code */
}

nsFeedContainer::~nsFeedContainer()
{
  /* destructor code */
}

/* attribute AString id; */
NS_IMETHODIMP nsFeedContainer::GetId(nsAString & aId)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsFeedContainer::SetId(const nsAString & aId)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIWritablePropertyBag2 fields; */
NS_IMETHODIMP nsFeedContainer::GetFields(nsIWritablePropertyBag2 * *aFields)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsFeedContainer::SetFields(nsIWritablePropertyBag2 *aFields)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIFeedTextConstruct title; */
NS_IMETHODIMP nsFeedContainer::GetTitle(nsIFeedTextConstruct * *aTitle)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsFeedContainer::SetTitle(nsIFeedTextConstruct *aTitle)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIURI link; */
NS_IMETHODIMP nsFeedContainer::GetLink(nsIURI * *aLink)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsFeedContainer::SetLink(nsIURI *aLink)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIArray links; */
NS_IMETHODIMP nsFeedContainer::GetLinks(nsIArray * *aLinks)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsFeedContainer::SetLinks(nsIArray *aLinks)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIArray categories; */
NS_IMETHODIMP nsFeedContainer::GetCategories(nsIArray * *aCategories)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsFeedContainer::SetCategories(nsIArray *aCategories)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIFeedTextConstruct rights; */
NS_IMETHODIMP nsFeedContainer::GetRights(nsIFeedTextConstruct * *aRights)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsFeedContainer::SetRights(nsIFeedTextConstruct *aRights)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIArray authors; */
NS_IMETHODIMP nsFeedContainer::GetAuthors(nsIArray * *aAuthors)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsFeedContainer::SetAuthors(nsIArray *aAuthors)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIArray contributors; */
NS_IMETHODIMP nsFeedContainer::GetContributors(nsIArray * *aContributors)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsFeedContainer::SetContributors(nsIArray *aContributors)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute AString updated; */
NS_IMETHODIMP nsFeedContainer::GetUpdated(nsAString & aUpdated)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsFeedContainer::SetUpdated(const nsAString & aUpdated)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void normalize (); */
NS_IMETHODIMP nsFeedContainer::Normalize()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIFeedContainer_h__ */
