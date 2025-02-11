/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr_w32_bld-000000000/build/layout/xul/tree/nsITreeContentView.idl
 */

#ifndef __gen_nsITreeContentView_h__
#define __gen_nsITreeContentView_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#ifndef __gen_nsIDOMElement_h__
#include "nsIDOMElement.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsITreeContentView */
#define NS_ITREECONTENTVIEW_IID_STR "5ef62896-0c0a-41f1-bb3c-44a60f5dfdab"

#define NS_ITREECONTENTVIEW_IID \
  {0x5ef62896, 0x0c0a, 0x41f1, \
    { 0xbb, 0x3c, 0x44, 0xa6, 0x0f, 0x5d, 0xfd, 0xab }}

class NS_NO_VTABLE nsITreeContentView : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ITREECONTENTVIEW_IID)

  /* nsIDOMElement getItemAtIndex (in long index); */
  NS_IMETHOD GetItemAtIndex(int32_t index, nsIDOMElement * *_retval) = 0;

  /* long getIndexOfItem (in nsIDOMElement item); */
  NS_IMETHOD GetIndexOfItem(nsIDOMElement *item, int32_t *_retval) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsITreeContentView, NS_ITREECONTENTVIEW_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSITREECONTENTVIEW \
  NS_IMETHOD GetItemAtIndex(int32_t index, nsIDOMElement * *_retval); \
  NS_IMETHOD GetIndexOfItem(nsIDOMElement *item, int32_t *_retval); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSITREECONTENTVIEW(_to) \
  NS_IMETHOD GetItemAtIndex(int32_t index, nsIDOMElement * *_retval) { return _to GetItemAtIndex(index, _retval); } \
  NS_IMETHOD GetIndexOfItem(nsIDOMElement *item, int32_t *_retval) { return _to GetIndexOfItem(item, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSITREECONTENTVIEW(_to) \
  NS_IMETHOD GetItemAtIndex(int32_t index, nsIDOMElement * *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetItemAtIndex(index, _retval); } \
  NS_IMETHOD GetIndexOfItem(nsIDOMElement *item, int32_t *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIndexOfItem(item, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsTreeContentView : public nsITreeContentView
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSITREECONTENTVIEW

  nsTreeContentView();

private:
  ~nsTreeContentView();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsTreeContentView, nsITreeContentView)

nsTreeContentView::nsTreeContentView()
{
  /* member initializers and constructor code */
}

nsTreeContentView::~nsTreeContentView()
{
  /* destructor code */
}

/* nsIDOMElement getItemAtIndex (in long index); */
NS_IMETHODIMP nsTreeContentView::GetItemAtIndex(int32_t index, nsIDOMElement * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* long getIndexOfItem (in nsIDOMElement item); */
NS_IMETHODIMP nsTreeContentView::GetIndexOfItem(nsIDOMElement *item, int32_t *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsITreeContentView_h__ */
