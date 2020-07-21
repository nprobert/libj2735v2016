/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "RSM"
 * 	found in "RSM/rsmv5.1.asn"
 * 	`asn1c -D src -gen-PER -pdu=MessageFrame -fcompound-names -fline-refs -no-gen-example`
 */

#include "CurveContainer.h"

asn_TYPE_member_t asn_MBR_CurveContainer_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CurveContainer, advisorySpeed),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SpeedAdvice,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"advisorySpeed"
		},
	{ ATF_POINTER, 8, offsetof(struct CurveContainer, frictCoef),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FrictCoef,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"frictCoef"
		},
	{ ATF_POINTER, 7, offsetof(struct CurveContainer, surfaceCondition),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SurfaceCondition,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"surfaceCondition"
		},
	{ ATF_POINTER, 6, offsetof(struct CurveContainer, material),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Material,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"material"
		},
	{ ATF_POINTER, 5, offsetof(struct CurveContainer, minRadius),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Radius,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"minRadius"
		},
	{ ATF_POINTER, 4, offsetof(struct CurveContainer, bankAngle),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BankAngle,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"bankAngle"
		},
	{ ATF_POINTER, 3, offsetof(struct CurveContainer, obstaclePresent),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Activity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"obstaclePresent"
		},
	{ ATF_POINTER, 2, offsetof(struct CurveContainer, reducedVisibility),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Activity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"reducedVisibility"
		},
	{ ATF_POINTER, 1, offsetof(struct CurveContainer, curveRegion),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_AreaType,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"curveRegion"
		},
};
static const int asn_MAP_CurveContainer_oms_1[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
static const ber_tlv_tag_t asn_DEF_CurveContainer_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_CurveContainer_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* advisorySpeedat 124 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* frictCoefat 125 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* surfaceConditionat 126 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* materialat 127 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* minRadiusat 128 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* bankAngleat 129 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* obstaclePresentat 130 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* reducedVisibilityat 131 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 } /* curveRegionat 132 */
};
asn_SEQUENCE_specifics_t asn_SPC_CurveContainer_specs_1 = {
	sizeof(struct CurveContainer),
	offsetof(struct CurveContainer, _asn_ctx),
	asn_MAP_CurveContainer_tag2el_1,
	9,	/* Count of tags in the map */
	asn_MAP_CurveContainer_oms_1,	/* Optional members */
	8, 0,	/* Root/Additions */
	9,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_CurveContainer = {
	"CurveContainer",
	"CurveContainer",
	&asn_OP_SEQUENCE,
	asn_DEF_CurveContainer_tags_1,
	sizeof(asn_DEF_CurveContainer_tags_1)
		/sizeof(asn_DEF_CurveContainer_tags_1[0]), /* 1 */
	asn_DEF_CurveContainer_tags_1,	/* Same as above */
	sizeof(asn_DEF_CurveContainer_tags_1)
		/sizeof(asn_DEF_CurveContainer_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_CurveContainer_1,
	9,	/* Elements count */
	&asn_SPC_CurveContainer_specs_1	/* Additional specs */
};

