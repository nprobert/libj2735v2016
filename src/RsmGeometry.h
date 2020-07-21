/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "RSM"
 * 	found in "RSM/rsmv5.1.asn"
 * 	`asn1c -D src -gen-PER -pdu=MessageFrame -fcompound-names -fline-refs -no-gen-example`
 */

#ifndef	_RsmGeometry_H_
#define	_RsmGeometry_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RsmScale.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RSMLane;

/* RsmGeometry */
typedef struct RsmGeometry {
	RsmScale_t	*scale	/* OPTIONAL */;
	struct RsmGeometry__rsmLanes {
		A_SEQUENCE_OF(struct RSMLane) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} rsmLanes;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RsmGeometry_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RsmGeometry;
extern asn_SEQUENCE_specifics_t asn_SPC_RsmGeometry_specs_1;
extern asn_TYPE_member_t asn_MBR_RsmGeometry_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "RSMLane.h"

#endif	/* _RsmGeometry_H_ */
#include <asn_internal.h>
