/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../rrlp-components.asn"
 */

#ifndef _MethodType_H_
#define _MethodType_H_


#include <asn_application.h>

/* Including external dependencies */
#include "AccuracyOpt.h"
#include "Accuracy.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C"
{
#endif

    /* Dependencies */
    typedef enum MethodType_PR
    {
        MethodType_PR_NOTHING, /* No components present */
        MethodType_PR_msAssisted,
        MethodType_PR_msBased,
        MethodType_PR_msBasedPref,
        MethodType_PR_msAssistedPref
    } MethodType_PR;

    /* MethodType */
    typedef struct MethodType
    {
        MethodType_PR present;
        union MethodType_u
        {
            AccuracyOpt_t msAssisted;
            Accuracy_t msBased;
            Accuracy_t msBasedPref;
            Accuracy_t msAssistedPref;
        } choice;

        /* Context for parsing across buffer boundaries */
        asn_struct_ctx_t _asn_ctx;
    } MethodType_t;

    /* Implementation */
    extern asn_TYPE_descriptor_t asn_DEF_MethodType;

#ifdef __cplusplus
}
#endif

#endif /* _MethodType_H_ */
#include <asn_internal.h>
