/* soapStub.h
   Generated by gSOAP 2.8.66 for IERS.h

gSOAP XML Web services tools
Copyright (C) 2000-2018, Robert van Engelen, Genivia Inc. All Rights Reserved.
The soapcpp2 tool and its generated software are released under the GPL.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
--------------------------------------------------------------------------------
A commercial use license is available from Genivia Inc., contact@genivia.com
--------------------------------------------------------------------------------
*/

#define SOAP_NAMESPACE_OF_ns1	"urn:org.iers.data.eop"
#define SOAP_NAMESPACE_OF_ns2	"urn:org.iers.data.timescales"

#ifndef soapStub_H
#define soapStub_H
#include "stdsoap2.h"
#if GSOAP_VERSION != 20866
# error "GSOAP VERSION 20866 MISMATCH IN GENERATED CODE VERSUS LIBRARY CODE: PLEASE REINSTALL PACKAGE"
#endif


/******************************************************************************\
 *                                                                            *
 * Types with Custom Serializers                                              *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Classes, Structs and Unions                                                *
 *                                                                            *
\******************************************************************************/

struct ns1__readEOPResponse;	/* IERS.h:311 */
struct ns1__readEOP;	/* IERS.h:311 */
struct ns2__getTimescaleResponse;	/* IERS.h:674 */
struct ns2__getTimescale;	/* IERS.h:674 */

