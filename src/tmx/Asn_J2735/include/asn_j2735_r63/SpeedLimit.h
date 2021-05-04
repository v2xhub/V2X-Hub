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

#ifndef	_SpeedLimit_H_
#define	_SpeedLimit_H_


#include "asn_application.h"

/* Including external dependencies */
#include "asn_SEQUENCE_OF.h"
#include "ITIScodes.h"
#include "ITIStextPhrase.h"
#include "constr_CHOICE.h"
#include "constr_SEQUENCE.h"
#include "constr_SEQUENCE_OF.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SpeedLimit__Member__item_PR {
	SpeedLimit__Member__item_PR_NOTHING,	/* No components present */
	SpeedLimit__Member__item_PR_itis,
	SpeedLimit__Member__item_PR_text
} SpeedLimit__Member__item_PR;

/* Forward definitions */
typedef struct SpeedLimit__Member {
	struct SpeedLimit__Member__item {
		SpeedLimit__Member__item_PR present;
		union SpeedLimit__Member__item_u {
			ITIScodes_t	 itis;
			ITIStextPhrase_t	 text;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} item;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SpeedLimit__Member;

/* SpeedLimit */
typedef struct SpeedLimit {
	A_SEQUENCE_OF(SpeedLimit__Member) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SpeedLimit_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SpeedLimit;
extern asn_SET_OF_specifics_t asn_SPC_SpeedLimit_specs_1;
extern asn_TYPE_member_t asn_MBR_SpeedLimit_1[1];
extern asn_per_constraints_t asn_PER_type_SpeedLimit_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _SpeedLimit_H_ */
#include "asn_internal.h"
