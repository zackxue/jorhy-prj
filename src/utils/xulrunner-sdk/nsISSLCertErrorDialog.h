/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr_w32_bld-000000000/build/security/manager/ssl/public/nsISSLCertErrorDialog.idl
 */

#ifndef __gen_nsISSLCertErrorDialog_h__
#define __gen_nsISSLCertErrorDialog_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIInterfaceRequestor; /* forward declaration */

class nsIX509Cert; /* forward declaration */

class nsISSLStatus; /* forward declaration */


/* starting interface:    nsISSLCertErrorDialog */
#define NS_ISSLCERTERRORDIALOG_IID_STR "0729ce8e-8935-4989-ba72-a2d6307f2365"

#define NS_ISSLCERTERRORDIALOG_IID \
  {0x0729ce8e, 0x8935, 0x4989, \
    { 0xba, 0x72, 0xa2, 0xd6, 0x30, 0x7f, 0x23, 0x65 }}

class NS_NO_VTABLE nsISSLCertErrorDialog : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ISSLCERTERRORDIALOG_IID)

  /* void showCertError (in nsIInterfaceRequestor ctx, in nsISSLStatus status, in nsIX509Cert cert, in AString textErrorMessage, in AString htmlErrorMessage, in ACString hostName, in uint32_t portNumber); */
  NS_IMETHOD ShowCertError(nsIInterfaceRequestor *ctx, nsISSLStatus *status, nsIX509Cert *cert, const nsAString & textErrorMessage, const nsAString & htmlErrorMessage, const nsACString & hostName, uint32_t portNumber) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsISSLCertErrorDialog, NS_ISSLCERTERRORDIALOG_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSISSLCERTERRORDIALOG \
  NS_IMETHOD ShowCertError(nsIInterfaceRequestor *ctx, nsISSLStatus *status, nsIX509Cert *cert, const nsAString & textErrorMessage, const nsAString & htmlErrorMessage, const nsACString & hostName, uint32_t portNumber); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSISSLCERTERRORDIALOG(_to) \
  NS_IMETHOD ShowCertError(nsIInterfaceRequestor *ctx, nsISSLStatus *status, nsIX509Cert *cert, const nsAString & textErrorMessage, const nsAString & htmlErrorMessage, const nsACString & hostName, uint32_t portNumber) { return _to ShowCertError(ctx, status, cert, textErrorMessage, htmlErrorMessage, hostName, portNumber); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSISSLCERTERRORDIALOG(_to) \
  NS_IMETHOD ShowCertError(nsIInterfaceRequestor *ctx, nsISSLStatus *status, nsIX509Cert *cert, const nsAString & textErrorMessage, const nsAString & htmlErrorMessage, const nsACString & hostName, uint32_t portNumber) { return !_to ? NS_ERROR_NULL_POINTER : _to->ShowCertError(ctx, status, cert, textErrorMessage, htmlErrorMessage, hostName, portNumber); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsSSLCertErrorDialog : public nsISSLCertErrorDialog
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSISSLCERTERRORDIALOG

  nsSSLCertErrorDialog();

private:
  ~nsSSLCertErrorDialog();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsSSLCertErrorDialog, nsISSLCertErrorDialog)

nsSSLCertErrorDialog::nsSSLCertErrorDialog()
{
  /* member initializers and constructor code */
}

nsSSLCertErrorDialog::~nsSSLCertErrorDialog()
{
  /* destructor code */
}

/* void showCertError (in nsIInterfaceRequestor ctx, in nsISSLStatus status, in nsIX509Cert cert, in AString textErrorMessage, in AString htmlErrorMessage, in ACString hostName, in uint32_t portNumber); */
NS_IMETHODIMP nsSSLCertErrorDialog::ShowCertError(nsIInterfaceRequestor *ctx, nsISSLStatus *status, nsIX509Cert *cert, const nsAString & textErrorMessage, const nsAString & htmlErrorMessage, const nsACString & hostName, uint32_t portNumber)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif

#define NS_SSLCERTERRORDIALOG_CONTRACTID "@mozilla.org/nsSSLCertErrorDialog;1"

#endif /* __gen_nsISSLCertErrorDialog_h__ */
