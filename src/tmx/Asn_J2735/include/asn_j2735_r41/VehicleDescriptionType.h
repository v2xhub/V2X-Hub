/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "../J2735_R41_Source_mod_with_PSM.ASN"
 * 	`asn1c -gen-PER -fno-include-deps`
 */

#ifndef	_VehicleDescriptionType_H_
#define	_VehicleDescriptionType_H_


#include "asn_application.h"

/* Including external dependencies */
#include "IA5String.h"

#ifdef __cplusplus
extern "C" {
#endif

/* VehicleDescriptionType */
typedef IA5String_t	 VehicleDescriptionType_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_VehicleDescriptionType;
asn_struct_free_f VehicleDescriptionType_free;
asn_struct_print_f VehicleDescriptionType_print;
asn_constr_check_f VehicleDescriptionType_constraint;
ber_type_decoder_f VehicleDescriptionType_decode_ber;
der_type_encoder_f VehicleDescriptionType_encode_der;
xer_type_decoder_f VehicleDescriptionType_decode_xer;
xer_type_encoder_f VehicleDescriptionType_encode_xer;
per_type_decoder_f VehicleDescriptionType_decode_uper;
per_type_encoder_f VehicleDescriptionType_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _VehicleDescriptionType_H_ */
#include "asn_internal.h"