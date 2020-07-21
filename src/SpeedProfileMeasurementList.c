/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735_201603DA-CAMP.ASN"
 * 	`asn1c -D src -gen-PER -pdu=MessageFrame -fcompound-names -fline-refs -no-gen-example`
 */

#include "SpeedProfileMeasurementList.h"

static asn_oer_constraints_t asn_OER_type_SpeedProfileMeasurementList_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..20)) */};
asn_per_constraints_t asn_PER_type_SpeedProfileMeasurementList_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 5,  5,  1,  20 }	/* (SIZE(1..20)) */,
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_SpeedProfileMeasurementList_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_SpeedProfileMeasurement,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_SpeedProfileMeasurementList_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SET_OF_specifics_t asn_SPC_SpeedProfileMeasurementList_specs_1 = {
	sizeof(struct SpeedProfileMeasurementList),
	offsetof(struct SpeedProfileMeasurementList, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_SpeedProfileMeasurementList = {
	"SpeedProfileMeasurementList",
	"SpeedProfileMeasurementList",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_SpeedProfileMeasurementList_tags_1,
	sizeof(asn_DEF_SpeedProfileMeasurementList_tags_1)
		/sizeof(asn_DEF_SpeedProfileMeasurementList_tags_1[0]), /* 1 */
	asn_DEF_SpeedProfileMeasurementList_tags_1,	/* Same as above */
	sizeof(asn_DEF_SpeedProfileMeasurementList_tags_1)
		/sizeof(asn_DEF_SpeedProfileMeasurementList_tags_1[0]), /* 1 */
	{ &asn_OER_type_SpeedProfileMeasurementList_constr_1, &asn_PER_type_SpeedProfileMeasurementList_constr_1, SEQUENCE_OF_constraint },
	asn_MBR_SpeedProfileMeasurementList_1,
	1,	/* Single element */
	&asn_SPC_SpeedProfileMeasurementList_specs_1	/* Additional specs */
};

