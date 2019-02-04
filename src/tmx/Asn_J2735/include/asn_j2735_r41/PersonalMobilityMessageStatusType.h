/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "../J2735_R41_Source_mod_with_PSM.ASN"
 * 	`asn1c -gen-PER -fno-include-deps`
 */

#ifndef	_PersonalMobilityMessageStatusType_H_
#define	_PersonalMobilityMessageStatusType_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PersonalMobilityMessageStatusType {
	PersonalMobilityMessageStatusType_new	= 0,
	PersonalMobilityMessageStatusType_update	= 1,
	PersonalMobilityMessageStatusType_response	= 2,
	PersonalMobilityMessageStatusType_cancel	= 3,
	PersonalMobilityMessageStatusType_arrival	= 4,
	PersonalMobilityMessageStatusType_completed	= 5
} e_PersonalMobilityMessageStatusType;

/* PersonalMobilityMessageStatusType */
typedef long	 PersonalMobilityMessageStatusType_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PersonalMobilityMessageStatusType;
asn_struct_free_f PersonalMobilityMessageStatusType_free;
asn_struct_print_f PersonalMobilityMessageStatusType_print;
asn_constr_check_f PersonalMobilityMessageStatusType_constraint;
ber_type_decoder_f PersonalMobilityMessageStatusType_decode_ber;
der_type_encoder_f PersonalMobilityMessageStatusType_encode_der;
xer_type_decoder_f PersonalMobilityMessageStatusType_decode_xer;
xer_type_encoder_f PersonalMobilityMessageStatusType_encode_xer;
per_type_decoder_f PersonalMobilityMessageStatusType_decode_uper;
per_type_encoder_f PersonalMobilityMessageStatusType_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _PersonalMobilityMessageStatusType_H_ */
#include "asn_internal.h"