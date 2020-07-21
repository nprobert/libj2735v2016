/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735_201603DA-CAMP.ASN"
 * 	`asn1c -D src -gen-PER -pdu=MessageFrame -fcompound-names -fline-refs -no-gen-example`
 */

#include "PathHistoryPoint.h"

asn_TYPE_member_t asn_MBR_PathHistoryPoint_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PathHistoryPoint, latOffset),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OffsetLL_B18,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"latOffset"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PathHistoryPoint, lonOffset),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OffsetLL_B18,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"lonOffset"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PathHistoryPoint, elevationOffset),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_VertOffset_B12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"elevationOffset"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PathHistoryPoint, timeOffset),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TimeOffset,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"timeOffset"
		},
	{ ATF_POINTER, 3, offsetof(struct PathHistoryPoint, speed),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DSRC_Speed,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"speed"
		},
	{ ATF_POINTER, 2, offsetof(struct PathHistoryPoint, posAccuracy),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PositionalAccuracy,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"posAccuracy"
		},
	{ ATF_POINTER, 1, offsetof(struct PathHistoryPoint, heading),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CoarseHeading,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"heading"
		},
};
static const int asn_MAP_PathHistoryPoint_oms_1[] = { 4, 5, 6 };
static const ber_tlv_tag_t asn_DEF_PathHistoryPoint_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PathHistoryPoint_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* latOffsetat 1651 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* lonOffsetat 1652 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* elevationOffsetat 1653 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* timeOffsetat 1654 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* speedat 1656 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* posAccuracyat 1658 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* headingat 1660 */
};
asn_SEQUENCE_specifics_t asn_SPC_PathHistoryPoint_specs_1 = {
	sizeof(struct PathHistoryPoint),
	offsetof(struct PathHistoryPoint, _asn_ctx),
	asn_MAP_PathHistoryPoint_tag2el_1,
	7,	/* Count of tags in the map */
	asn_MAP_PathHistoryPoint_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	7,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_PathHistoryPoint = {
	"PathHistoryPoint",
	"PathHistoryPoint",
	&asn_OP_SEQUENCE,
	asn_DEF_PathHistoryPoint_tags_1,
	sizeof(asn_DEF_PathHistoryPoint_tags_1)
		/sizeof(asn_DEF_PathHistoryPoint_tags_1[0]), /* 1 */
	asn_DEF_PathHistoryPoint_tags_1,	/* Same as above */
	sizeof(asn_DEF_PathHistoryPoint_tags_1)
		/sizeof(asn_DEF_PathHistoryPoint_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_PathHistoryPoint_1,
	7,	/* Elements count */
	&asn_SPC_PathHistoryPoint_specs_1	/* Additional specs */
};

