/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735_201603DA-CAMP.ASN"
 * 	`asn1c -D src -gen-PER -pdu=MessageFrame -fcompound-names -fline-refs -no-gen-example`
 */

#ifndef	_DTime_H_
#define	_DTime_H_


#include <asn_application.h>

/* Including external dependencies */
#include "DHour.h"
#include "DMinute.h"
#include "DSecond.h"
#include "DOffset.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* DTime */
typedef struct DTime {
	DHour_t	 hour;
	DMinute_t	 minute;
	DSecond_t	 second;
	DOffset_t	*offset	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DTime_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DTime;
extern asn_SEQUENCE_specifics_t asn_SPC_DTime_specs_1;
extern asn_TYPE_member_t asn_MBR_DTime_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _DTime_H_ */
#include <asn_internal.h>