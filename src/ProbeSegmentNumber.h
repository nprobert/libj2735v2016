/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735_201603DA-CAMP.ASN"
 * 	`asn1c -D src -gen-PER -pdu=MessageFrame -fcompound-names -fline-refs -no-gen-example`
 */

#ifndef	_ProbeSegmentNumber_H_
#define	_ProbeSegmentNumber_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ProbeSegmentNumber */
typedef long	 ProbeSegmentNumber_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_ProbeSegmentNumber_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_ProbeSegmentNumber;
asn_struct_free_f ProbeSegmentNumber_free;
asn_struct_print_f ProbeSegmentNumber_print;
asn_constr_check_f ProbeSegmentNumber_constraint;
ber_type_decoder_f ProbeSegmentNumber_decode_ber;
der_type_encoder_f ProbeSegmentNumber_encode_der;
xer_type_decoder_f ProbeSegmentNumber_decode_xer;
xer_type_encoder_f ProbeSegmentNumber_encode_xer;
oer_type_decoder_f ProbeSegmentNumber_decode_oer;
oer_type_encoder_f ProbeSegmentNumber_encode_oer;
per_type_decoder_f ProbeSegmentNumber_decode_uper;
per_type_encoder_f ProbeSegmentNumber_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _ProbeSegmentNumber_H_ */
#include <asn_internal.h>
