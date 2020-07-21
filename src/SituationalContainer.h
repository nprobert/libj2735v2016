/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "RSM"
 * 	found in "RSM/rsmv5.1.asn"
 * 	`asn1c -D src -gen-PER -pdu=MessageFrame -fcompound-names -fline-refs -no-gen-example`
 */

#ifndef	_SituationalContainer_H_
#define	_SituationalContainer_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Obstructions.h"
#include "OverheightVehicle.h"
#include "TravelTime.h"
#include "RoadClosure.h"
#include "RailCrossing.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SituationalContainer_PR {
	SituationalContainer_PR_NOTHING,	/* No components present */
	SituationalContainer_PR_obstructions,
	SituationalContainer_PR_overheightVehicle,
	SituationalContainer_PR_travelTime,
	SituationalContainer_PR_roadClosure,
	SituationalContainer_PR_railCrossing
	/* Extensions may appear below */
	
} SituationalContainer_PR;

/* SituationalContainer */
typedef struct SituationalContainer {
	SituationalContainer_PR present;
	union SituationalContainer_u {
		Obstructions_t	 obstructions;
		OverheightVehicle_t	 overheightVehicle;
		TravelTime_t	 travelTime;
		RoadClosure_t	 roadClosure;
		RailCrossing_t	 railCrossing;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SituationalContainer_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SituationalContainer;
extern asn_CHOICE_specifics_t asn_SPC_SituationalContainer_specs_1;
extern asn_TYPE_member_t asn_MBR_SituationalContainer_1[5];
extern asn_per_constraints_t asn_PER_type_SituationalContainer_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _SituationalContainer_H_ */
#include <asn_internal.h>