/* IERS.h:311 */
#ifndef SOAP_TYPE_ns1__readEOPResponse
#define SOAP_TYPE_ns1__readEOPResponse (9)
/* complex XSD type 'ns1:readEOPResponse': */
struct SOAP_CMAC ns1__readEOPResponse {
      public:
        /** Required element 'return' of XSD type 'xsd:string' */
        char *return_;
      public:
        /** Return unique type id SOAP_TYPE_ns1__readEOPResponse */
        long soap_type() const { return SOAP_TYPE_ns1__readEOPResponse; }
        /** Constructor with member initializations */
        ns1__readEOPResponse() : return_() { }
        /** Friend allocator */
        friend SOAP_FMAC1 ns1__readEOPResponse * SOAP_FMAC2 soap_instantiate_ns1__readEOPResponse(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* IERS.h:311 */
#ifndef SOAP_TYPE_ns1__readEOP
#define SOAP_TYPE_ns1__readEOP (10)
/* complex XSD type 'ns1:readEOP': */
struct SOAP_CMAC ns1__readEOP {
      public:
        /** Optional element 'param' of XSD type 'xsd:string' */
        char *param;
        /** Optional element 'series' of XSD type 'xsd:string' */
        char *series;
        /** Optional element 'mjd' of XSD type 'xsd:string' */
        char *mjd;
      public:
        /** Return unique type id SOAP_TYPE_ns1__readEOP */
        long soap_type() const { return SOAP_TYPE_ns1__readEOP; }
        /** Constructor with member initializations */
        ns1__readEOP() : param(), series(), mjd() { }
        /** Friend allocator */
        friend SOAP_FMAC1 ns1__readEOP * SOAP_FMAC2 soap_instantiate_ns1__readEOP(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* IERS.h:674 */
#ifndef SOAP_TYPE_ns2__getTimescaleResponse
#define SOAP_TYPE_ns2__getTimescaleResponse (12)
/* complex XSD type 'ns2:getTimescaleResponse': */
struct SOAP_CMAC ns2__getTimescaleResponse {
      public:
        /** Required element 'return' of XSD type 'xsd:string' */
        char *return_;
      public:
        /** Return unique type id SOAP_TYPE_ns2__getTimescaleResponse */
        long soap_type() const { return SOAP_TYPE_ns2__getTimescaleResponse; }
        /** Constructor with member initializations */
        ns2__getTimescaleResponse() : return_() { }
        /** Friend allocator */
        friend SOAP_FMAC1 ns2__getTimescaleResponse * SOAP_FMAC2 soap_instantiate_ns2__getTimescaleResponse(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* IERS.h:674 */
#ifndef SOAP_TYPE_ns2__getTimescale
#define SOAP_TYPE_ns2__getTimescale (13)
/* complex XSD type 'ns2:getTimescale': */
struct SOAP_CMAC ns2__getTimescale {
      public:
        /** Optional element 'param' of XSD type 'xsd:string' */
        char *param;
        /** Optional element 'datetime' of XSD type 'xsd:string' */
        char *datetime;
      public:
        /** Return unique type id SOAP_TYPE_ns2__getTimescale */
        long soap_type() const { return SOAP_TYPE_ns2__getTimescale; }
        /** Constructor with member initializations */
        ns2__getTimescale() : param(), datetime() { }
        /** Friend allocator */
        friend SOAP_FMAC1 ns2__getTimescale * SOAP_FMAC2 soap_instantiate_ns2__getTimescale(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* IERS.h:735 */
#ifndef WITH_NOGLOBAL
#ifndef SOAP_TYPE_SOAP_ENV__Header
#define SOAP_TYPE_SOAP_ENV__Header (14)
/* SOAP_ENV__Header: */
struct SOAP_CMAC SOAP_ENV__Header {
      public:
        /** Return unique type id SOAP_TYPE_SOAP_ENV__Header */
        long soap_type() const { return SOAP_TYPE_SOAP_ENV__Header; }
        /** Constructor with member initializations */
        SOAP_ENV__Header() { }
        /** Friend allocator */
        friend SOAP_FMAC1 SOAP_ENV__Header * SOAP_FMAC2 soap_instantiate_SOAP_ENV__Header(struct soap*, int, const char*, const char*, size_t*);
};
#endif
#endif

/* IERS.h:735 */
#ifndef WITH_NOGLOBAL
#ifndef SOAP_TYPE_SOAP_ENV__Code
#define SOAP_TYPE_SOAP_ENV__Code (15)
/* Type SOAP_ENV__Code is a recursive data type, (in)directly referencing itself through its (base or derived class) members */
/* SOAP_ENV__Code: */
struct SOAP_CMAC SOAP_ENV__Code {
      public:
        /** Optional element 'SOAP-ENV:Value' of XSD type 'xsd:QName' */
        char *SOAP_ENV__Value;
        /** Optional element 'SOAP-ENV:Subcode' of XSD type 'SOAP-ENV:Code' */
        struct SOAP_ENV__Code *SOAP_ENV__Subcode;
      public:
        /** Return unique type id SOAP_TYPE_SOAP_ENV__Code */
        long soap_type() const { return SOAP_TYPE_SOAP_ENV__Code; }
        /** Constructor with member initializations */
        SOAP_ENV__Code() : SOAP_ENV__Value(), SOAP_ENV__Subcode() { }
        /** Friend allocator */
        friend SOAP_FMAC1 SOAP_ENV__Code * SOAP_FMAC2 soap_instantiate_SOAP_ENV__Code(struct soap*, int, const char*, const char*, size_t*);
};
#endif
#endif

/* IERS.h:735 */
#ifndef WITH_NOGLOBAL
#ifndef SOAP_TYPE_SOAP_ENV__Detail
#define SOAP_TYPE_SOAP_ENV__Detail (17)
/* SOAP_ENV__Detail: */
struct SOAP_CMAC SOAP_ENV__Detail {
      public:
        char *__any;
        /** Any type of element 'fault' assigned to fault with its SOAP_TYPE_T assigned to __type */
        /** Do not create a cyclic data structure throught this member unless SOAP encoding or SOAP_XML_GRAPH are used for id-ref serialization */
        int __type;
        void *fault;
      public:
        /** Return unique type id SOAP_TYPE_SOAP_ENV__Detail */
        long soap_type() const { return SOAP_TYPE_SOAP_ENV__Detail; }
        /** Constructor with member initializations */
        SOAP_ENV__Detail() : __any(), __type(), fault() { }
        /** Friend allocator */
        friend SOAP_FMAC1 SOAP_ENV__Detail * SOAP_FMAC2 soap_instantiate_SOAP_ENV__Detail(struct soap*, int, const char*, const char*, size_t*);
};
#endif
#endif

/* IERS.h:735 */
#ifndef WITH_NOGLOBAL
#ifndef SOAP_TYPE_SOAP_ENV__Reason
#define SOAP_TYPE_SOAP_ENV__Reason (20)
/* SOAP_ENV__Reason: */
struct SOAP_CMAC SOAP_ENV__Reason {
      public:
        /** Optional element 'SOAP-ENV:Text' of XSD type 'xsd:string' */
        char *SOAP_ENV__Text;
      public:
        /** Return unique type id SOAP_TYPE_SOAP_ENV__Reason */
        long soap_type() const { return SOAP_TYPE_SOAP_ENV__Reason; }
        /** Constructor with member initializations */
        SOAP_ENV__Reason() : SOAP_ENV__Text() { }
        /** Friend allocator */
        friend SOAP_FMAC1 SOAP_ENV__Reason * SOAP_FMAC2 soap_instantiate_SOAP_ENV__Reason(struct soap*, int, const char*, const char*, size_t*);
};
#endif
#endif

/* IERS.h:735 */
#ifndef WITH_NOGLOBAL
#ifndef SOAP_TYPE_SOAP_ENV__Fault
#define SOAP_TYPE_SOAP_ENV__Fault (21)
/* SOAP_ENV__Fault: */
struct SOAP_CMAC SOAP_ENV__Fault {
      public:
        /** Optional element 'faultcode' of XSD type 'xsd:QName' */
        char *faultcode;
        /** Optional element 'faultstring' of XSD type 'xsd:string' */
        char *faultstring;
        /** Optional element 'faultactor' of XSD type 'xsd:string' */
        char *faultactor;
        /** Optional element 'detail' of XSD type 'SOAP-ENV:Detail' */
        struct SOAP_ENV__Detail *detail;
        /** Optional element 'SOAP-ENV:Code' of XSD type 'SOAP-ENV:Code' */
        struct SOAP_ENV__Code *SOAP_ENV__Code;
        /** Optional element 'SOAP-ENV:Reason' of XSD type 'SOAP-ENV:Reason' */
        struct SOAP_ENV__Reason *SOAP_ENV__Reason;
        /** Optional element 'SOAP-ENV:Node' of XSD type 'xsd:string' */
        char *SOAP_ENV__Node;
        /** Optional element 'SOAP-ENV:Role' of XSD type 'xsd:string' */
        char *SOAP_ENV__Role;
        /** Optional element 'SOAP-ENV:Detail' of XSD type 'SOAP-ENV:Detail' */
        struct SOAP_ENV__Detail *SOAP_ENV__Detail;
      public:
        /** Return unique type id SOAP_TYPE_SOAP_ENV__Fault */
        long soap_type() const { return SOAP_TYPE_SOAP_ENV__Fault; }
        /** Constructor with member initializations */
        SOAP_ENV__Fault() : faultcode(), faultstring(), faultactor(), detail(), SOAP_ENV__Code(), SOAP_ENV__Reason(), SOAP_ENV__Node(), SOAP_ENV__Role(), SOAP_ENV__Detail() { }
        /** Friend allocator */
        friend SOAP_FMAC1 SOAP_ENV__Fault * SOAP_FMAC2 soap_instantiate_SOAP_ENV__Fault(struct soap*, int, const char*, const char*, size_t*);
};
#endif
#endif

/******************************************************************************\
 *                                                                            *
 * Typedefs                                                                   *
 *                                                                            *
\******************************************************************************/


/* (built-in):0 */
#ifndef SOAP_TYPE__XML
#define SOAP_TYPE__XML (5)
typedef char *_XML;
#endif

/* (built-in):0 */
#ifndef SOAP_TYPE__QName
#define SOAP_TYPE__QName (6)
typedef char *_QName;
#endif

/******************************************************************************\
 *                                                                            *
 * Serializable Types                                                         *
 *                                                                            *
\******************************************************************************/


/* char has binding name 'byte' for type 'xsd:byte' */
#ifndef SOAP_TYPE_byte
#define SOAP_TYPE_byte (3)
#endif

/* int has binding name 'int' for type 'xsd:int' */
#ifndef SOAP_TYPE_int
#define SOAP_TYPE_int (1)
#endif

/* struct SOAP_ENV__Fault has binding name 'SOAP_ENV__Fault' for type '' */
#ifndef SOAP_TYPE_SOAP_ENV__Fault
#define SOAP_TYPE_SOAP_ENV__Fault (21)
#endif

/* struct SOAP_ENV__Reason has binding name 'SOAP_ENV__Reason' for type '' */
#ifndef SOAP_TYPE_SOAP_ENV__Reason
#define SOAP_TYPE_SOAP_ENV__Reason (20)
#endif

/* struct SOAP_ENV__Detail has binding name 'SOAP_ENV__Detail' for type '' */
#ifndef SOAP_TYPE_SOAP_ENV__Detail
#define SOAP_TYPE_SOAP_ENV__Detail (17)
#endif

/* struct SOAP_ENV__Code has binding name 'SOAP_ENV__Code' for type '' */
#ifndef SOAP_TYPE_SOAP_ENV__Code
#define SOAP_TYPE_SOAP_ENV__Code (15)
#endif

/* struct SOAP_ENV__Header has binding name 'SOAP_ENV__Header' for type '' */
#ifndef SOAP_TYPE_SOAP_ENV__Header
#define SOAP_TYPE_SOAP_ENV__Header (14)
#endif

/* struct ns2__getTimescale has binding name 'ns2__getTimescale' for type 'ns2:getTimescale' */
#ifndef SOAP_TYPE_ns2__getTimescale
#define SOAP_TYPE_ns2__getTimescale (13)
#endif

/* struct ns2__getTimescaleResponse has binding name 'ns2__getTimescaleResponse' for type 'ns2:getTimescaleResponse' */
#ifndef SOAP_TYPE_ns2__getTimescaleResponse
#define SOAP_TYPE_ns2__getTimescaleResponse (12)
#endif

/* struct ns1__readEOP has binding name 'ns1__readEOP' for type 'ns1:readEOP' */
#ifndef SOAP_TYPE_ns1__readEOP
#define SOAP_TYPE_ns1__readEOP (10)
#endif

/* struct ns1__readEOPResponse has binding name 'ns1__readEOPResponse' for type 'ns1:readEOPResponse' */
#ifndef SOAP_TYPE_ns1__readEOPResponse
#define SOAP_TYPE_ns1__readEOPResponse (9)
#endif

/* struct SOAP_ENV__Reason * has binding name 'PointerToSOAP_ENV__Reason' for type '' */
#ifndef SOAP_TYPE_PointerToSOAP_ENV__Reason
#define SOAP_TYPE_PointerToSOAP_ENV__Reason (23)
#endif

/* struct SOAP_ENV__Detail * has binding name 'PointerToSOAP_ENV__Detail' for type '' */
#ifndef SOAP_TYPE_PointerToSOAP_ENV__Detail
#define SOAP_TYPE_PointerToSOAP_ENV__Detail (22)
#endif

/* struct SOAP_ENV__Code * has binding name 'PointerToSOAP_ENV__Code' for type '' */
#ifndef SOAP_TYPE_PointerToSOAP_ENV__Code
#define SOAP_TYPE_PointerToSOAP_ENV__Code (16)
#endif

/* _QName has binding name '_QName' for type 'xsd:QName' */
#ifndef SOAP_TYPE__QName
#define SOAP_TYPE__QName (6)
#endif

/* _XML has binding name '_XML' for type '' */
#ifndef SOAP_TYPE__XML
#define SOAP_TYPE__XML (5)
#endif

/* char * has binding name 'string' for type 'xsd:string' */
#ifndef SOAP_TYPE_string
#define SOAP_TYPE_string (4)
#endif

/******************************************************************************\
 *                                                                            *
 * Externals                                                                  *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Client-Side Call Stub Functions                                            *
 *                                                                            *
\******************************************************************************/

    SOAP_FMAC5 int SOAP_FMAC6 soap_call_ns1__readEOP(struct soap *soap, const char *soap_endpoint, const char *soap_action, char *param, char *series, char *mjd, char *&return_);
    SOAP_FMAC5 int SOAP_FMAC6 soap_call_ns2__getTimescale(struct soap *soap, const char *soap_endpoint, const char *soap_action, char *param, char *datetime, char *&return_);

#endif

/* End of soapStub.h */