/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr_w32_bld-000000000/build/widget/nsIScreenManager.idl
 */

#ifndef __gen_nsIScreenManager_h__
#define __gen_nsIScreenManager_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#ifndef __gen_nsIScreen_h__
#include "nsIScreen.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIScreenManager */
#define NS_ISCREENMANAGER_IID_STR "b92319e6-9a84-4ca7-a2cc-eec22ea9854e"

#define NS_ISCREENMANAGER_IID \
  {0xb92319e6, 0x9a84, 0x4ca7, \
    { 0xa2, 0xcc, 0xee, 0xc2, 0x2e, 0xa9, 0x85, 0x4e }}

class NS_NO_VTABLE nsIScreenManager : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ISCREENMANAGER_IID)

  /* nsIScreen screenForRect (in long left, in long top, in long width, in long height); */
  NS_IMETHOD ScreenForRect(int32_t left, int32_t top, int32_t width, int32_t height, nsIScreen * *_retval) = 0;

  /* readonly attribute nsIScreen primaryScreen; */
  NS_IMETHOD GetPrimaryScreen(nsIScreen * *aPrimaryScreen) = 0;

  /* readonly attribute unsigned long numberOfScreens; */
  NS_IMETHOD GetNumberOfScreens(uint32_t *aNumberOfScreens) = 0;

  /* [noscript] nsIScreen screenForNativeWidget (in voidPtr nativeWidget); */
  NS_IMETHOD ScreenForNativeWidget(void *nativeWidget, nsIScreen * *_retval) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIScreenManager, NS_ISCREENMANAGER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSISCREENMANAGER \
  NS_IMETHOD ScreenForRect(int32_t left, int32_t top, int32_t width, int32_t height, nsIScreen * *_retval); \
  NS_IMETHOD GetPrimaryScreen(nsIScreen * *aPrimaryScreen); \
  NS_IMETHOD GetNumberOfScreens(uint32_t *aNumberOfScreens); \
  NS_IMETHOD ScreenForNativeWidget(void *nativeWidget, nsIScreen * *_retval); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSISCREENMANAGER(_to) \
  NS_IMETHOD ScreenForRect(int32_t left, int32_t top, int32_t width, int32_t height, nsIScreen * *_retval) { return _to ScreenForRect(left, top, width, height, _retval); } \
  NS_IMETHOD GetPrimaryScreen(nsIScreen * *aPrimaryScreen) { return _to GetPrimaryScreen(aPrimaryScreen); } \
  NS_IMETHOD GetNumberOfScreens(uint32_t *aNumberOfScreens) { return _to GetNumberOfScreens(aNumberOfScreens); } \
  NS_IMETHOD ScreenForNativeWidget(void *nativeWidget, nsIScreen * *_retval) { return _to ScreenForNativeWidget(nativeWidget, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSISCREENMANAGER(_to) \
  NS_IMETHOD ScreenForRect(int32_t left, int32_t top, int32_t width, int32_t height, nsIScreen * *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->ScreenForRect(left, top, width, height, _retval); } \
  NS_IMETHOD GetPrimaryScreen(nsIScreen * *aPrimaryScreen) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPrimaryScreen(aPrimaryScreen); } \
  NS_IMETHOD GetNumberOfScreens(uint32_t *aNumberOfScreens) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetNumberOfScreens(aNumberOfScreens); } \
  NS_IMETHOD ScreenForNativeWidget(void *nativeWidget, nsIScreen * *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->ScreenForNativeWidget(nativeWidget, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsScreenManager : public nsIScreenManager
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSISCREENMANAGER

  nsScreenManager();

private:
  ~nsScreenManager();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsScreenManager, nsIScreenManager)

nsScreenManager::nsScreenManager()
{
  /* member initializers and constructor code */
}

nsScreenManager::~nsScreenManager()
{
  /* destructor code */
}

/* nsIScreen screenForRect (in long left, in long top, in long width, in long height); */
NS_IMETHODIMP nsScreenManager::ScreenForRect(int32_t left, int32_t top, int32_t width, int32_t height, nsIScreen * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIScreen primaryScreen; */
NS_IMETHODIMP nsScreenManager::GetPrimaryScreen(nsIScreen * *aPrimaryScreen)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long numberOfScreens; */
NS_IMETHODIMP nsScreenManager::GetNumberOfScreens(uint32_t *aNumberOfScreens)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] nsIScreen screenForNativeWidget (in voidPtr nativeWidget); */
NS_IMETHODIMP nsScreenManager::ScreenForNativeWidget(void *nativeWidget, nsIScreen * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif



#endif /* __gen_nsIScreenManager_h__ */
