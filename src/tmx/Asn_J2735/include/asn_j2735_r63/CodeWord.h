/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
<<<<<<< HEAD
 * 	found in "J2735_201603_ASN_CC.asn"
 * 	`asn1c -gen-PER -fcompound-names -fincludes-quoted -fskeletons-copy`
=======
 * 	found in "J2735_201603.asn1"
 * 	`asn1c -gen-PER -fcompound-names -fincludes-quoted`
>>>>>>> develop
 */

#ifndef	_CodeWord_H_
#define	_CodeWord_H_


#include "asn_application.h"

/* Including external dependencies */
#include "OCTET_STRING.h"

#ifdef __cplusplus
extern "C" {
#endif

/* CodeWord */
typedef OCTET_STRING_t	 CodeWord_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CodeWord;
asn_struct_free_f CodeWord_free;
asn_struct_print_f CodeWord_print;
asn_constr_check_f CodeWord_constraint;
ber_type_decoder_f CodeWord_decode_ber;
der_type_encoder_f CodeWord_encode_der;
xer_type_decoder_f CodeWord_decode_xer;
xer_type_encoder_f CodeWord_encode_xer;
oer_type_decoder_f CodeWord_decode_oer;
oer_type_encoder_f CodeWord_encode_oer;
per_type_decoder_f CodeWord_decode_uper;
per_type_encoder_f CodeWord_encode_uper;
per_type_decoder_f CodeWord_decode_aper;
per_type_encoder_f CodeWord_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _CodeWord_H_ */
#include "asn_internal.h"
