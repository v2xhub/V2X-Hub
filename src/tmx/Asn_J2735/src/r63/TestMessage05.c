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

#include "TestMessage05.h"

asn_TYPE_member_t asn_MBR_TestMessage05_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct TestMessage05, body),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_TrafficControlMessage,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
<<<<<<< HEAD
		"body"
=======
		"header"
		},
	{ ATF_POINTER, 1, offsetof(struct TestMessage05, regional),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RegionalExtension_99P0,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"regional"
>>>>>>> develop
		},
};
static const ber_tlv_tag_t asn_DEF_TestMessage05_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_TestMessage05_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* body */
};
asn_SEQUENCE_specifics_t asn_SPC_TestMessage05_specs_1 = {
	sizeof(struct TestMessage05),
	offsetof(struct TestMessage05, _asn_ctx),
	asn_MAP_TestMessage05_tag2el_1,
<<<<<<< HEAD
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	1,	/* First extension addition */
=======
	2,	/* Count of tags in the map */
	asn_MAP_TestMessage05_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	2,	/* First extension addition */
>>>>>>> develop
};
asn_TYPE_descriptor_t asn_DEF_TestMessage05 = {
	"TestMessage05",
	"TestMessage05",
	&asn_OP_SEQUENCE,
	asn_DEF_TestMessage05_tags_1,
	sizeof(asn_DEF_TestMessage05_tags_1)
		/sizeof(asn_DEF_TestMessage05_tags_1[0]), /* 1 */
	asn_DEF_TestMessage05_tags_1,	/* Same as above */
	sizeof(asn_DEF_TestMessage05_tags_1)
		/sizeof(asn_DEF_TestMessage05_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_TestMessage05_1,
	1,	/* Elements count */
	&asn_SPC_TestMessage05_specs_1	/* Additional specs */
};

