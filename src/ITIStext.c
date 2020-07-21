/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ITIS"
 * 	found in "J2735_201603DA-CAMP.ASN"
 * 	`asn1c -D src -gen-PER -pdu=MessageFrame -fcompound-names -fline-refs -no-gen-example`
 */

#include "ITIStext.h"

static int check_permitted_alphabet_1(const void *sptr) {
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

int
ITIStext_constraint(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 500)
		 && !check_permitted_alphabet_1(st)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

/*
 * This type is implemented using IA5String,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_ITIStext_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..500)) */};
asn_per_constraints_t asn_PER_type_ITIStext_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7,  0,  127 }	/* (0..127) */,
	{ APC_CONSTRAINED,	 9,  9,  1,  500 }	/* (SIZE(1..500)) */,
	0, 0	/* No PER character map necessary */
};
static const ber_tlv_tag_t asn_DEF_ITIStext_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (22 << 2))
};
asn_TYPE_descriptor_t asn_DEF_ITIStext = {
	"ITIStext",
	"ITIStext",
	&asn_OP_IA5String,
	asn_DEF_ITIStext_tags_1,
	sizeof(asn_DEF_ITIStext_tags_1)
		/sizeof(asn_DEF_ITIStext_tags_1[0]), /* 1 */
	asn_DEF_ITIStext_tags_1,	/* Same as above */
	sizeof(asn_DEF_ITIStext_tags_1)
		/sizeof(asn_DEF_ITIStext_tags_1[0]), /* 1 */
	{ &asn_OER_type_ITIStext_constr_1, &asn_PER_type_ITIStext_constr_1, ITIStext_constraint },
	0, 0,	/* No members */
	0	/* No specifics */
};

