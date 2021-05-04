/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "AddGrpB"
<<<<<<< HEAD
 * 	found in "J2735_201603_ASN_CC.asn"
 * 	`asn1c -gen-PER -fcompound-names -fincludes-quoted -fskeletons-copy`
=======
 * 	found in "J2735_201603.asn1"
 * 	`asn1c -gen-PER -fcompound-names -fincludes-quoted`
>>>>>>> develop
 */

#ifndef	_AddGrpB_TimeMark_H_
#define	_AddGrpB_TimeMark_H_


#include "asn_application.h"

/* Including external dependencies */
#include "Year.h"
#include "Month.h"
#include "Day.h"
#include "SummerTime.h"
#include "Holiday.h"
#include "AddGrpB_DayOfWeek.h"
#include "Hour.h"
#include "Minute.h"
#include "Second.h"
#include "TenthSecond.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* AddGrpB_TimeMark */
typedef struct AddGrpB_TimeMark {
	Year_t	 year;
	Month_t	 month;
	Day_t	 day;
	SummerTime_t	 summerTime;
	Holiday_t	 holiday;
	AddGrpB_DayOfWeek_t	 dayofWeek;
	Hour_t	 hour;
	Minute_t	 minute;
	Second_t	 second;
	TenthSecond_t	 tenthSecond;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AddGrpB_TimeMark_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AddGrpB_TimeMark;

#ifdef __cplusplus
}
#endif

#endif	/* _AddGrpB_TimeMark_H_ */
#include "asn_internal.h"
