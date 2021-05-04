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

#include "PersonalSafetyMessage.h"

static int
memb_regional_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 4)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_regional_constr_27 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..4)) */};
static asn_per_constraints_t asn_PER_type_regional_constr_27 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (SIZE(1..4)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_regional_constr_27 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..4)) */};
static asn_per_constraints_t asn_PER_memb_regional_constr_27 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (SIZE(1..4)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_regional_27[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
<<<<<<< HEAD
		&asn_DEF_Reg_BasicSafetyMessage,
=======
		&asn_DEF_RegionalExtension_99P0,
>>>>>>> develop
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_regional_tags_27[] = {
	(ASN_TAG_CLASS_CONTEXT | (25 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_regional_specs_27 = {
	sizeof(struct PersonalSafetyMessage__regional),
	offsetof(struct PersonalSafetyMessage__regional, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_regional_27 = {
	"regional",
	"regional",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_regional_tags_27,
	sizeof(asn_DEF_regional_tags_27)
		/sizeof(asn_DEF_regional_tags_27[0]) - 1, /* 1 */
	asn_DEF_regional_tags_27,	/* Same as above */
	sizeof(asn_DEF_regional_tags_27)
		/sizeof(asn_DEF_regional_tags_27[0]), /* 2 */
	{ &asn_OER_type_regional_constr_27, &asn_PER_type_regional_constr_27, SEQUENCE_OF_constraint },
	asn_MBR_regional_27,
	1,	/* Single element */
	&asn_SPC_regional_specs_27	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_PersonalSafetyMessage_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PersonalSafetyMessage, basicType),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PersonalDeviceUserType,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"basicType"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PersonalSafetyMessage, secMark),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DSecond,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"secMark"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PersonalSafetyMessage, msgCnt),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DSRC_MsgCount,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"msgCnt"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PersonalSafetyMessage, id),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TemporaryID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"id"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PersonalSafetyMessage, position),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Position3D,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"position"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PersonalSafetyMessage, accuracy),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PositionalAccuracy,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"accuracy"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PersonalSafetyMessage, speed),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Velocity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"speed"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PersonalSafetyMessage, heading),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Heading,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"heading"
		},
	{ ATF_POINTER, 18, offsetof(struct PersonalSafetyMessage, accelSet),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AccelerationSet4Way,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"accelSet"
		},
	{ ATF_POINTER, 17, offsetof(struct PersonalSafetyMessage, pathHistory),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PathHistory,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pathHistory"
		},
	{ ATF_POINTER, 16, offsetof(struct PersonalSafetyMessage, pathPrediction),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PathPrediction,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pathPrediction"
		},
	{ ATF_POINTER, 15, offsetof(struct PersonalSafetyMessage, propulsion),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_PropelledInformation,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"propulsion"
		},
	{ ATF_POINTER, 14, offsetof(struct PersonalSafetyMessage, useState),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PersonalDeviceUsageState,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"useState"
		},
	{ ATF_POINTER, 13, offsetof(struct PersonalSafetyMessage, crossRequest),
		(ASN_TAG_CLASS_CONTEXT | (13 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PersonalCrossingRequest,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"crossRequest"
		},
	{ ATF_POINTER, 12, offsetof(struct PersonalSafetyMessage, crossState),
		(ASN_TAG_CLASS_CONTEXT | (14 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PersonalCrossingInProgress,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"crossState"
		},
	{ ATF_POINTER, 11, offsetof(struct PersonalSafetyMessage, clusterSize),
		(ASN_TAG_CLASS_CONTEXT | (15 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NumberOfParticipantsInCluster,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"clusterSize"
		},
	{ ATF_POINTER, 10, offsetof(struct PersonalSafetyMessage, clusterRadius),
		(ASN_TAG_CLASS_CONTEXT | (16 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PersonalClusterRadius,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"clusterRadius"
		},
	{ ATF_POINTER, 9, offsetof(struct PersonalSafetyMessage, eventResponderType),
		(ASN_TAG_CLASS_CONTEXT | (17 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PublicSafetyEventResponderWorkerType,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eventResponderType"
		},
	{ ATF_POINTER, 8, offsetof(struct PersonalSafetyMessage, activityType),
		(ASN_TAG_CLASS_CONTEXT | (18 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PublicSafetyAndRoadWorkerActivity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"activityType"
		},
	{ ATF_POINTER, 7, offsetof(struct PersonalSafetyMessage, activitySubType),
		(ASN_TAG_CLASS_CONTEXT | (19 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PublicSafetyDirectingTrafficSubType,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"activitySubType"
		},
	{ ATF_POINTER, 6, offsetof(struct PersonalSafetyMessage, assistType),
		(ASN_TAG_CLASS_CONTEXT | (20 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PersonalAssistive,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"assistType"
		},
	{ ATF_POINTER, 5, offsetof(struct PersonalSafetyMessage, sizing),
		(ASN_TAG_CLASS_CONTEXT | (21 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UserSizeAndBehaviour,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sizing"
		},
	{ ATF_POINTER, 4, offsetof(struct PersonalSafetyMessage, attachment),
		(ASN_TAG_CLASS_CONTEXT | (22 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Attachment,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"attachment"
		},
	{ ATF_POINTER, 3, offsetof(struct PersonalSafetyMessage, attachmentRadius),
		(ASN_TAG_CLASS_CONTEXT | (23 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AttachmentRadius,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"attachmentRadius"
		},
	{ ATF_POINTER, 2, offsetof(struct PersonalSafetyMessage, animalType),
		(ASN_TAG_CLASS_CONTEXT | (24 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AnimalType,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"animalType"
		},
	{ ATF_POINTER, 1, offsetof(struct PersonalSafetyMessage, regional),
		(ASN_TAG_CLASS_CONTEXT | (25 << 2)),
		0,
		&asn_DEF_regional_27,
		0,
		{ &asn_OER_memb_regional_constr_27, &asn_PER_memb_regional_constr_27,  memb_regional_constraint_1 },
		0, 0, /* No default value */
		"regional"
		},
};
static const int asn_MAP_PersonalSafetyMessage_oms_1[] = { 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25 };
static const ber_tlv_tag_t asn_DEF_PersonalSafetyMessage_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PersonalSafetyMessage_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* basicType */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* secMark */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* msgCnt */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* id */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* position */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* accuracy */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* speed */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* heading */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* accelSet */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* pathHistory */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* pathPrediction */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 }, /* propulsion */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 12, 0, 0 }, /* useState */
    { (ASN_TAG_CLASS_CONTEXT | (13 << 2)), 13, 0, 0 }, /* crossRequest */
    { (ASN_TAG_CLASS_CONTEXT | (14 << 2)), 14, 0, 0 }, /* crossState */
    { (ASN_TAG_CLASS_CONTEXT | (15 << 2)), 15, 0, 0 }, /* clusterSize */
    { (ASN_TAG_CLASS_CONTEXT | (16 << 2)), 16, 0, 0 }, /* clusterRadius */
    { (ASN_TAG_CLASS_CONTEXT | (17 << 2)), 17, 0, 0 }, /* eventResponderType */
    { (ASN_TAG_CLASS_CONTEXT | (18 << 2)), 18, 0, 0 }, /* activityType */
    { (ASN_TAG_CLASS_CONTEXT | (19 << 2)), 19, 0, 0 }, /* activitySubType */
    { (ASN_TAG_CLASS_CONTEXT | (20 << 2)), 20, 0, 0 }, /* assistType */
    { (ASN_TAG_CLASS_CONTEXT | (21 << 2)), 21, 0, 0 }, /* sizing */
    { (ASN_TAG_CLASS_CONTEXT | (22 << 2)), 22, 0, 0 }, /* attachment */
    { (ASN_TAG_CLASS_CONTEXT | (23 << 2)), 23, 0, 0 }, /* attachmentRadius */
    { (ASN_TAG_CLASS_CONTEXT | (24 << 2)), 24, 0, 0 }, /* animalType */
    { (ASN_TAG_CLASS_CONTEXT | (25 << 2)), 25, 0, 0 } /* regional */
};
asn_SEQUENCE_specifics_t asn_SPC_PersonalSafetyMessage_specs_1 = {
	sizeof(struct PersonalSafetyMessage),
	offsetof(struct PersonalSafetyMessage, _asn_ctx),
	asn_MAP_PersonalSafetyMessage_tag2el_1,
	26,	/* Count of tags in the map */
	asn_MAP_PersonalSafetyMessage_oms_1,	/* Optional members */
	18, 0,	/* Root/Additions */
	26,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_PersonalSafetyMessage = {
	"PersonalSafetyMessage",
	"PersonalSafetyMessage",
	&asn_OP_SEQUENCE,
	asn_DEF_PersonalSafetyMessage_tags_1,
	sizeof(asn_DEF_PersonalSafetyMessage_tags_1)
		/sizeof(asn_DEF_PersonalSafetyMessage_tags_1[0]), /* 1 */
	asn_DEF_PersonalSafetyMessage_tags_1,	/* Same as above */
	sizeof(asn_DEF_PersonalSafetyMessage_tags_1)
		/sizeof(asn_DEF_PersonalSafetyMessage_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_PersonalSafetyMessage_1,
	26,	/* Elements count */
	&asn_SPC_PersonalSafetyMessage_specs_1	/* Additional specs */
};

