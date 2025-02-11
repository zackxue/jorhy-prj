/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr_w32_bld-000000000/build/rdf/base/idl/rdfIDataSource.idl
 */

#ifndef __gen_rdfIDataSource_h__
#define __gen_rdfIDataSource_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class rdfITripleVisitor; /* forward declaration */


/* starting interface:    rdfIDataSource */
#define RDFIDATASOURCE_IID_STR "ebce86bd-1568-4a34-a808-9ccf9cde8087"

#define RDFIDATASOURCE_IID \
  {0xebce86bd, 0x1568, 0x4a34, \
    { 0xa8, 0x08, 0x9c, 0xcf, 0x9c, 0xde, 0x80, 0x87 }}

class NS_NO_VTABLE rdfIDataSource : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(RDFIDATASOURCE_IID)

  /* void visitAllSubjects (in rdfITripleVisitor aVisitor); */
  NS_IMETHOD VisitAllSubjects(rdfITripleVisitor *aVisitor) = 0;

  /* void visitAllTriples (in rdfITripleVisitor aVisitor); */
  NS_IMETHOD VisitAllTriples(rdfITripleVisitor *aVisitor) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(rdfIDataSource, RDFIDATASOURCE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_RDFIDATASOURCE \
  NS_IMETHOD VisitAllSubjects(rdfITripleVisitor *aVisitor); \
  NS_IMETHOD VisitAllTriples(rdfITripleVisitor *aVisitor); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_RDFIDATASOURCE(_to) \
  NS_IMETHOD VisitAllSubjects(rdfITripleVisitor *aVisitor) { return _to VisitAllSubjects(aVisitor); } \
  NS_IMETHOD VisitAllTriples(rdfITripleVisitor *aVisitor) { return _to VisitAllTriples(aVisitor); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_RDFIDATASOURCE(_to) \
  NS_IMETHOD VisitAllSubjects(rdfITripleVisitor *aVisitor) { return !_to ? NS_ERROR_NULL_POINTER : _to->VisitAllSubjects(aVisitor); } \
  NS_IMETHOD VisitAllTriples(rdfITripleVisitor *aVisitor) { return !_to ? NS_ERROR_NULL_POINTER : _to->VisitAllTriples(aVisitor); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public rdfIDataSource
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_RDFIDATASOURCE

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, rdfIDataSource)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* void visitAllSubjects (in rdfITripleVisitor aVisitor); */
NS_IMETHODIMP _MYCLASS_::VisitAllSubjects(rdfITripleVisitor *aVisitor)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void visitAllTriples (in rdfITripleVisitor aVisitor); */
NS_IMETHODIMP _MYCLASS_::VisitAllTriples(rdfITripleVisitor *aVisitor)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_rdfIDataSource_h__ */
