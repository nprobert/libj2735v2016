/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "RSM"
 * 	found in "RSM/rsmv5.1.asn"
 * 	`asn1c -D src -gen-PER -pdu=MessageFrame -fcompound-names -fline-refs -no-gen-example`
 */

#ifndef	_DynamicInfoContainer_H_
#define	_DynamicInfoContainer_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include "TypeOfDynamicInfo.h"
#include <IA5String.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum DynamicInfoContainer__priority {
	DynamicInfoContainer__priority_low_priority	= 0,
	DynamicInfoContainer__priority_medium_priority	= 1,
	DynamicInfoContainer__priority_high_priority	= 2,
	DynamicInfoContainer__priority_critical	= 3
} e_DynamicInfoContainer__priority;

/* Forward declarations */
struct SituationalContainer;
struct IncidentsContainer;
struct CongestionInfo;

/* DynamicInfoContainer */
typedef struct DynamicInfoContainer {
	long	 priority;
	TypeOfDynamicInfo_t	 typeOfInfo;
	IA5String_t	*dmsSignString	/* OPTIONAL */;
	struct DynamicInfoContainer__congestionInfo {
		A_SEQUENCE_OF(struct CongestionInfo) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *congestionInfo;
	struct SituationalContainer	*situationalInfo	/* OPTIONAL */;
	struct IncidentsContainer	*incidentsInfo	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DynamicInfoContainer_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_priority_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_DynamicInfoContainer;
extern asn_SEQUENCE_specifics_t asn_SPC_DynamicInfoContainer_specs_1;
extern asn_TYPE_member_t asn_MBR_DynamicInfoContainer_1[6];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SituationalContainer.h"
#include "IncidentsContainer.h"
#include "CongestionInfo.h"

#endif	/* _DynamicInfoContainer_H_ */
#include <asn_internal.h>
