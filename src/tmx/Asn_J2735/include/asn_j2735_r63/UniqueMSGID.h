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

#ifndef	_UniqueMSGID_H_
#define	_UniqueMSGID_H_


#include "asn_application.h"

/* Including external dependencies */
#include "OCTET_STRING.h"

#ifdef __cplusplus
extern "C" {
#endif

/* UniqueMSGID */
typedef OCTET_STRING_t	 UniqueMSGID_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_UniqueMSGID_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_UniqueMSGID;
asn_struct_free_f UniqueMSGID_free;
asn_struct_print_f UniqueMSGID_print;
asn_constr_check_f UniqueMSGID_constraint;
ber_type_decoder_f UniqueMSGID_decode_ber;
der_type_encoder_f UniqueMSGID_encode_der;
xer_type_decoder_f UniqueMSGID_decode_xer;
xer_type_encoder_f UniqueMSGID_encode_xer;
oer_type_decoder_f UniqueMSGID_decode_oer;
oer_type_encoder_f UniqueMSGID_encode_oer;
per_type_decoder_f UniqueMSGID_decode_uper;
per_type_encoder_f UniqueMSGID_encode_uper;
per_type_decoder_f UniqueMSGID_decode_aper;
per_type_encoder_f UniqueMSGID_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _UniqueMSGID_H_ */
#include "asn_internal.h"
