
/**
 * WARNING: DO NOT EDIT THIS FILE
 *
 * This source file was generated from the CPlusPlusGenerator.xsl stylesheet
 *
 * Your changes will be overwritten when this tool executes again.  In order
 * to edit the contents, you must go into the source XML files
 *
 * @author Greg Baumgardner
 */
 

#ifndef INCLUDE_TMXAPIMESSAGES_H_
#define INCLUDE_TMXAPIMESSAGES_H_

#ifndef CONSTEXPR
#if __cplusplus > 199711L
#define CONSTEXPR constexpr
#else
#ifdef __GNUC__
#define CONSTEXPR __attribute__ ((unused))
#else
#define CONSTEXPR
#endif
#endif
#endif

		
	
namespace tmx {
		
namespace messages {
			
namespace api {
				
			
enum MsgType 
{
		Error = 0,
		Register = 1,
		Subscribe = 2,
		Status = 3,
		Config = 4,
		EventLog = 5
};
		
		
static CONSTEXPR const char *MSGTYPE_ERROR_STRING = "__error";
static CONSTEXPR const char *MSGTYPE_REGISTER_STRING = "__register";
static CONSTEXPR const char *MSGTYPE_SUBSCRIBE_STRING = "__subscribe";
static CONSTEXPR const char *MSGTYPE_STATUS_STRING = "__status";
static CONSTEXPR const char *MSGTYPE_CONFIG_STRING = "__config";
static CONSTEXPR const char *MSGTYPE_EVENTLOG_STRING = "__eventLog";
			
enum MsgSubType 
{
		None = 0,
		J2735 = 1,
		basicSafetyMessage_D = 2,
		basicSafetyMessageVerbose_D = 3,
		commonSafetyRequest_D = 4,
		emergencyVehicleAlert_D = 5,
		intersectionCollision_D = 6,
		mapData_D = 7,
		nmeaCorrections_D = 8,
		probeDataManagement_D = 9,
		probeVehicleData_D = 10,
		roadSideAlert_D = 11,
		rtcmCorrections_D = 12,
		signalPhaseAndTimingMessage_D = 13,
		signalRequestMessage_D = 14,
		signalStatusMessage_D = 15,
		travelerInformation_D = 16,
		uperFrame_D = 17,
		mapData = 18,
		signalPhaseAndTimingMessage = 19,
		basicSafetyMessage = 20,
		commonSafetyRequest = 21,
		emergencyVehicleAlert = 22,
		intersectionCollision = 23,
		nmeaCorrections = 24,
		probeDataManagement = 25,
		probeVehicleData = 26,
		roadSideAlert = 27,
		rtcmCorrections = 28,
		signalRequestMessage = 29,
		signalStatusMessage = 30,
		travelerInformation = 31,
		personalSafetyMessage = 32,
		personalMobilityMessage = 245,
		testMessage00 = 240,
		testMessage01 = 241,
		testMessage02 = 242,
		testMessage03 = 243,
		testMessage04 = 244,
		testMessage05 = 245, 
		J2735_end = 256,
		GID = 300
};
		
		
static CONSTEXPR const char *MSGSUBTYPE_NONE_STRING = "None";
static CONSTEXPR const char *MSGSUBTYPE_J2735_STRING = "J2735";
static CONSTEXPR const char *MSGSUBTYPE_BASICSAFETYMESSAGE_D_STRING = "BSM";
static CONSTEXPR const char *MSGSUBTYPE_BASICSAFETYMESSAGEVERBOSE_D_STRING = "BSMV";
static CONSTEXPR const char *MSGSUBTYPE_COMMONSAFETYREQUEST_D_STRING = "CSR";
static CONSTEXPR const char *MSGSUBTYPE_EMERGENCYVEHICLEALERT_D_STRING = "EVA";
static CONSTEXPR const char *MSGSUBTYPE_INTERSECTIONCOLLISION_D_STRING = "IC";
static CONSTEXPR const char *MSGSUBTYPE_MAPDATA_D_STRING = "MAP";
static CONSTEXPR const char *MSGSUBTYPE_NMEACORRECTIONS_D_STRING = "NMEA";
static CONSTEXPR const char *MSGSUBTYPE_PROBEDATAMANAGEMENT_D_STRING = "PDM";
static CONSTEXPR const char *MSGSUBTYPE_PROBEVEHICLEDATA_D_STRING = "PVD";
static CONSTEXPR const char *MSGSUBTYPE_ROADSIDEALERT_D_STRING = "RSA";
static CONSTEXPR const char *MSGSUBTYPE_RTCMCORRECTIONS_D_STRING = "RTCM";
static CONSTEXPR const char *MSGSUBTYPE_SIGNALPHASEANDTIMINGMESSAGE_D_STRING = "SPAT";
static CONSTEXPR const char *MSGSUBTYPE_SIGNALREQUESTMESSAGE_D_STRING = "SRM";
static CONSTEXPR const char *MSGSUBTYPE_SIGNALSTATUSMESSAGE_D_STRING = "SSM";
static CONSTEXPR const char *MSGSUBTYPE_TRAVELERINFORMATION_D_STRING = "TIM";
static CONSTEXPR const char *MSGSUBTYPE_UPERFRAME_D_STRING = "UPERframe";
static CONSTEXPR const char *MSGSUBTYPE_MAPDATA_STRING = "MAP-P";
static CONSTEXPR const char *MSGSUBTYPE_SIGNALPHASEANDTIMINGMESSAGE_STRING = "SPAT-P";
static CONSTEXPR const char *MSGSUBTYPE_BASICSAFETYMESSAGE_STRING = "BSM";
static CONSTEXPR const char *MSGSUBTYPE_COMMONSAFETYREQUEST_STRING = "CSR";
static CONSTEXPR const char *MSGSUBTYPE_EMERGENCYVEHICLEALERT_STRING = "EVA";
static CONSTEXPR const char *MSGSUBTYPE_INTERSECTIONCOLLISION_STRING = "IC";
static CONSTEXPR const char *MSGSUBTYPE_NMEACORRECTIONS_STRING = "NMEA";
static CONSTEXPR const char *MSGSUBTYPE_PROBEDATAMANAGEMENT_STRING = "PDM";
static CONSTEXPR const char *MSGSUBTYPE_PROBEVEHICLEDATA_STRING = "PVD";
static CONSTEXPR const char *MSGSUBTYPE_ROADSIDEALERT_STRING = "RSA";
static CONSTEXPR const char *MSGSUBTYPE_RTCMCORRECTIONS_STRING = "RTCM";
static CONSTEXPR const char *MSGSUBTYPE_SIGNALREQUESTMESSAGE_STRING = "SRM";
static CONSTEXPR const char *MSGSUBTYPE_SIGNALSTATUSMESSAGE_STRING = "SSM";
static CONSTEXPR const char *MSGSUBTYPE_TRAVELERINFORMATION_STRING = "TIM";
static CONSTEXPR const char *MSGSUBTYPE_PERSONALSAFETYMESSAGE_D_STRING = "PSM";
static CONSTEXPR const char *MSGSUBTYPE_PERSONALSAFETYMESSAGE_STRING = "PSM-P";
static CONSTEXPR const char *MSGSUBTYPE_PERSONALMOBILITYMESSAGE_STRING = "PMM";
static CONSTEXPR const char *MSGSUBTYPE_TESTMESSAGE04_STRING = "TMSG04-P";
static CONSTEXPR const char *MSGSUBTYPE_TESTMESSAGE05_STRING = "TMSG05-P";
static CONSTEXPR const char *MSGSUBTYPE_TESTMESSAGE00_STRING = "TMSG00-P";
static CONSTEXPR const char *MSGSUBTYPE_TESTMESSAGE01_STRING = "TMSG01-P";
static CONSTEXPR const char *MSGSUBTYPE_TESTMESSAGE02_STRING = "TMSG02-P";
static CONSTEXPR const char *MSGSUBTYPE_TESTMESSAGE03_STRING = "TMSG03-P";
static CONSTEXPR const char *MSGSUBTYPE_J2735_END_STRING = "J2735_end";
static CONSTEXPR const char *MSGSUBTYPE_GID_STRING = "GID";
			
enum Encoding 
{
		String = 0,
		JSON = 1,
		XML = 2,
		ByteArray = 3,
		ASN1_BER = 4,
		ASN1_UPER = 5
};
		
		
static CONSTEXPR const char *ENCODING_STRING_STRING = "string";
static CONSTEXPR const char *ENCODING_JSON_STRING = "json";
static CONSTEXPR const char *ENCODING_XML_STRING = "xmlstring";
static CONSTEXPR const char *ENCODING_BYTEARRAY_STRING = "bytearray/hexstring";
static CONSTEXPR const char *ENCODING_ASN1_BER_STRING = "asn.1-ber/hexstring";
static CONSTEXPR const char *ENCODING_ASN1_UPER_STRING = "asn.1-uper/hexstring";
			
enum Status 
{
		Unknown = 0,
		Started = 1,
		Running = 2,
		Stale = 3,
		Stopped = 4
};
		
		
static CONSTEXPR const char *STATUS_UNKNOWN_STRING = "Unknown";
static CONSTEXPR const char *STATUS_STARTED_STRING = "Started, waiting for connection...";
static CONSTEXPR const char *STATUS_RUNNING_STRING = "Running";
static CONSTEXPR const char *STATUS_STALE_STRING = "Connection going stale";
static CONSTEXPR const char *STATUS_STOPPED_STRING = "Stopped / Disconnected";
			
} /* End namespace api */
		
} /* End namespace messages */
	
} /* End namespace tmx */

		
#endif /* INCLUDE_TMXAPIMESSAGES_H_ */
	