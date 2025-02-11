/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr_w32_bld-000000000/build/security/manager/ssl/public/nsIKeyModule.idl
 */

#ifndef __gen_nsIKeyModule_h__
#define __gen_nsIKeyModule_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIKeyObject */
#define NS_IKEYOBJECT_IID_STR "4b31f4ed-9424-4710-b946-79b7e33cf3a8"

#define NS_IKEYOBJECT_IID \
  {0x4b31f4ed, 0x9424, 0x4710, \
    { 0xb9, 0x46, 0x79, 0xb7, 0xe3, 0x3c, 0xf3, 0xa8 }}

class NS_NO_VTABLE nsIKeyObject : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IKEYOBJECT_IID)

  enum {
    SYM_KEY = 1,
    PRIVATE_KEY = 2,
    PUBLIC_KEY = 3,
    RC4 = 1,
    AES_CBC = 2,
    HMAC = 257
  };

  /* [noscript] void initKey (in short aAlgorithm, in voidPtr aKey); */
  NS_IMETHOD InitKey(int16_t aAlgorithm, void *aKey) = 0;

  /* [noscript] voidPtr getKeyObj (); */
  NS_IMETHOD GetKeyObj(void **_retval) = 0;

  /* short getType (); */
  NS_IMETHOD GetType(int16_t *_retval) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIKeyObject, NS_IKEYOBJECT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIKEYOBJECT \
  NS_IMETHOD InitKey(int16_t aAlgorithm, void *aKey); \
  NS_IMETHOD GetKeyObj(void **_retval); \
  NS_IMETHOD GetType(int16_t *_retval); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIKEYOBJECT(_to) \
  NS_IMETHOD InitKey(int16_t aAlgorithm, void *aKey) { return _to InitKey(aAlgorithm, aKey); } \
  NS_IMETHOD GetKeyObj(void **_retval) { return _to GetKeyObj(_retval); } \
  NS_IMETHOD GetType(int16_t *_retval) { return _to GetType(_retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIKEYOBJECT(_to) \
  NS_IMETHOD InitKey(int16_t aAlgorithm, void *aKey) { return !_to ? NS_ERROR_NULL_POINTER : _to->InitKey(aAlgorithm, aKey); } \
  NS_IMETHOD GetKeyObj(void **_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetKeyObj(_retval); } \
  NS_IMETHOD GetType(int16_t *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetType(_retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsKeyObject : public nsIKeyObject
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIKEYOBJECT

  nsKeyObject();

private:
  ~nsKeyObject();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsKeyObject, nsIKeyObject)

nsKeyObject::nsKeyObject()
{
  /* member initializers and constructor code */
}

nsKeyObject::~nsKeyObject()
{
  /* destructor code */
}

/* [noscript] void initKey (in short aAlgorithm, in voidPtr aKey); */
NS_IMETHODIMP nsKeyObject::InitKey(int16_t aAlgorithm, void *aKey)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] voidPtr getKeyObj (); */
NS_IMETHODIMP nsKeyObject::GetKeyObj(void **_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* short getType (); */
NS_IMETHODIMP nsKeyObject::GetType(int16_t *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIKeyObjectFactory */
#define NS_IKEYOBJECTFACTORY_IID_STR "264eb54d-e20d-49a0-890c-1a5986ea81c4"

#define NS_IKEYOBJECTFACTORY_IID \
  {0x264eb54d, 0xe20d, 0x49a0, \
    { 0x89, 0x0c, 0x1a, 0x59, 0x86, 0xea, 0x81, 0xc4 }}

class NS_NO_VTABLE nsIKeyObjectFactory : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IKEYOBJECTFACTORY_IID)

  /* nsIKeyObject lookupKeyByName (in ACString aName); */
  NS_IMETHOD LookupKeyByName(const nsACString & aName, nsIKeyObject * *_retval) = 0;

  /* nsIKeyObject unwrapKey (in short aAlgorithm, [array, size_is (aWrappedKeyLen), const] in octet aWrappedKey, in unsigned long aWrappedKeyLen); */
  NS_IMETHOD UnwrapKey(int16_t aAlgorithm, const uint8_t *aWrappedKey, uint32_t aWrappedKeyLen, nsIKeyObject * *_retval) = 0;

  /* nsIKeyObject keyFromString (in short aAlgorithm, in ACString aKey); */
  NS_IMETHOD KeyFromString(int16_t aAlgorithm, const nsACString & aKey, nsIKeyObject * *_retval) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIKeyObjectFactory, NS_IKEYOBJECTFACTORY_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIKEYOBJECTFACTORY \
  NS_IMETHOD LookupKeyByName(const nsACString & aName, nsIKeyObject * *_retval); \
  NS_IMETHOD UnwrapKey(int16_t aAlgorithm, const uint8_t *aWrappedKey, uint32_t aWrappedKeyLen, nsIKeyObject * *_retval); \
  NS_IMETHOD KeyFromString(int16_t aAlgorithm, const nsACString & aKey, nsIKeyObject * *_retval); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIKEYOBJECTFACTORY(_to) \
  NS_IMETHOD LookupKeyByName(const nsACString & aName, nsIKeyObject * *_retval) { return _to LookupKeyByName(aName, _retval); } \
  NS_IMETHOD UnwrapKey(int16_t aAlgorithm, const uint8_t *aWrappedKey, uint32_t aWrappedKeyLen, nsIKeyObject * *_retval) { return _to UnwrapKey(aAlgorithm, aWrappedKey, aWrappedKeyLen, _retval); } \
  NS_IMETHOD KeyFromString(int16_t aAlgorithm, const nsACString & aKey, nsIKeyObject * *_retval) { return _to KeyFromString(aAlgorithm, aKey, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIKEYOBJECTFACTORY(_to) \
  NS_IMETHOD LookupKeyByName(const nsACString & aName, nsIKeyObject * *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->LookupKeyByName(aName, _retval); } \
  NS_IMETHOD UnwrapKey(int16_t aAlgorithm, const uint8_t *aWrappedKey, uint32_t aWrappedKeyLen, nsIKeyObject * *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->UnwrapKey(aAlgorithm, aWrappedKey, aWrappedKeyLen, _retval); } \
  NS_IMETHOD KeyFromString(int16_t aAlgorithm, const nsACString & aKey, nsIKeyObject * *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->KeyFromString(aAlgorithm, aKey, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsKeyObjectFactory : public nsIKeyObjectFactory
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIKEYOBJECTFACTORY

  nsKeyObjectFactory();

private:
  ~nsKeyObjectFactory();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsKeyObjectFactory, nsIKeyObjectFactory)

nsKeyObjectFactory::nsKeyObjectFactory()
{
  /* member initializers and constructor code */
}

nsKeyObjectFactory::~nsKeyObjectFactory()
{
  /* destructor code */
}

/* nsIKeyObject lookupKeyByName (in ACString aName); */
NS_IMETHODIMP nsKeyObjectFactory::LookupKeyByName(const nsACString & aName, nsIKeyObject * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIKeyObject unwrapKey (in short aAlgorithm, [array, size_is (aWrappedKeyLen), const] in octet aWrappedKey, in unsigned long aWrappedKeyLen); */
NS_IMETHODIMP nsKeyObjectFactory::UnwrapKey(int16_t aAlgorithm, const uint8_t *aWrappedKey, uint32_t aWrappedKeyLen, nsIKeyObject * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIKeyObject keyFromString (in short aAlgorithm, in ACString aKey); */
NS_IMETHODIMP nsKeyObjectFactory::KeyFromString(int16_t aAlgorithm, const nsACString & aKey, nsIKeyObject * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIKeyModule_h__ */
