/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr_w32_bld-000000000/build/content/base/public/nsISelectionDisplay.idl
 */

#ifndef __gen_nsISelectionDisplay_h__
#define __gen_nsISelectionDisplay_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsISelectionDisplay */
#define NS_ISELECTIONDISPLAY_IID_STR "0ddf9e1c-1dd2-11b2-a183-908a08aa75ae"

#define NS_ISELECTIONDISPLAY_IID \
  {0x0ddf9e1c, 0x1dd2, 0x11b2, \
    { 0xa1, 0x83, 0x90, 0x8a, 0x08, 0xaa, 0x75, 0xae }}

class NS_NO_VTABLE nsISelectionDisplay : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ISELECTIONDISPLAY_IID)

  enum {
    DISPLAY_TEXT = 1,
    DISPLAY_IMAGES = 2,
    DISPLAY_FRAMES = 4,
    DISPLAY_ALL = 7
  };

  /* void setSelectionFlags (in short toggle); */
  NS_IMETHOD SetSelectionFlags(int16_t toggle) = 0;

  /* short getSelectionFlags (); */
  NS_IMETHOD GetSelectionFlags(int16_t *_retval) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsISelectionDisplay, NS_ISELECTIONDISPLAY_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSISELECTIONDISPLAY \
  NS_IMETHOD SetSelectionFlags(int16_t toggle); \
  NS_IMETHOD GetSelectionFlags(int16_t *_retval); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSISELECTIONDISPLAY(_to) \
  NS_IMETHOD SetSelectionFlags(int16_t toggle) { return _to SetSelectionFlags(toggle); } \
  NS_IMETHOD GetSelectionFlags(int16_t *_retval) { return _to GetSelectionFlags(_retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSISELECTIONDISPLAY(_to) \
  NS_IMETHOD SetSelectionFlags(int16_t toggle) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetSelectionFlags(toggle); } \
  NS_IMETHOD GetSelectionFlags(int16_t *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSelectionFlags(_retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsSelectionDisplay : public nsISelectionDisplay
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSISELECTIONDISPLAY

  nsSelectionDisplay();

private:
  ~nsSelectionDisplay();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsSelectionDisplay, nsISelectionDisplay)

nsSelectionDisplay::nsSelectionDisplay()
{
  /* member initializers and constructor code */
}

nsSelectionDisplay::~nsSelectionDisplay()
{
  /* destructor code */
}

/* void setSelectionFlags (in short toggle); */
NS_IMETHODIMP nsSelectionDisplay::SetSelectionFlags(int16_t toggle)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* short getSelectionFlags (); */
NS_IMETHODIMP nsSelectionDisplay::GetSelectionFlags(int16_t *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsISelectionDisplay_h__ */
