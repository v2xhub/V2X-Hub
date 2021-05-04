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

#ifndef	_VerticalOffset_H_
#define	_VerticalOffset_H_


#include "asn_application.h"

/* Including external dependencies */
#include "VertOffset-B07.h"
#include "VertOffset-B08.h"
#include "VertOffset-B09.h"
#include "VertOffset-B10.h"
#include "VertOffset-B11.h"
#include "VertOffset-B12.h"
#include "DSRC_Elevation.h"
#include "RegionalExtension.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum VerticalOffset_PR {
	VerticalOffset_PR_NOTHING,	/* No components present */
	VerticalOffset_PR_offset1,
	VerticalOffset_PR_offset2,
	VerticalOffset_PR_offset3,
	VerticalOffset_PR_offset4,
	VerticalOffset_PR_offset5,
	VerticalOffset_PR_offset6,
	VerticalOffset_PR_elevation,
	VerticalOffset_PR_regional
} VerticalOffset_PR;

/* VerticalOffset */
typedef struct VerticalOffset {
	VerticalOffset_PR present;
	union VerticalOffset_u {
		VertOffset_B07_t	 offset1;
		VertOffset_B08_t	 offset2;
		VertOffset_B09_t	 offset3;
		VertOffset_B10_t	 offset4;
		VertOffset_B11_t	 offset5;
		VertOffset_B12_t	 offset6;
		DSRC_Elevation_t	 elevation;
<<<<<<< HEAD
		Reg_BasicSafetyMessage_t	 regional;
=======
		RegionalExtension_99P0_t	 regional;
>>>>>>> develop
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} VerticalOffset_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_VerticalOffset;

#ifdef __cplusplus
}
#endif

#endif	/* _VerticalOffset_H_ */
#include "asn_internal.h"
