/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735_201603DA-CAMP.ASN"
 * 	`asn1c -D src -gen-PER -pdu=MessageFrame -fcompound-names -fline-refs -no-gen-example`
 */

#include "RTCMPackage.h"

asn_TYPE_member_t asn_MBR_RTCMPackage_1[] = {
	{ ATF_POINTER, 1, offsetof(struct RTCMPackage, rtcmHeader),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RTCMheader,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rtcmHeader"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RTCMPackage, msgs),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RTCMmessageList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"msgs"
		},
};
static const int asn_MAP_RTCMPackage_oms_1[] = { 0 };
static const ber_tlv_tag_t asn_DEF_RTCMPackage_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RTCMPackage_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rtcmHeaderat 1929 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* msgsat 1932 */
};
asn_SEQUENCE_specifics_t asn_SPC_RTCMPackage_specs_1 = {
	sizeof(struct RTCMPackage),
	offsetof(struct RTCMPackage, _asn_ctx),
	asn_MAP_RTCMPackage_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_RTCMPackage_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RTCMPackage = {
	"RTCMPackage",
	"RTCMPackage",
	&asn_OP_SEQUENCE,
	asn_DEF_RTCMPackage_tags_1,
	sizeof(asn_DEF_RTCMPackage_tags_1)
		/sizeof(asn_DEF_RTCMPackage_tags_1[0]), /* 1 */
	asn_DEF_RTCMPackage_tags_1,	/* Same as above */
	sizeof(asn_DEF_RTCMPackage_tags_1)
		/sizeof(asn_DEF_RTCMPackage_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RTCMPackage_1,
	2,	/* Elements count */
	&asn_SPC_RTCMPackage_specs_1	/* Additional specs */
};

