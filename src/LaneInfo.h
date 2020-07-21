/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "RSM"
 * 	found in "RSM/rsmv5.1.asn"
 * 	`asn1c -D src -gen-PER -pdu=MessageFrame -fcompound-names -fline-refs -no-gen-example`
 */

#ifndef	_LaneInfo_H_
#define	_LaneInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LanePosition.h"
#include "LaneClosed.h"
#include "ObstacleDistance.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LaneInfo */
typedef struct LaneInfo {
	LanePosition_t	 lanePosition;
	LaneClosed_t	 laneClosed;
	ObstacleDistance_t	*laneCloseOffset	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LaneInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LaneInfo;
extern asn_SEQUENCE_specifics_t asn_SPC_LaneInfo_specs_1;
extern asn_TYPE_member_t asn_MBR_LaneInfo_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _LaneInfo_H_ */
#include <asn_internal.h>
