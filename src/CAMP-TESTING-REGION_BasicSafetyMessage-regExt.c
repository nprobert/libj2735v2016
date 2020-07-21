/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "CAMP-TESTING-REGION"
 * 	found in "CAMP/BSM_V2VI_TDF_Extension.asn"
 * 	`asn1c -D src -gen-PER -pdu=MessageFrame -fcompound-names -fline-refs -no-gen-example`
 */

#include "CAMP-TESTING-REGION_BasicSafetyMessage-regExt.h"

asn_TYPE_member_t asn_MBR_CAMP_TESTING_REGION_BasicSafetyMessage_regExt_1[] = {
	{ ATF_POINTER, 1, offsetof(struct CAMP_TESTING_REGION_BasicSafetyMessage_regExt, tdf),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TestDataFrameV2VI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tdf"
		},
};
static const int asn_MAP_CAMP_TESTING_REGION_BasicSafetyMessage_regExt_oms_1[] = { 0 };
static const ber_tlv_tag_t asn_DEF_CAMP_TESTING_REGION_BasicSafetyMessage_regExt_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_CAMP_TESTING_REGION_BasicSafetyMessage_regExt_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* tdfat 4 */
};
asn_SEQUENCE_specifics_t asn_SPC_CAMP_TESTING_REGION_BasicSafetyMessage_regExt_specs_1 = {
	sizeof(struct CAMP_TESTING_REGION_BasicSafetyMessage_regExt),
	offsetof(struct CAMP_TESTING_REGION_BasicSafetyMessage_regExt, _asn_ctx),
	asn_MAP_CAMP_TESTING_REGION_BasicSafetyMessage_regExt_tag2el_1,
	1,	/* Count of tags in the map */
	asn_MAP_CAMP_TESTING_REGION_BasicSafetyMessage_regExt_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_CAMP_TESTING_REGION_BasicSafetyMessage_regExt = {
	"BasicSafetyMessage-regExt",
	"BasicSafetyMessage-regExt",
	&asn_OP_SEQUENCE,
	asn_DEF_CAMP_TESTING_REGION_BasicSafetyMessage_regExt_tags_1,
	sizeof(asn_DEF_CAMP_TESTING_REGION_BasicSafetyMessage_regExt_tags_1)
		/sizeof(asn_DEF_CAMP_TESTING_REGION_BasicSafetyMessage_regExt_tags_1[0]), /* 1 */
	asn_DEF_CAMP_TESTING_REGION_BasicSafetyMessage_regExt_tags_1,	/* Same as above */
	sizeof(asn_DEF_CAMP_TESTING_REGION_BasicSafetyMessage_regExt_tags_1)
		/sizeof(asn_DEF_CAMP_TESTING_REGION_BasicSafetyMessage_regExt_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_CAMP_TESTING_REGION_BasicSafetyMessage_regExt_1,
	1,	/* Elements count */
	&asn_SPC_CAMP_TESTING_REGION_BasicSafetyMessage_regExt_specs_1	/* Additional specs */
};

