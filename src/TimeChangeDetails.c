/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735_201603DA-CAMP.ASN"
 * 	`asn1c -D src -gen-PER -pdu=MessageFrame -fcompound-names -fline-refs -no-gen-example`
 */

#include "TimeChangeDetails.h"

asn_TYPE_member_t asn_MBR_TimeChangeDetails_1[] = {
	{ ATF_POINTER, 1, offsetof(struct TimeChangeDetails, startTime),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TimeMark,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"startTime"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TimeChangeDetails, minEndTime),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TimeMark,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"minEndTime"
		},
	{ ATF_POINTER, 4, offsetof(struct TimeChangeDetails, maxEndTime),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TimeMark,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"maxEndTime"
		},
	{ ATF_POINTER, 3, offsetof(struct TimeChangeDetails, likelyTime),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TimeMark,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"likelyTime"
		},
	{ ATF_POINTER, 2, offsetof(struct TimeChangeDetails, confidence),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TimeIntervalConfidence,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"confidence"
		},
	{ ATF_POINTER, 1, offsetof(struct TimeChangeDetails, nextTime),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TimeMark,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nextTime"
		},
};
static const int asn_MAP_TimeChangeDetails_oms_1[] = { 0, 2, 3, 4, 5 };
static const ber_tlv_tag_t asn_DEF_TimeChangeDetails_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_TimeChangeDetails_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* startTimeat 2174 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* minEndTimeat 2176 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* maxEndTimeat 2178 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* likelyTimeat 2181 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* confidenceat 2183 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* nextTimeat 2186 */
};
asn_SEQUENCE_specifics_t asn_SPC_TimeChangeDetails_specs_1 = {
	sizeof(struct TimeChangeDetails),
	offsetof(struct TimeChangeDetails, _asn_ctx),
	asn_MAP_TimeChangeDetails_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_TimeChangeDetails_oms_1,	/* Optional members */
	5, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_TimeChangeDetails = {
	"TimeChangeDetails",
	"TimeChangeDetails",
	&asn_OP_SEQUENCE,
	asn_DEF_TimeChangeDetails_tags_1,
	sizeof(asn_DEF_TimeChangeDetails_tags_1)
		/sizeof(asn_DEF_TimeChangeDetails_tags_1[0]), /* 1 */
	asn_DEF_TimeChangeDetails_tags_1,	/* Same as above */
	sizeof(asn_DEF_TimeChangeDetails_tags_1)
		/sizeof(asn_DEF_TimeChangeDetails_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_TimeChangeDetails_1,
	6,	/* Elements count */
	&asn_SPC_TimeChangeDetails_specs_1	/* Additional specs */
};

