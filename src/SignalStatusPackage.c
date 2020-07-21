/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735_201603DA-CAMP.ASN"
 * 	`asn1c -D src -gen-PER -pdu=MessageFrame -fcompound-names -fline-refs -no-gen-example`
 */

#include "SignalStatusPackage.h"

static int
memb_regional_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 4)) {
		/* Perform validation of the inner elements */
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_regional_constr_9 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..4)) */};
static asn_per_constraints_t asn_PER_type_regional_constr_9 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (SIZE(1..4)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_regional_constr_9 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..4)) */};
static asn_per_constraints_t asn_PER_memb_regional_constr_9 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (SIZE(1..4)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_regional_9[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_RegionalExtension_125P0,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_regional_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_regional_specs_9 = {
	sizeof(struct SignalStatusPackage__regional),
	offsetof(struct SignalStatusPackage__regional, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_regional_9 = {
	"regional",
	"regional",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_regional_tags_9,
	sizeof(asn_DEF_regional_tags_9)
		/sizeof(asn_DEF_regional_tags_9[0]) - 1, /* 1 */
	asn_DEF_regional_tags_9,	/* Same as above */
	sizeof(asn_DEF_regional_tags_9)
		/sizeof(asn_DEF_regional_tags_9[0]), /* 2 */
	{ &asn_OER_type_regional_constr_9, &asn_PER_type_regional_constr_9, SEQUENCE_OF_constraint },
	asn_MBR_regional_9,
	1,	/* Single element */
	&asn_SPC_regional_specs_9	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SignalStatusPackage_1[] = {
	{ ATF_POINTER, 1, offsetof(struct SignalStatusPackage, requester),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SignalRequesterInfo,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"requester"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SignalStatusPackage, inboundOn),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_IntersectionAccessPoint,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"inboundOn"
		},
	{ ATF_POINTER, 4, offsetof(struct SignalStatusPackage, outboundOn),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_IntersectionAccessPoint,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"outboundOn"
		},
	{ ATF_POINTER, 3, offsetof(struct SignalStatusPackage, minute),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MinuteOfTheYear,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"minute"
		},
	{ ATF_POINTER, 2, offsetof(struct SignalStatusPackage, second),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DSecond,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"second"
		},
	{ ATF_POINTER, 1, offsetof(struct SignalStatusPackage, duration),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DSecond,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"duration"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SignalStatusPackage, status),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PrioritizationResponseStatus,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"status"
		},
	{ ATF_POINTER, 1, offsetof(struct SignalStatusPackage, regional),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		0,
		&asn_DEF_regional_9,
		0,
		{ &asn_OER_memb_regional_constr_9, &asn_PER_memb_regional_constr_9,  memb_regional_constraint_1 },
		0, 0, /* No default value */
		"regional"
		},
};
static const int asn_MAP_SignalStatusPackage_oms_1[] = { 0, 2, 3, 4, 5, 7 };
static const ber_tlv_tag_t asn_DEF_SignalStatusPackage_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SignalStatusPackage_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* requesterat 2031 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* inboundOnat 2033 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* outboundOnat 2034 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* minuteat 2038 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* secondat 2039 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* durationat 2040 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* statusat 2043 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 } /* regionalat 2047 */
};
asn_SEQUENCE_specifics_t asn_SPC_SignalStatusPackage_specs_1 = {
	sizeof(struct SignalStatusPackage),
	offsetof(struct SignalStatusPackage, _asn_ctx),
	asn_MAP_SignalStatusPackage_tag2el_1,
	8,	/* Count of tags in the map */
	asn_MAP_SignalStatusPackage_oms_1,	/* Optional members */
	6, 0,	/* Root/Additions */
	8,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SignalStatusPackage = {
	"SignalStatusPackage",
	"SignalStatusPackage",
	&asn_OP_SEQUENCE,
	asn_DEF_SignalStatusPackage_tags_1,
	sizeof(asn_DEF_SignalStatusPackage_tags_1)
		/sizeof(asn_DEF_SignalStatusPackage_tags_1[0]), /* 1 */
	asn_DEF_SignalStatusPackage_tags_1,	/* Same as above */
	sizeof(asn_DEF_SignalStatusPackage_tags_1)
		/sizeof(asn_DEF_SignalStatusPackage_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SignalStatusPackage_1,
	8,	/* Elements count */
	&asn_SPC_SignalStatusPackage_specs_1	/* Additional specs */
};
