/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr_w32_bld-000000000/build/dom/interfaces/core/nsIDOMNodeSelector.idl
 */

#ifndef __gen_nsIDOMNodeSelector_h__
#define __gen_nsIDOMNodeSelector_h__


#ifndef __gen_domstubs_h__
#include "domstubs.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIDOMNodeSelector */
#define NS_IDOMNODESELECTOR_IID_STR "7cebc153-168a-416c-ba5a-56a8c2ddb2ec"

#define NS_IDOMNODESELECTOR_IID \
  {0x7cebc153, 0x168a, 0x416c, \
    { 0xba, 0x5a, 0x56, 0xa8, 0xc2, 0xdd, 0xb2, 0xec }}

class NS_NO_VTABLE nsIDOMNodeSelector : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMNODESELECTOR_IID)

  /* nsIDOMElement querySelector ([Null (Stringify)] in DOMString selectors); */
  NS_IMETHOD QuerySelector(const nsAString & selectors, nsIDOMElement * *_retval) = 0;

  /* nsIDOMNodeList querySelectorAll ([Null (Stringify)] in DOMString selectors); */
  NS_IMETHOD QuerySelectorAll(const nsAString & selectors, nsIDOMNodeList * *_retval) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMNodeSelector, NS_IDOMNODESELECTOR_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMNODESELECTOR \
  NS_IMETHOD QuerySelector(const nsAString & selectors, nsIDOMElement * *_retval); \
  NS_IMETHOD QuerySelectorAll(const nsAString & selectors, nsIDOMNodeList * *_retval); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMNODESELECTOR(_to) \
  NS_IMETHOD QuerySelector(const nsAString & selectors, nsIDOMElement * *_retval) { return _to QuerySelector(selectors, _retval); } \
  NS_IMETHOD QuerySelectorAll(const nsAString & selectors, nsIDOMNodeList * *_retval) { return _to QuerySelectorAll(selectors, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMNODESELECTOR(_to) \
  NS_IMETHOD QuerySelector(const nsAString & selectors, nsIDOMElement * *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->QuerySelector(selectors, _retval); } \
  NS_IMETHOD QuerySelectorAll(const nsAString & selectors, nsIDOMNodeList * *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->QuerySelectorAll(selectors, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMNodeSelector : public nsIDOMNodeSelector
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMNODESELECTOR

  nsDOMNodeSelector();

private:
  ~nsDOMNodeSelector();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMNodeSelector, nsIDOMNodeSelector)

nsDOMNodeSelector::nsDOMNodeSelector()
{
  /* member initializers and constructor code */
}

nsDOMNodeSelector::~nsDOMNodeSelector()
{
  /* destructor code */
}

/* nsIDOMElement querySelector ([Null (Stringify)] in DOMString selectors); */
NS_IMETHODIMP nsDOMNodeSelector::QuerySelector(const nsAString & selectors, nsIDOMElement * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMNodeList querySelectorAll ([Null (Stringify)] in DOMString selectors); */
NS_IMETHODIMP nsDOMNodeSelector::QuerySelectorAll(const nsAString & selectors, nsIDOMNodeList * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMNodeSelector_h__ */
