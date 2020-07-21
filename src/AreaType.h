/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "RSM"
 * 	found in "RSM/rsmv5.1.asn"
 * 	`asn1c -D src -gen-PER -pdu=MessageFrame -fcompound-names -fline-refs -no-gen-example`
 */

#ifndef	_AreaType_H_
#define	_AreaType_H_


#include <asn_application.h>

/* Including external dependencies */
#include "BroadRegion.h"
#include "RsmGeometry.h"
#include "PathList.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum AreaType_PR {
	AreaType_PR_NOTHING,	/* No components present */
	AreaType_PR_broadRegion,
	AreaType_PR_roadwayGeometry,
	AreaType_PR_paths
	/* Extensions may appear below */
	
} AreaType_PR;

/* AreaType */
typedef struct AreaType {
	AreaType_PR present;
	union AreaType_u {
		BroadRegion_t	 broadRegion;
		RsmGeometry_t	 roadwayGeometry;
		PathList_t	 paths;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AreaType_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AreaType;
extern asn_CHOICE_specifics_t asn_SPC_AreaType_specs_1;
extern asn_TYPE_member_t asn_MBR_AreaType_1[3];
extern asn_per_constraints_t asn_PER_type_AreaType_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _AreaType_H_ */
#include <asn_internal.h>