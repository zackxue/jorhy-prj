/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr_w32_bld-000000000/build/netwerk/protocol/http/nsIHttpEventSink.idl
 */

#ifndef __gen_nsIHttpEventSink_h__
#define __gen_nsIHttpEventSink_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIChannel; /* forward declaration */

class nsIHttpChannel; /* forward declaration */

class nsIURI; /* forward declaration */


/* starting interface:    nsIHttpEventSink */
#define NS_IHTTPEVENTSINK_IID_STR "9475a6af-6352-4251-90f9-d65b1cd2ea15"

#define NS_IHTTPEVENTSINK_IID \
  {0x9475a6af, 0x6352, 0x4251, \
    { 0x90, 0xf9, 0xd6, 0x5b, 0x1c, 0xd2, 0xea, 0x15 }}

class NS_NO_VTABLE nsIHttpEventSink : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IHTTPEVENTSINK_IID)

  /* void onRedirect (in nsIHttpChannel httpChannel, in nsIChannel newChannel); */
  NS_IMETHOD OnRedirect(nsIHttpChannel *httpChannel, nsIChannel *newChannel) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIHttpEventSink, NS_IHTTPEVENTSINK_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIHTTPEVENTSINK \
  NS_IMETHOD OnRedirect(nsIHttpChannel *httpChannel, nsIChannel *newChannel); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIHTTPEVENTSINK(_to) \
  NS_IMETHOD OnRedirect(nsIHttpChannel *httpChannel, nsIChannel *newChannel) { return _to OnRedirect(httpChannel, newChannel); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIHTTPEVENTSINK(_to) \
  NS_IMETHOD OnRedirect(nsIHttpChannel *httpChannel, nsIChannel *newChannel) { return !_to ? NS_ERROR_NULL_POINTER : _to->OnRedirect(httpChannel, newChannel); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsHttpEventSink : public nsIHttpEventSink
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIHTTPEVENTSINK

  nsHttpEventSink();

private:
  ~nsHttpEventSink();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsHttpEventSink, nsIHttpEventSink)

nsHttpEventSink::nsHttpEventSink()
{
  /* member initializers and constructor code */
}

nsHttpEventSink::~nsHttpEventSink()
{
  /* destructor code */
}

/* void onRedirect (in nsIHttpChannel httpChannel, in nsIChannel newChannel); */
NS_IMETHODIMP nsHttpEventSink::OnRedirect(nsIHttpChannel *httpChannel, nsIChannel *newChannel)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIHttpEventSink_h__ */
