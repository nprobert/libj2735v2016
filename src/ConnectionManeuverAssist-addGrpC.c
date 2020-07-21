/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "AddGrpC"
 * 	found in "J2735_201603DA-CAMP.ASN"
 * 	`asn1c -D src -gen-PER -pdu=MessageFrame -fcompound-names -fline-refs -no-gen-example`
 */

#include "ConnectionManeuverAssist-addGrpC.h"

static asn_TYPE_member_t asn_MBR_ConnectionManeuverAssist_addGrpC_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ConnectionManeuverAssist_addGrpC, vehicleToLanePositions),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_VehicleToLanePositionList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"vehicleToLanePositions"
		},
	{ ATF_POINTER, 1, offsetof(struct ConnectionManeuverAssist_addGrpC, rsuDistanceFromAnchor),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NodeOffsetPointXY,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rsuDistanceFromAnchor"
		},
};
static const int asn_MAP_ConnectionManeuverAssist_addGrpC_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_ConnectionManeuverAssist_addGrpC_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ConnectionManeuverAssist_addGrpC_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* vehicleToLanePositionsat 5120 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* rsuDistanceFromAnchorat 5121 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ConnectionManeuverAssist_addGrpC_specs_1 = {
	sizeof(struct ConnectionManeuverAssist_addGrpC),
	offsetof(struct ConnectionManeuverAssist_addGrpC, _asn_ctx),
	asn_MAP_ConnectionManeuverAssist_addGrpC_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_ConnectionManeuverAssist_addGrpC_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ConnectionManeuverAssist_addGrpC = {
	"ConnectionManeuverAssist-addGrpC",
	"ConnectionManeuverAssist-addGrpC",
	&asn_OP_SEQUENCE,
	asn_DEF_ConnectionManeuverAssist_addGrpC_tags_1,
	sizeof(asn_DEF_ConnectionManeuverAssist_addGrpC_tags_1)
		/sizeof(asn_DEF_ConnectionManeuverAssist_addGrpC_tags_1[0]), /* 1 */
	asn_DEF_ConnectionManeuverAssist_addGrpC_tags_1,	/* Same as above */
	sizeof(asn_DEF_ConnectionManeuverAssist_addGrpC_tags_1)
		/sizeof(asn_DEF_ConnectionManeuverAssist_addGrpC_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ConnectionManeuverAssist_addGrpC_1,
	2,	/* Elements count */
	&asn_SPC_ConnectionManeuverAssist_addGrpC_specs_1	/* Additional specs */
};

