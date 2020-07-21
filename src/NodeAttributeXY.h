/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735_201603DA-CAMP.ASN"
 * 	`asn1c -D src -gen-PER -pdu=MessageFrame -fcompound-names -fline-refs -no-gen-example`
 */

#ifndef	_NodeAttributeXY_H_
#define	_NodeAttributeXY_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NodeAttributeXY {
	NodeAttributeXY_reserved	= 0,
	NodeAttributeXY_stopLine	= 1,
	NodeAttributeXY_roundedCapStyleA	= 2,
	NodeAttributeXY_roundedCapStyleB	= 3,
	NodeAttributeXY_mergePoint	= 4,
	NodeAttributeXY_divergePoint	= 5,
	NodeAttributeXY_downstreamStopLine	= 6,
	NodeAttributeXY_downstreamStartNode	= 7,
	NodeAttributeXY_closedToTraffic	= 8,
	NodeAttributeXY_safeIsland	= 9,
	NodeAttributeXY_curbPresentAtStepOff	= 10,
	NodeAttributeXY_hydrantPresent	= 11
	/*
	 * Enumeration is extensible
	 */
} e_NodeAttributeXY;

/* NodeAttributeXY */
typedef long	 NodeAttributeXY_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_NodeAttributeXY_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_NodeAttributeXY;
extern const asn_INTEGER_specifics_t asn_SPC_NodeAttributeXY_specs_1;
asn_struct_free_f NodeAttributeXY_free;
asn_struct_print_f NodeAttributeXY_print;
asn_constr_check_f NodeAttributeXY_constraint;
ber_type_decoder_f NodeAttributeXY_decode_ber;
der_type_encoder_f NodeAttributeXY_encode_der;
xer_type_decoder_f NodeAttributeXY_decode_xer;
xer_type_encoder_f NodeAttributeXY_encode_xer;
oer_type_decoder_f NodeAttributeXY_decode_oer;
oer_type_encoder_f NodeAttributeXY_encode_oer;
per_type_decoder_f NodeAttributeXY_decode_uper;
per_type_encoder_f NodeAttributeXY_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _NodeAttributeXY_H_ */
#include <asn_internal.h>
