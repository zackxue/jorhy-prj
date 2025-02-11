/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr_w32_bld-000000000/build/dom/interfaces/base/nsIDOMPlugin.idl
 */

#ifndef __gen_nsIDOMPlugin_h__
#define __gen_nsIDOMPlugin_h__


#ifndef __gen_domstubs_h__
#include "domstubs.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIDOMPlugin */
#define NS_IDOMPLUGIN_IID_STR "ff69a292-c74d-4ef5-9d0f-86112fff2d5b"

#define NS_IDOMPLUGIN_IID \
  {0xff69a292, 0xc74d, 0x4ef5, \
    { 0x9d, 0x0f, 0x86, 0x11, 0x2f, 0xff, 0x2d, 0x5b }}

class NS_NO_VTABLE nsIDOMPlugin : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMPLUGIN_IID)

  /* readonly attribute DOMString description; */
  NS_IMETHOD GetDescription(nsAString & aDescription) = 0;

  /* readonly attribute DOMString filename; */
  NS_IMETHOD GetFilename(nsAString & aFilename) = 0;

  /* readonly attribute DOMString version; */
  NS_IMETHOD GetVersion(nsAString & aVersion) = 0;

  /* readonly attribute DOMString name; */
  NS_IMETHOD GetName(nsAString & aName) = 0;

  /* readonly attribute unsigned long length; */
  NS_IMETHOD GetLength(uint32_t *aLength) = 0;

  /* nsIDOMMimeType item (in unsigned long index); */
  NS_IMETHOD Item(uint32_t index, nsIDOMMimeType * *_retval) = 0;

  /* nsIDOMMimeType namedItem (in DOMString name); */
  NS_IMETHOD NamedItem(const nsAString & name, nsIDOMMimeType * *_retval) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMPlugin, NS_IDOMPLUGIN_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMPLUGIN \
  NS_IMETHOD GetDescription(nsAString & aDescription); \
  NS_IMETHOD GetFilename(nsAString & aFilename); \
  NS_IMETHOD GetVersion(nsAString & aVersion); \
  NS_IMETHOD GetName(nsAString & aName); \
  NS_IMETHOD GetLength(uint32_t *aLength); \
  NS_IMETHOD Item(uint32_t index, nsIDOMMimeType * *_retval); \
  NS_IMETHOD NamedItem(const nsAString & name, nsIDOMMimeType * *_retval); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMPLUGIN(_to) \
  NS_IMETHOD GetDescription(nsAString & aDescription) { return _to GetDescription(aDescription); } \
  NS_IMETHOD GetFilename(nsAString & aFilename) { return _to GetFilename(aFilename); } \
  NS_IMETHOD GetVersion(nsAString & aVersion) { return _to GetVersion(aVersion); } \
  NS_IMETHOD GetName(nsAString & aName) { return _to GetName(aName); } \
  NS_IMETHOD GetLength(uint32_t *aLength) { return _to GetLength(aLength); } \
  NS_IMETHOD Item(uint32_t index, nsIDOMMimeType * *_retval) { return _to Item(index, _retval); } \
  NS_IMETHOD NamedItem(const nsAString & name, nsIDOMMimeType * *_retval) { return _to NamedItem(name, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMPLUGIN(_to) \
  NS_IMETHOD GetDescription(nsAString & aDescription) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDescription(aDescription); } \
  NS_IMETHOD GetFilename(nsAString & aFilename) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFilename(aFilename); } \
  NS_IMETHOD GetVersion(nsAString & aVersion) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetVersion(aVersion); } \
  NS_IMETHOD GetName(nsAString & aName) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetName(aName); } \
  NS_IMETHOD GetLength(uint32_t *aLength) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLength(aLength); } \
  NS_IMETHOD Item(uint32_t index, nsIDOMMimeType * *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->Item(index, _retval); } \
  NS_IMETHOD NamedItem(const nsAString & name, nsIDOMMimeType * *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->NamedItem(name, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMPlugin : public nsIDOMPlugin
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMPLUGIN

  nsDOMPlugin();

private:
  ~nsDOMPlugin();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMPlugin, nsIDOMPlugin)

nsDOMPlugin::nsDOMPlugin()
{
  /* member initializers and constructor code */
}

nsDOMPlugin::~nsDOMPlugin()
{
  /* destructor code */
}

/* readonly attribute DOMString description; */
NS_IMETHODIMP nsDOMPlugin::GetDescription(nsAString & aDescription)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMString filename; */
NS_IMETHODIMP nsDOMPlugin::GetFilename(nsAString & aFilename)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMString version; */
NS_IMETHODIMP nsDOMPlugin::GetVersion(nsAString & aVersion)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMString name; */
NS_IMETHODIMP nsDOMPlugin::GetName(nsAString & aName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long length; */
NS_IMETHODIMP nsDOMPlugin::GetLength(uint32_t *aLength)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMMimeType item (in unsigned long index); */
NS_IMETHODIMP nsDOMPlugin::Item(uint32_t index, nsIDOMMimeType * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMMimeType namedItem (in DOMString name); */
NS_IMETHODIMP nsDOMPlugin::NamedItem(const nsAString & name, nsIDOMMimeType * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMPlugin_h__ */
