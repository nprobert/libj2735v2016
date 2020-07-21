/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735_201603DA-CAMP.ASN"
 * 	`asn1c -D src -gen-PER -pdu=MessageFrame -fcompound-names -fline-refs -no-gen-example`
 */

#include "ProbeDataManagement.h"

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

static asn_oer_constraints_t asn_OER_type_term_constr_5 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_term_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_snapshot_constr_8 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_snapshot_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_regional_constr_13 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..4)) */};
static asn_per_constraints_t asn_PER_type_regional_constr_13 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (SIZE(1..4)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_regional_constr_13 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..4)) */};
static asn_per_constraints_t asn_PER_memb_regional_constr_13 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (SIZE(1..4)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_term_5[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ProbeDataManagement__term, choice.termtime),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TermTime,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"termtime"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ProbeDataManagement__term, choice.termDistance),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TermDistance,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"termDistance"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_term_tag2el_5[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* termtimeat 333 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* termDistanceat 337 */
};
static asn_CHOICE_specifics_t asn_SPC_term_specs_5 = {
	sizeof(struct ProbeDataManagement__term),
	offsetof(struct ProbeDataManagement__term, _asn_ctx),
	offsetof(struct ProbeDataManagement__term, present),
	sizeof(((struct ProbeDataManagement__term *)0)->present),
	asn_MAP_term_tag2el_5,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_term_5 = {
	"term",
	"term",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_term_constr_5, &asn_PER_type_term_constr_5, CHOICE_constraint },
	asn_MBR_term_5,
	2,	/* Elements count */
	&asn_SPC_term_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_snapshot_8[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ProbeDataManagement__snapshot, choice.snapshotTime),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SnapshotTime,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"snapshotTime"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ProbeDataManagement__snapshot, choice.snapshotDistance),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SnapshotDistance,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"snapshotDistance"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_snapshot_tag2el_8[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* snapshotTimeat 339 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* snapshotDistanceat 343 */
};
static asn_CHOICE_specifics_t asn_SPC_snapshot_specs_8 = {
	sizeof(struct ProbeDataManagement__snapshot),
	offsetof(struct ProbeDataManagement__snapshot, _asn_ctx),
	offsetof(struct ProbeDataManagement__snapshot, present),
	sizeof(((struct ProbeDataManagement__snapshot *)0)->present),
	asn_MAP_snapshot_tag2el_8,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_snapshot_8 = {
	"snapshot",
	"snapshot",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_snapshot_constr_8, &asn_PER_type_snapshot_constr_8, CHOICE_constraint },
	asn_MBR_snapshot_8,
	2,	/* Elements count */
	&asn_SPC_snapshot_specs_8	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_regional_13[] = {
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
static const ber_tlv_tag_t asn_DEF_regional_tags_13[] = {
	(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_regional_specs_13 = {
	sizeof(struct ProbeDataManagement__regional),
	offsetof(struct ProbeDataManagement__regional, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_regional_13 = {
	"regional",
	"regional",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_regional_tags_13,
	sizeof(asn_DEF_regional_tags_13)
		/sizeof(asn_DEF_regional_tags_13[0]) - 1, /* 1 */
	asn_DEF_regional_tags_13,	/* Same as above */
	sizeof(asn_DEF_regional_tags_13)
		/sizeof(asn_DEF_regional_tags_13[0]), /* 2 */
	{ &asn_OER_type_regional_constr_13, &asn_PER_type_regional_constr_13, SEQUENCE_OF_constraint },
	asn_MBR_regional_13,
	1,	/* Single element */
	&asn_SPC_regional_specs_13	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_ProbeDataManagement_1[] = {
	{ ATF_POINTER, 1, offsetof(struct ProbeDataManagement, timeStamp),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MinuteOfTheYear,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"timeStamp"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ProbeDataManagement, sample),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Sample,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sample"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ProbeDataManagement, directions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_HeadingSlice,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"directions"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ProbeDataManagement, term),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_term_5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"term"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ProbeDataManagement, snapshot),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_snapshot_8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"snapshot"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ProbeDataManagement, txInterval),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SecondOfTime,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"txInterval"
		},
	{ ATF_POINTER, 2, offsetof(struct ProbeDataManagement, dataElements),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_VehicleStatusRequestList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dataElements"
		},
	{ ATF_POINTER, 1, offsetof(struct ProbeDataManagement, regional),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		0,
		&asn_DEF_regional_13,
		0,
		{ &asn_OER_memb_regional_constr_13, &asn_PER_memb_regional_constr_13,  memb_regional_constraint_1 },
		0, 0, /* No default value */
		"regional"
		},
};
static const int asn_MAP_ProbeDataManagement_oms_1[] = { 0, 6, 7 };
static const ber_tlv_tag_t asn_DEF_ProbeDataManagement_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ProbeDataManagement_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* timeStampat 328 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* sampleat 329 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* directionsat 331 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* termat 333 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* snapshotat 339 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* txIntervalat 344 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* dataElementsat 345 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 } /* regionalat 349 */
};
asn_SEQUENCE_specifics_t asn_SPC_ProbeDataManagement_specs_1 = {
	sizeof(struct ProbeDataManagement),
	offsetof(struct ProbeDataManagement, _asn_ctx),
	asn_MAP_ProbeDataManagement_tag2el_1,
	8,	/* Count of tags in the map */
	asn_MAP_ProbeDataManagement_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	8,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ProbeDataManagement = {
	"ProbeDataManagement",
	"ProbeDataManagement",
	&asn_OP_SEQUENCE,
	asn_DEF_ProbeDataManagement_tags_1,
	sizeof(asn_DEF_ProbeDataManagement_tags_1)
		/sizeof(asn_DEF_ProbeDataManagement_tags_1[0]), /* 1 */
	asn_DEF_ProbeDataManagement_tags_1,	/* Same as above */
	sizeof(asn_DEF_ProbeDataManagement_tags_1)
		/sizeof(asn_DEF_ProbeDataManagement_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ProbeDataManagement_1,
	8,	/* Elements count */
	&asn_SPC_ProbeDataManagement_specs_1	/* Additional specs */
};

