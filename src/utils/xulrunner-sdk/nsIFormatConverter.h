/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr_w32_bld-000000000/build/widget/nsIFormatConverter.idl
 */

#ifndef __gen_nsIFormatConverter_h__
#define __gen_nsIFormatConverter_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#ifndef __gen_nsISupportsArray_h__
#include "nsISupportsArray.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIFormatConverter */
#define NS_IFORMATCONVERTER_IID_STR "948a0023-e3a7-11d2-96cf-0060b0fb9956"

#define NS_IFORMATCONVERTER_IID \
  {0x948a0023, 0xe3a7, 0x11d2, \
    { 0x96, 0xcf, 0x00, 0x60, 0xb0, 0xfb, 0x99, 0x56 }}

class NS_NO_VTABLE nsIFormatConverter : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IFORMATCONVERTER_IID)

  /* nsISupportsArray getInputDataFlavors (); */
  NS_IMETHOD GetInputDataFlavors(nsISupportsArray * *_retval) = 0;

  /* nsISupportsArray getOutputDataFlavors (); */
  NS_IMETHOD GetOutputDataFlavors(nsISupportsArray * *_retval) = 0;

  /* boolean canConvert (in string aFromDataFlavor, in string aToDataFlavor); */
  NS_IMETHOD CanConvert(const char * aFromDataFlavor, const char * aToDataFlavor, bool *_retval) = 0;

  /* void convert (in string aFromDataFlavor, in nsISupports aFromData, in unsigned long aDataLen, in string aToDataFlavor, out nsISupports aToData, out unsigned long aDataToLen); */
  NS_IMETHOD Convert(const char * aFromDataFlavor, nsISupports *aFromData, uint32_t aDataLen, const char * aToDataFlavor, nsISupports * *aToData, uint32_t *aDataToLen) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIFormatConverter, NS_IFORMATCONVERTER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIFORMATCONVERTER \
  NS_IMETHOD GetInputDataFlavors(nsISupportsArray * *_retval); \
  NS_IMETHOD GetOutputDataFlavors(nsISupportsArray * *_retval); \
  NS_IMETHOD CanConvert(const char * aFromDataFlavor, const char * aToDataFlavor, bool *_retval); \
  NS_IMETHOD Convert(const char * aFromDataFlavor, nsISupports *aFromData, uint32_t aDataLen, const char * aToDataFlavor, nsISupports * *aToData, uint32_t *aDataToLen); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIFORMATCONVERTER(_to) \
  NS_IMETHOD GetInputDataFlavors(nsISupportsArray * *_retval) { return _to GetInputDataFlavors(_retval); } \
  NS_IMETHOD GetOutputDataFlavors(nsISupportsArray * *_retval) { return _to GetOutputDataFlavors(_retval); } \
  NS_IMETHOD CanConvert(const char * aFromDataFlavor, const char * aToDataFlavor, bool *_retval) { return _to CanConvert(aFromDataFlavor, aToDataFlavor, _retval); } \
  NS_IMETHOD Convert(const char * aFromDataFlavor, nsISupports *aFromData, uint32_t aDataLen, const char * aToDataFlavor, nsISupports * *aToData, uint32_t *aDataToLen) { return _to Convert(aFromDataFlavor, aFromData, aDataLen, aToDataFlavor, aToData, aDataToLen); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIFORMATCONVERTER(_to) \
  NS_IMETHOD GetInputDataFlavors(nsISupportsArray * *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetInputDataFlavors(_retval); } \
  NS_IMETHOD GetOutputDataFlavors(nsISupportsArray * *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOutputDataFlavors(_retval); } \
  NS_IMETHOD CanConvert(const char * aFromDataFlavor, const char * aToDataFlavor, bool *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->CanConvert(aFromDataFlavor, aToDataFlavor, _retval); } \
  NS_IMETHOD Convert(const char * aFromDataFlavor, nsISupports *aFromData, uint32_t aDataLen, const char * aToDataFlavor, nsISupports * *aToData, uint32_t *aDataToLen) { return !_to ? NS_ERROR_NULL_POINTER : _to->Convert(aFromDataFlavor, aFromData, aDataLen, aToDataFlavor, aToData, aDataToLen); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsFormatConverter : public nsIFormatConverter
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIFORMATCONVERTER

  nsFormatConverter();

private:
  ~nsFormatConverter();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsFormatConverter, nsIFormatConverter)

nsFormatConverter::nsFormatConverter()
{
  /* member initializers and constructor code */
}

nsFormatConverter::~nsFormatConverter()
{
  /* destructor code */
}

/* nsISupportsArray getInputDataFlavors (); */
NS_IMETHODIMP nsFormatConverter::GetInputDataFlavors(nsISupportsArray * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsISupportsArray getOutputDataFlavors (); */
NS_IMETHODIMP nsFormatConverter::GetOutputDataFlavors(nsISupportsArray * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean canConvert (in string aFromDataFlavor, in string aToDataFlavor); */
NS_IMETHODIMP nsFormatConverter::CanConvert(const char * aFromDataFlavor, const char * aToDataFlavor, bool *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void convert (in string aFromDataFlavor, in nsISupports aFromData, in unsigned long aDataLen, in string aToDataFlavor, out nsISupports aToData, out unsigned long aDataToLen); */
NS_IMETHODIMP nsFormatConverter::Convert(const char * aFromDataFlavor, nsISupports *aFromData, uint32_t aDataLen, const char * aToDataFlavor, nsISupports * *aToData, uint32_t *aDataToLen)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif



#endif /* __gen_nsIFormatConverter_h__ */
