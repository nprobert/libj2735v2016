/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "RSM"
 * 	found in "RSM/rsmv5.1.asn"
 * 	`asn1c -D src -gen-PER -pdu=MessageFrame -fcompound-names -fline-refs -no-gen-example`
 */

#include "StaticSignageContainer.h"

static int check_permitted_alphabet_6(const void *sptr) {
	/* The underlying type is IA5String */
	const IA5String_t *st = (const IA5String_t *)sptr;
	const uint8_t *ch = st->buf;
	const uint8_t *end = ch + st->size;
	
	for(; ch < end; ch++) {
		uint8_t cv = *ch;
		if(!(cv <= 127)) return -1;
	}
	return 0;
}

static int
memb_mutcdSignDesignation_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const IA5String_t *st = (const IA5String_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	size = st->size;
	
	if((size >= 1 && size <= 120)
		 && !check_permitted_alphabet_6(st)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_memb_mutcdSignDesignation_constr_6 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..120)) */};
static asn_per_constraints_t asn_PER_memb_mutcdSignDesignation_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7,  0,  127 }	/* (0..127) */,
	{ APC_CONSTRAINED,	 7,  7,  1,  120 }	/* (SIZE(1..120)) */,
	0, 0	/* No PER character map necessary */
};
asn_TYPE_member_t asn_MBR_StaticSignageContainer_1[] = {
	{ ATF_POINTER, 5, offsetof(struct StaticSignageContainer, speedLimit),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RSMSpeedLimit,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"speedLimit"
		},
	{ ATF_POINTER, 4, offsetof(struct StaticSignageContainer, mileMarker),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeReal,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mileMarker"
		},
	{ ATF_POINTER, 3, offsetof(struct StaticSignageContainer, itisGenericSign),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GenericSignage,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"itisGenericSign"
		},
	{ ATF_POINTER, 2, offsetof(struct StaticSignageContainer, mutcdCode),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MUTCDCode,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mutcdCode"
		},
	{ ATF_POINTER, 1, offsetof(struct StaticSignageContainer, mutcdSignDesignation),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IA5String,
		0,
		{ &asn_OER_memb_mutcdSignDesignation_constr_6, &asn_PER_memb_mutcdSignDesignation_constr_6,  memb_mutcdSignDesignation_constraint_1 },
		0, 0, /* No default value */
		"mutcdSignDesignation"
		},
};
static const int asn_MAP_StaticSignageContainer_oms_1[] = { 0, 1, 2, 3, 4 };
static const ber_tlv_tag_t asn_DEF_StaticSignageContainer_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_StaticSignageContainer_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* speedLimitat 354 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* mileMarkerat 355 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* itisGenericSignat 356 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* mutcdCodeat 357 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* mutcdSignDesignationat 358 */
};
asn_SEQUENCE_specifics_t asn_SPC_StaticSignageContainer_specs_1 = {
	sizeof(struct StaticSignageContainer),
	offsetof(struct StaticSignageContainer, _asn_ctx),
	asn_MAP_StaticSignageContainer_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_StaticSignageContainer_oms_1,	/* Optional members */
	5, 0,	/* Root/Additions */
	5,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_StaticSignageContainer = {
	"StaticSignageContainer",
	"StaticSignageContainer",
	&asn_OP_SEQUENCE,
	asn_DEF_StaticSignageContainer_tags_1,
	sizeof(asn_DEF_StaticSignageContainer_tags_1)
		/sizeof(asn_DEF_StaticSignageContainer_tags_1[0]), /* 1 */
	asn_DEF_StaticSignageContainer_tags_1,	/* Same as above */
	sizeof(asn_DEF_StaticSignageContainer_tags_1)
		/sizeof(asn_DEF_StaticSignageContainer_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_StaticSignageContainer_1,
	5,	/* Elements count */
	&asn_SPC_StaticSignageContainer_specs_1	/* Additional specs */
};

