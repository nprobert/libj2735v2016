/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "RSM"
 * 	found in "RSM/rsmv5.1.asn"
 * 	`asn1c -D src -gen-PER -pdu=MessageFrame -fcompound-names -fline-refs -no-gen-example`
 */

#include "TravelTime.h"

static int check_permitted_alphabet_7(const void *sptr) {
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
memb_dmsSignString_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 80)
		 && !check_permitted_alphabet_7(st)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_memb_dmsSignString_constr_7 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..80)) */};
static asn_per_constraints_t asn_PER_memb_dmsSignString_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7,  0,  127 }	/* (0..127) */,
	{ APC_CONSTRAINED,	 7,  7,  1,  80 }	/* (SIZE(1..80)) */,
	0, 0	/* No PER character map necessary */
};
asn_TYPE_member_t asn_MBR_TravelTime_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct TravelTime, travelOrigin),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RegionInfo,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"travelOrigin"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TravelTime, travelDestination),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RegionInfo,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"travelDestination"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TravelTime, distanceToDestination),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ObstacleDistance,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"distanceToDestination"
		},
	{ ATF_POINTER, 3, offsetof(struct TravelTime, typicalDuration),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MinutesDuration,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"typicalDuration"
		},
	{ ATF_POINTER, 2, offsetof(struct TravelTime, actualDuration),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MinutesDuration,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"actualDuration"
		},
	{ ATF_POINTER, 1, offsetof(struct TravelTime, dmsSignString),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IA5String,
		0,
		{ &asn_OER_memb_dmsSignString_constr_7, &asn_PER_memb_dmsSignString_constr_7,  memb_dmsSignString_constraint_1 },
		0, 0, /* No default value */
		"dmsSignString"
		},
};
static const int asn_MAP_TravelTime_oms_1[] = { 3, 4, 5 };
static const ber_tlv_tag_t asn_DEF_TravelTime_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_TravelTime_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* travelOriginat 452 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* travelDestinationat 453 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* distanceToDestinationat 454 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* typicalDurationat 455 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* actualDurationat 456 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* dmsSignStringat 457 */
};
asn_SEQUENCE_specifics_t asn_SPC_TravelTime_specs_1 = {
	sizeof(struct TravelTime),
	offsetof(struct TravelTime, _asn_ctx),
	asn_MAP_TravelTime_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_TravelTime_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	6,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_TravelTime = {
	"TravelTime",
	"TravelTime",
	&asn_OP_SEQUENCE,
	asn_DEF_TravelTime_tags_1,
	sizeof(asn_DEF_TravelTime_tags_1)
		/sizeof(asn_DEF_TravelTime_tags_1[0]), /* 1 */
	asn_DEF_TravelTime_tags_1,	/* Same as above */
	sizeof(asn_DEF_TravelTime_tags_1)
		/sizeof(asn_DEF_TravelTime_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_TravelTime_1,
	6,	/* Elements count */
	&asn_SPC_TravelTime_specs_1	/* Additional specs */
};

