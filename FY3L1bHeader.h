#ifndef FY3L1BHEADER_H

#define FY3L1BHEADER_H



#pragma pack (push)

#pragma pack (1)

#include <string>
using namespace std;

/* FY3���������֧��L1������ */

struct FY3_ERM_L1B_FILE_INFO

{

	char                   strSatelliteName[8];                          /* �������ƣ���FY-3C�ȣ�                          */

	char                   strSensorName[128];                           /* ��������  "Earth Radiation Measurement"        */

	char                   strSensorIdentificationCode[12];              /* ���������루��ERM��                            */

	char                   strDatasetName[64];                           /* ���ݼ����ƣ���Global ERM Data��                */

	char                   strFileName[256];                             /* �ļ�����                                       */

	char                   strFileAliasName[256];                        /* �ļ�����                                       */

	char                   strResponser[32];                             /* ��Ʒ���ɵأ�NSMC��                             */

	char                   strVersionOfSoftware[32];                     /* ��������汾��(��V1.0.0)                       */

	char                   strDateOfSoftwareRevision[32];                /* ���������������                               */

	char                   strVersionOfCoefficientIndex[32];             /* ����ϵ���汾��                                 */

	char                   strDateOfCoefficientIndexRevision[32];        /* ����ϵ����������                               */

	char                   strDateOfObservingBeginning[32];              /* ���ݹ۲⿪ʼ����(����������)                   */

	char                   strTimeOfObservingBeginning[32];              /* ���ݹ۲⿪ʼʱ�䣨����ʱ������룩             */

	char                   strDateOfObservingEnding[32];                 /* ���ݹ۲��������(����������)                   */

	char                   strTimeOfObservingEnding[32];                 /* ���ݹ۲����ʱ�䣨����ʱ������룩             */

	char                   strDateOfDataCreating[32];                    /* ���ݴ�������(����������)                       */

	char                   strTimeOfDataCreating[32];                    /* ���ݴ���ʱ�䣨����ʱ������룩                 */

	char                   strDayOrNightFlag[8];                         /* ����ҹ���־                                   */

	unsigned int           dwOrbitNumber;                                /* �����                                         */

	unsigned short int     wOrbitPeriod;                                 /* �������                                       */

	char                   strOrbitDirection[8];                         /* �������                                       */

	unsigned char          cDataQuality;                                 /* �����������(0-5��)                            */

	int                    iNumberOfScans;                               /* ��ɨ������                                     */

	int                    iNumberOfDaymodescans;                        /* ����ģʽɨ������                               */

	int                    iNumberofNightmodescans;                      /* ����ģʽɨ������                               */

	int                    iIncompleteScans;                             /* ��������ɨ������                               */

	unsigned char          cQAScanFlag;                                  /* ɨ�������������롢��ɨ����                     */

	unsigned short int     wQAPixelFlag;                                 /* ��Ԫ���������롢��ɨ����                       */

	unsigned short int     wBeginLineNumber;                             /* ��ʼ�к�                                       */

	unsigned short int     wEndLineNumber;                               /* �����к�                                       */

	unsigned short int     wBeginPixelNumber;                            /* ��ʼ��Ԫ��                                     */

	unsigned short int     wEndPixelNumber;                              /* ������Ԫ��                                     */

	unsigned char          strReferenceEllipsoidModelID;                 /* ��������ο�����ϵID��WGS84��                  */

	double                 dEarthSunDistanceRatio;                       /* �յؾ����                                     */

	char                   strMeanAnomaly[12];                           /* ƽ���ص�ǣ��ȣ�                               */

	char                   strMeanMotion[12];                            /* ƽ���˶�                                       */

	char                   strEccentricity[12];                          /* ƫ����                                         */

	char                   strPerigeeArgument[12];                       /* ���ص㸩�ǣ��ȣ�                               */

	char                   strAscendingNodeLongitude[12];                /* ������ྭ���ȣ�                               */

	char                   strOrbitalInclination[12];                    /* �����ǣ��ȣ�                                 */

	char                   strEpochTime[12];                             /* ��Ԫʱ��                                       */
  
	float                  fOrbitPointLatitude[4];                       /* ���4���ǵ�γ��                                */

	float                  fOrbitPointLongitude[4];                      /* ���4���ǵ㾭��                                */

	char                   strAdditionalAnotation[1024];                 /* �ļ��ĸ���˵��(���Զ��ļ���ʹ�á������˵�˵��) */

                                                                             

	long                   iCalibrationStartTime[4];                     /* ̽��ͨ�����꿪ʼʱ��                           */																													

	long                   iCalibrationEndTime[4];                       /* ̽��ͨ���������ʱ��                           */																													

	int                    iCalibrationNscans;                           /* �ڹ춨��۲��Դ������                         */

	unsigned char          cOperationalTempFlag[2000];                   /* ���������¶ȱ�ʶ                               */

	float                  fCountToTadianceCoefficientPrecal[16];        /* �ڹ춨��ǰ̽��ͨ������궨ϵ��                 */																													

	float                  fCountToRadianceCoefficientAftercal[16];      /* �ڹ춨���̽��ͨ������궨ϵ��                 */																													

	float                  fStaticAnalysisOfEnginerringData[48];         /* �ڹ칤��ң�����ݵ�ͳ�Ʒ���                     */																													

};

/* FY3���������֧��L1_OBC���� */

struct FY3_ERMOBC_L1B_FILE_INFO

{

	char                   strSatelliteName[8];                          /* �������ƣ���FY-3C�ȣ�                          */

	char                   strSensorName[128];                           /* ��������  "Earth Radiation Measurement"        */

	char                   strSensorIdentificationCode[12];              /* ���������루��ERM��                            */

	char                   strDatasetName[64];                           /* ���ݼ����ƣ���Global ERM Data��                */

	char                   strFileName[256];                             /* �ļ�����                                       */

	char                   strFileAliasName[256];                        /* �ļ�����                                       */

	char                   strResponser[32];                             /* ��Ʒ���ɵأ�NSMC��                             */

	char                   strVersionOfSoftware[32];                     /* ��������汾��(��V1.0.0)                       */

	char                   strDateOfSoftwareRevision[32];                /* ���������������                               */

	char                   strVersionOfCoefficientIndex[32];             /* ����ϵ���汾��                                 */

	char                   strDateOfCoefficientIndexRevision[32];        /* ����ϵ����������                               */

	char                   strDateOfObservingBeginning[32];              /* ���ݹ۲⿪ʼ����(����������)                   */

	char                   strTimeOfObservingBeginning[32];              /* ���ݹ۲⿪ʼʱ�䣨����ʱ������룩             */

	char                   strDateOfObservingEnding[32];                 /* ���ݹ۲��������(����������)                   */

	char                   strTimeOfObservingEnding[32];                 /* ���ݹ۲����ʱ�䣨����ʱ������룩             */

	char                   strDateOfDataCreating[32];                    /* ���ݴ�������(����������)                       */

	char                   strTimeOfDataCreating[32];                    /* ���ݴ���ʱ�䣨����ʱ������룩                 */

	char                   strDayOrNightFlag[8];                         /* ����ҹ���־                                   */

	unsigned int           dwOrbitNumber;                                /* �����                                         */

	unsigned short int     wOrbitPeriod;                                 /* �������                                       */

	char                   strOrbitDirection[8];                         /* �������                                       */

	unsigned char          cDataQuality;                                 /* �����������(0-5��)                            */

	int                    iNumberOfScans;                               /* ��ɨ����                                       */

	int                    iNumberOfDaymodescans;                        /* ����ģʽɨ����                                 */

	int                    iNumberofNightmodescans;                      /* ����ģʽɨ����                                 */

	int                    iIncompleteScans;                             /* ��������ɨ����                                 */

	unsigned char          cQAScanFlag;                                  /* ɨ�������������롢��ɨ����                     */

	unsigned short int     wQAPixelFlag;                                 /* ��Ԫ���������롢��ɨ����                       */

	unsigned short int     wBeginLineNumber;                             /* ��ʼ�к�                                       */

	unsigned short int     wEndLineNumber;                               /* �����к�                                       */

	unsigned short int     wBeginPixelNumber;                            /* ��ʼ��Ԫ��                                     */

	unsigned short int     wEndPixelNumber;                              /* ������Ԫ��                                     */

	unsigned char          strReferenceEllipsoidModelID;                 /* ��������ο�����ϵID��WGS84��                  */

	double                 dEarthSunDistanceRatio;                       /* �յؾ����                                     */

	char                   strMeanAnomaly[12];                           /* ƽ���ص�ǣ��ȣ�                               */

	char                   strMeanMotion[12];                            /* ƽ���˶�                                       */

	char                   strEccentricity[12];                          /* ƫ����                                         */

	char                   strPerigeeArgument[12];                       /* ���ص㸩�ǣ��ȣ�                               */

	char                   strAscendingNodeLongitude[12];                /* ������ྭ���ȣ�                               */

	char                   strOrbitalInclination[12];                    /* �����ǣ��ȣ�                                 */

	char                   strEpochTime[12];                             /* ��Ԫʱ��                                       */
	

	float                  fOrbitPointLatitude[4];                       /* ���4���ǵ�γ��                                */

	float                  fOrbitPointLongitude[4];                      /* ���4���ǵ㾭��                                */

	char                   strAdditionalAnotation[1024];                 /* �ļ��ĸ���˵��(���Զ��ļ���ʹ�á������˵�˵��) */

                                                                             

	long                   iCalibrationStartTime[4];                     /* ̽��ͨ�����꿪ʼʱ��                           */																													

	long                   iCalibrationEndTime[4];                       /* ̽��ͨ���������ʱ��                           */																													

	int                    iCalibrationNscans;                           /* �ڹ춨��۲��Դ������                         */

	unsigned char          cOperationalTempFlag[2000];                   /* ���������¶ȱ�ʶ                               */

	float                  fCountToTadianceCoefficientPrecal[16];        /* �ڹ춨��ǰ̽��ͨ������궨ϵ��                 */																													

	float                  fCountToRadianceCoefficientAftercal[16];      /* �ڹ춨���̽��ͨ������궨ϵ��                 */																													

	float                  fStaticAnalysisOfEnginerringData[48];         /* �ڹ칤��ң�����ݵ�ͳ�Ʒ���                     */																													

};

/* FY3����ֹ��L1������ */

struct FY3_IRAS_L1B_FILE_INFO

{

	char                   strSatelliteName[8];                          /* �������ƣ���FY-3C�ȣ�                          */

	char                   strSensorName[128];                           /* ��������  "InfraRed Atmospheric Sounder"       */

	char                   strSensorIdentificationCode[12];              /* ���������루��IRAS��                           */

	char                   strDatasetName[64];                           /* ���ݼ����ƣ���Global IRAS Data��               */

	char                   strFileName[256];                             /* �ļ�����                                       */

	char                   strFileAliasName[256];                        /* �ļ�����                                       */

	char                   strResponser[32];                             /* ��Ʒ���ɵأ�NSMC��                             */

	char                   strVersionOfSoftware[32];                     /* ��������汾��(��V1.0.0)                       */

	char                   strDateOfSoftwareRevision[32];                /* ���������������                               */

	char                   strVersionOfCoefficientIndex[32];             /* ����ϵ���汾��                                 */

	char                   strDateOfCoefficientIndexRevision[32];        /* ����ϵ����������                               */

	char                   strDateOfObservingBeginning[32];              /* ���ݹ۲⿪ʼ����(����������)                   */

	char                   strTimeOfObservingBeginning[32];              /* ���ݹ۲⿪ʼʱ�䣨����ʱ������룩             */

	char                   strDateOfObservingEnding[32];                 /* ���ݹ۲��������(����������)                   */

	char                   strTimeOfObservingEnding[32];                 /* ���ݹ۲����ʱ�䣨����ʱ������룩             */

	char                   strDateOfDataCreating[32];                    /* ���ݴ�������(����������)                       */

	char                   strTimeOfDataCreating[32];                    /* ���ݴ���ʱ�䣨����ʱ������룩                 */

	char                   strDayOrNightFlag[8];                         /* ����ҹ���־                                   */

	unsigned int           dwOrbitNumber;                                /* �����                                         */

	unsigned short int     wOrbitPeriod;                                 /* �������                                       */

	char                   strOrbitDirection[8];                         /* �������                                       */

	unsigned char          cDataQuality;                                 /* �����������(0-5��)                            */

	int                    iNumberOfScans;                               /* ��ɨ����                                       */

	int                    iNumberOfDaymodescans;                        /* ����ģʽɨ����                                 */

	int                    iNumberofNightmodescans;                      /* ����ģʽɨ����                                 */

	int                    iIncompleteScans;                             /* ��������ɨ����                                 */
 
	unsigned char          cQAScanFlag;                                  /* ɨ�������������롢��ɨ����                     */

	unsigned short int     wQAPixelFlag;                                 /* ��Ԫ���������롢��ɨ����                       */

	unsigned short int     wBeginLineNumber;                             /* ��ʼ�к�                                       */

	unsigned short int     wEndLineNumber;                               /* �����к�                                       */

	unsigned short int     wBeginPixelNumber;                            /* ��ʼ��Ԫ��                                     */

	unsigned short int     wEndPixelNumber;                              /* ������Ԫ��                                     */

	char                   strReferenceEllipsoidModelID;                 /* ��������ο�����ϵID��WGS84��                  */

	double                 dEarthSunDistanceRatio;                       /* �յؾ����                                     */

	char                   strMeanAnomaly[12];                           /* ƽ���ص�ǣ��ȣ�                               */

	char                   strMeanMotion[12];                            /* ƽ���˶�                                       */

	char                   strEccentricity[12];                          /* ƫ����                                         */

	char                   strPerigeeArgument[12];                       /* ���ص㸩�ǣ��ȣ�                               */

	char                   strAscendingNodeLongitude[12];                /* ������ྭ���ȣ�                               */

	char                   strOrbitalInclination[12];                    /* �����ǣ��ȣ�                                 */

	char                   strEpochTime[12];                             /* ��Ԫʱ��                                       */
	
	float                  fOrbitPointLatitude[4];                       /* ���4���ǵ�γ��                                */

	float                  fOrbitPointLongitude[4];                      /* ���4���ǵ㾭��                                */

	char                   strAdditionalAnotation[1024];                 /* �ļ��ĸ���˵��(���Զ��ļ���ʹ�á������˵�˵��) */


	unsigned short int     wClockUpdateIndicator;                        /* ʱ�Ӹ���ָʾ(0 = none during this orbit; otherwise the record number of the first occurrence) */

	unsigned short int     wTimeSequenceErrors;                          /* ʱ���������                                                                                  */

	unsigned short int     wMissingScanLines;                            /* ������                                                                                        */

	unsigned short int     wCountOfCalFailScanlines;                     /* ����ʧ��ɨ������                                                                              */
	
	unsigned short int     wCountOfGeoFailScanlines;                     /* ��λʧ��ɨ������                                                                              */

	unsigned short int     wRealTimeCaliScans;                           /* ����ڹ춨������                                                                              */

	unsigned short int     wUsingReferenceCaliCoefScans;                 /* ʹ�òο�����ϵ������                                                                          */

	char                   strVersionofReferencedCoefficient[32];        /* �ο�����ϵ���汾��                                                                            */

	char                   strDateOfReferencedCoefficientVersion[32];    /* �ο�����ϵ����������                                                                          */

	char                   strVersionOfBandCorrection[32];               /* ���������ݰ汾��                                                                            */

	char                   strDateOfBandCorrectionVersion[32];           /* ���������ݸ�������                                                                          */

	char                   strVersionOfBasefile[32];                     /* ��������������ݰ汾��                                                                        */

	char                   strDateOfBaseFileVersion[32];                 /* ��������������ݸ�������                                                                      */

	float                  fIraCentralWn[26];                            /* ͨ�����Ĳ���                                                                                  */

	float                  fIraBdCorCoef[40];                            /* �Ⱥ���ͨ��������ϵ��                                                                        */

	float                  fIraRefCalCoef[78];                           /* �ο�����ϵ��������,б��,�ؾ�                                                                  */

};

/* FY3����ֹ��L1 OBC������ */

struct FY3_IRASOBC_L1B_FILE_INFO

{

	char                   strSatelliteName[8];                          /* �������ƣ���FY-3C�ȣ�                          */

	char                   strSensorName[128];                           /* ��������  "InfraRed Atmospheric Sounder"       */

	char                   strSensorIdentificationCode[12];              /* ���������루��IRAS��                           */

	char                   strDatasetName[64];                           /* ���ݼ����ƣ���Global IRAS Data��               */

	char                   strFileName[256];                             /* �ļ�����                                       */

	char                   strFileAliasName[256];                        /* �ļ�����                                       */

	char                   strResponser[32];                             /* ��Ʒ���ɵأ�NSMC��                             */

	char                   strVersionOfSoftware[32];                     /* ��������汾��(��V1.0.0)                       */

	char                   strDateOfSoftwareRevision[32];                /* ���������������                               */

	char                   strVersionOfCoefficientIndex[32];             /* ����ϵ���汾��                                 */

	char                   strDateOfCoefficientIndexRevision[32];        /* ����ϵ����������                               */

	char                   strDateOfObservingBeginning[32];              /* ���ݹ۲⿪ʼ����(����������)                   */

	char                   strTimeOfObservingBeginning[32];              /* ���ݹ۲⿪ʼʱ�䣨����ʱ������룩             */

	char                   strDateOfObservingEnding[32];                 /* ���ݹ۲��������(����������)                   */

	char                   strTimeOfObservingEnding[32];                 /* ���ݹ۲����ʱ�䣨����ʱ������룩             */

	char                   strDateOfDataCreating[32];                    /* ���ݴ�������(����������)                       */

	char                   strTimeOfDataCreating[32];                    /* ���ݴ���ʱ�䣨����ʱ������룩                 */

	char                   strDayOrNightFlag[8];                         /* ����ҹ���־                                   */

	unsigned int           dwOrbitNumber;                                /* �����                                         */

	unsigned short int     wOrbitPeriod;                                 /* �������                                       */

	char                   strOrbitDirection[8];                         /* �������                                       */

	unsigned char          cDataQuality;                                 /* �����������(0-5��)                            */

	int                    iNumberOfScans;                               /* ��ɨ����                                       */

	int                    iNumberOfDaymodescans;                        /* ����ģʽɨ����                                 */

	int                    iNumberofNightmodescans;                      /* ����ģʽɨ����                                 */

	int                    iIncompleteScans;                             /* ��������ɨ����                                 */
 
	unsigned char          cQAScanFlag;                                  /* ɨ�������������롢��ɨ����                     */

	unsigned short int     wQAPixelFlag;                                 /* ��Ԫ���������롢��ɨ����                       */

	unsigned short int     wBeginLineNumber;                             /* ��ʼ�к�                                       */

	unsigned short int     wEndLineNumber;                               /* �����к�                                       */

	unsigned short int     wBeginPixelNumber;                            /* ��ʼ��Ԫ��                                     */

	unsigned short int     wEndPixelNumber;                              /* ������Ԫ��                                     */

	char                   strReferenceEllipsoidModelID;                 /* ��������ο�����ϵID��WGS84��                  */

	double                 dEarthSunDistanceRatio;                       /* �յؾ����                                     */

	char                   strMeanAnomaly[12];                           /* ƽ���ص�ǣ��ȣ�                               */

	char                   strMeanMotion[12];                            /* ƽ���˶�                                       */

	char                   strEccentricity[12];                          /* ƫ����                                         */

	char                   strPerigeeArgument[12];                       /* ���ص㸩�ǣ��ȣ�                               */

	char                   strAscendingNodeLongitude[12];                /* ������ྭ���ȣ�                               */

	char                   strOrbitalInclination[12];                    /* �����ǣ��ȣ�                                 */

	char                   strEpochTime[12];                             /* ��Ԫʱ��                                       */
	
	float                  fOrbitPointLatitude[4];                       /* ���4���ǵ�γ��                                */

	float                  fOrbitPointLongitude[4];                      /* ���4���ǵ㾭��                                */

	char                   strAdditionalAnotation[1024];                 /* �ļ��ĸ���˵��(���Զ��ļ���ʹ�á������˵�˵��) */


	float                  fCalCoefSlopeAve[20];                         /* ���ݸ���ʱ�ζ���ϵ��б��ƽ��ֵ                                                                */

	float                  fCalCoefSlopeStd[20];                         /* ���ݸ���ʱ�ζ���ϵ��б�ʱ�׼��                                                                */

	float                  fCalCoefInterAve[20];                         /* ���ݸ���ʱ�ζ���ϵ���ؾ�ƽ��ֵ                                                                */

	float                  fCalCoefInterStd[20];                         /* ���ݸ���ʱ�ζ���ϵ���ؾ��׼��                                                                */

	float                  fIraPrtNb;                                    /* PRT����                                                                                       */

	float                  fIraDisconNb;                                 /* �ܵ�������Ⱦ����ղ����                                                                      */

	float                  fIraPrtConvCoef[8];                           /* PRT�¶�ת��ϵ��                                                                               */

	float                  fIraMuduConvCoef[10];                         /* �������¶�ת��ϵ��                                                                            */

	float                  fIraWheelConvCoef[10];                        /* �˹����¶�ת��ϵ��                                                                            */

	float                  fIraMirrorConvCoef[2];                        /* ɨ�辵�¶�ת��ϵ��                                                                            */

	float                  fIraMainOpticConvCoef[2];                     /* ����ѧ�¶�ת��ϵ��                                                                            */

	float                  fIraRelayOpticConvCoef[2];                    /* �м̹�ѧ�¶�ת��ϵ��                                                                          */

	float                  fIraBoardConvCoef[2];                         /* ͷ�������¶�ת��ϵ��                                                                          */

	float                  fIraBoxConvCoef[2];                           /* ��Ϣ�������¶�ת��ϵ��                                                                        */

	float                  fIraColder2TempAve;                           /* ���ݸ���ʱ�ζ�������¶�ƽ��ֵ                                                                */

	float                  fIraColder2TempStd;                           /* ���ݸ���ʱ�ζ�������¶ȱ�׼��                                                                */

	float                  fIraWheelTempAve;                             /* ���ݸ���ʱ���˹����¶�ƽ��ֵ                                                                  */

	float                  fIraWheelTempStd;                             /* ���ݸ���ʱ���˹����¶ȱ�׼��                                                                  */

	float                  fIraModulatorTempAve;                         /* ���ݸ���ʱ�ε������¶�ƽ��ֵ                                                                  */

	float                  fIraModulatorTempStd;                         /* ���ݸ���ʱ�ε������¶ȱ�׼��                                                                  */

	float                  fIraBBTempAve;                                /* ���ݸ���ʱ�κ����¶�ƽ��ֵ                                                                    */

	float                  fIraBBTempStd;                                /* ���ݸ���ʱ�κ����¶ȱ�׼��                                                                    */

	float                  fIraMirrorTempAve;                            /* ���ݸ���ʱ��ɨ�辵�¶�ƽ��ֵ                                                                  */

	float                  fIraMainOpticalTempAve;                       /* ���ݸ���ʱ������ѧ�¶�ƽ��ֵ                                                                  */

	float                  fIraRelayOpticTempAve;                        /* ���ݸ���ʱ���м̹�ѧ�¶�ƽ��ֵ                                                                */

	float                  fIraBoardTempAve;                             /* ���ݸ���ʱ��ͷ�������¶�ƽ��ֵ                                                                */

	float                  fIraBoxTempAve;                               /* ���ݸ���ʱ����Ϣ�������¶�ƽ��ֵ                                                              */

};

/* FY3ɨ������L1������*/

struct FY3_VIRR_L1B_FILE_INFO

{

	char                   strSatelliteName[8];                          /* �������ƣ���FY-3C�ȣ�                          */

	char                   strSensorName[128];                           /* ��������  "Visible and InfraRed Radiometer"    */

	char                   strSensorIdentificationCode[12];              /* ���������루��VIRR��                           */

	char                   strDatasetName[64];                           /* ���ݼ����ƣ���Global VIRR Data��               */

	char                   strFileName[256];                             /* �ļ�����                                       */

	char                   strFileAliasName[256];                        /* �ļ�����                                       */

	char                   strResponser[32];                             /* ��Ʒ���ɵأ�NSMC��                             */

	char                   strVersionOfSoftware[32];                     /* ��������汾��(��V1.0.0)                       */

	char                   strDateOfSoftwareRevision[32];                /* ���������������                               */

	char                   strVersionOfCoefficientIndex[32];             /* ����ϵ���汾��                                 */

	char                   strDateOfCoefficientIndexRevision[32];        /* ����ϵ����������                               */

	char                   strDateOfObservingBeginning[32];              /* ���ݹ۲⿪ʼ����(����������)                   */

	char                   strTimeOfObservingBeginning[32];              /* ���ݹ۲⿪ʼʱ�䣨����ʱ������룩             */

	char                   strDateOfObservingEnding[32];                 /* ���ݹ۲��������(����������)                   */

	char                   strTimeOfObservingEnding[32];                 /* ���ݹ۲����ʱ�䣨����ʱ������룩             */

	char                   strDateOfDataCreating[32];                    /* ���ݴ�������(����������)                       */

	char                   strTimeOfDataCreating[32];                    /* ���ݴ���ʱ�䣨����ʱ������룩                 */

	char                   strDayOrNightFlag[8];                         /* ����ҹ���־                                   */

	unsigned int           dwOrbitNumber;                                /* �����                                         */

	unsigned short int     wOrbitPeriod;                                 /* �������                                       */

	char                   strOrbitDirection[8];                         /* �������                                       */

	unsigned char          cDataQuality;                                 /* �����������(0-5��)                            */

	int           		     iNumberOfScans;                               /* ��ɨ����                                       */

	int           		     iNumberOfDaymodescans;                        /* ����ģʽɨ����                                 */

	int                    iNumberofNightmodescans;                      /* ����ģʽɨ����                                 */

	int                    iIncompleteScans;                             /* ��������ɨ����                                 */

	unsigned char          cQAScanFlag;                                  /* ɨ�������������롢��ɨ����                     */

	unsigned short int     wQAPixelFlag;                                 /* ��Ԫ���������롢��ɨ����                       */

	unsigned short int     wBeginLineNumber;                             /* ��ʼ�к�                                       */

	unsigned short int     wEndLineNumber;                               /* �����к�                                       */

	unsigned short int     wBeginPixelNumber;                            /* ��ʼ��Ԫ��                                     */

	unsigned short int     wEndPixelNumber;                              /* ������Ԫ��                                     */

	char                   strReferenceEllipsoidModelID[12];             /* ��������ο�����ϵID��WGS84��                  */

	double                 dEarthSunDistanceRatio;                       /* �յؾ����                                     */

	char                   strMeanAnomaly[12];                           /* ƽ���ص�ǣ��ȣ�                               */

	char                   strMeanMotion[12];                            /* ƽ���˶�                                       */

	char                   strEccentricity[12];                          /* ƫ����                                         */

	char                   strPerigeeArgument[12];                       /* ���ص㸩�ǣ��ȣ�                               */

	char                   strAscendingNodeLongitude[12];                /* ������ྭ���ȣ�                               */

	char                   strOrbitalInclination[12];                    /* �����ǣ��ȣ�                                 */

	char                   strEpochTime[12];                             /* ��Ԫʱ��                                       */
	                                 
	float                  fOrbitPointLatitude[4];                       /* ���4���ǵ�γ��                                */

	float                  fOrbitPointLongitude[4];                      /* ���4���ǵ㾭��                                */

	char                   strAdditionalAnotation[1024];                 /* �ļ��ĸ���˵��(���Զ��ļ���ʹ�á������˵�˵��) */


	char                   strProductFormatVer[16];                      /* ��Ʒ��ʽ�汾��                                 */

	unsigned short int	   wGoodScanNum;								                 /* ��ɨ������																		 */
	
	unsigned short int     wFirstGoodScan;                               /* ��һ����ɨ�������                             */

	unsigned short int     wCalflagScanNum;                              /* �ɶ���ɨ������                                 */
	
	unsigned short int     wPeriodNum;                                   /* ����������                                     */
	
	unsigned short int     wTimeErrorScans;                              /* ʱ���������                                   */

	unsigned short int     wFrameCountErrorScans;                        /* ֡������������                                 */

	unsigned short int     wFrameSyncErrorScans;                         /* ֡ͬ����������                                 */

	unsigned short int     wLostScans;                                   /* ������                                         */

	unsigned short int     wCalibratedScans;                             /* ��ɶ���ɨ������                               */

	unsigned short int     wGeolocatedScans;                             /* ��ɶ�λɨ������                              */

	unsigned char          strRampCalIndicators;                         /* б��У׼ָʾ��                                       */

	float                  fRefSBCalCoefficients[14];                    /* ����ͨ������ϵ��                              */

	float                  fRefSBSolarIrradiance[7];                     /* ����ͨ��̫�����ն�                            */

	float                  fRefSBEquivalentWidth[7];                     /* ����ͨ����Ч���                              */

	float                  fRefSBEffectiveWavelength[7];                 /* ����ͨ����Ч����                              */

	float                  fEmmisiveCentroidWaveNumber[3];               /* ����ͨ�����Ĳ���                              */

	float                  fEmmisiveBTCoefficients[6];                   /* ����ͨ�����¶���ϵ��                          */

	float                  fPrelaunchNonlinearCoefficients[12];          /* ����ǰ�����Զ���ϵ��                          */

	float                  fEmissiveCoefficientsAve[6];                  /* ����ͨ������ϵ��ƽ��ֵ                        */

	float                  fEmissiveCoefficientsStd[6];                  /* ����ͨ������ϵ����׼��                        */

	float                  fRampCalibrationCoefficients[20];             /* б��У׼����ϵ��                              */ 
};

/* FY3ɨ������L1������OBC�ļ�*/

struct FY3_VIRROBC_L1B_FILE_INFO

{

	char                   strSatelliteName[8];                          /* �������ƣ���FY-3C�ȣ�                          */

	char                   strSensorName[128];                           /* ��������  "Visible and InfraRed Radiometer"    */

	char                   strSensorIdentificationCode[12];              /* ���������루��VIRR��                           */

	char                   strDatasetName[64];                           /* ���ݼ����ƣ���Global VIRR Data��               */

	char                   strFileName[256];                             /* �ļ�����                                       */

	char                   strFileAliasName[256];                        /* �ļ�����                                       */

	char                   strResponser[32];                             /* ��Ʒ���ɵأ�NSMC��                             */

	char                   strVersionOfSoftware[32];                     /* ��������汾��(��V1.0.0)                       */

	char                   strDateOfSoftwareRevision[32];                /* ���������������                               */

	char                   strVersionOfCoefficientIndex[32];             /* ����ϵ���汾��                                 */

	char                   strDateOfCoefficientIndexRevision[32];        /* ����ϵ����������                               */

	char                   strDateOfObservingBeginning[32];              /* ���ݹ۲⿪ʼ����(����������)                   */

	char                   strTimeOfObservingBeginning[32];              /* ���ݹ۲⿪ʼʱ�䣨����ʱ������룩             */

	char                   strDateOfObservingEnding[32];                 /* ���ݹ۲��������(����������)                   */

	char                   strTimeOfObservingEnding[32];                 /* ���ݹ۲����ʱ�䣨����ʱ������룩             */

	char                   strDateOfDataCreating[32];                    /* ���ݴ�������(����������)                       */

	char                   strTimeOfDataCreating[32];                    /* ���ݴ���ʱ�䣨����ʱ������룩                 */

	char                   strDayOrNightFlag[8];                         /* ����ҹ���־                                   */

	unsigned int           dwOrbitNumber;                                /* �����                                         */

	unsigned short int     wOrbitPeriod;                                 /* �������                                       */

	char                   strOrbitDirection[8];                         /* �������                                       */

	unsigned char          cDataQuality;                                 /* �����������(0-5��)                            */

	int                    iNumberOfScans;                               /* ��ɨ����                                       */

	int                    iNumberOfDaymodescans;                        /* ����ģʽɨ����                                 */

	int                    iNumberofNightmodescans;                      /* ����ģʽɨ����                                 */

	int                    iIncompleteScans;                             /* ��������ɨ����                                 */

	unsigned char          cQAScanFlag;                                  /* ɨ�������������롢��ɨ����                     */

	unsigned short int     wQAPixelFlag;                                 /* ��Ԫ���������롢��ɨ����                       */
 
	unsigned short int     wBeginLineNumber;                             /* ��ʼ�к�                                       */

	unsigned short int     wEndLineNumber;                               /* �����к�                                       */

	unsigned short int     wBeginPixelNumber;                            /* ��ʼ��Ԫ��                                     */

	unsigned short int     wEndPixelNumber;                              /* ������Ԫ��                                     */

	char                   strReferenceEllipsoidModelID[12];             /* ��������ο�����ϵID��WGS84��                  */

	double                 dEarthSunDistanceRatio;                       /* �յؾ����                                     */
	
	char                   strMeanAnomaly[12];                           /* ƽ���ص�ǣ��ȣ�                               */

	char                   strMeanMotion[12];                            /* ƽ���˶�                                       */

	char                   strEccentricity[12];                          /* ƫ����                                         */

	char                   strPerigeeArgument[12];                       /* ���ص㸩�ǣ��ȣ�                               */

	char                   strAscendingNodeLongitude[12];                /* ������ྭ���ȣ�                               */

	char                   strOrbitalInclination[12];                    /* �����ǣ��ȣ�                                 */

	char                   strEpochTime[12];                             /* ��Ԫʱ��                                       */
                            
	float                  fOrbitPointLatitude[4];                       /* ���4���ǵ�γ��                                */

	float                  fOrbitPointLongitude[4];                      /* ���4���ǵ㾭��                                */

	char                   strAdditionalAnotation[1024];                 /* �ļ��ĸ���˵��(���Զ��ļ���ʹ�á������˵�˵��) */


	char                   strProductFormatVer[16];                      /* ��Ʒ��ʽ�汾��                                 */

	unsigned short int	   wGoodScanNum; 								 /* ��ɨ������																		 */
	
	unsigned short int     wFirstGoodScan;                               /* ��һ����ɨ�������                             */

	unsigned short int     wCalflagScanNum;                              /* �ɶ���ɨ������                                 */
	
	unsigned short int     wPeriodNum;                                   /* ����������                                     */
	
	unsigned short int     wTimeErrorScans;                              /* ʱ���������                                   */

	unsigned short int     wFrameCountErrorScans;                        /* ֡������������                                 */

	unsigned short int     wFrameSyncErrorScans;                         /* ֡ͬ����������                                 */

	unsigned short int     wLostScans;                                   /* ������                                         */

	unsigned short int     wCalibratedScans;                             /* ��ɶ���ɨ������                               */

	unsigned short int     wGeolocatedScans;                             /* ��ɶ�λɨ������                              */

	unsigned char          strRampCalIndicators;                         /* б��У׼ָʾ��                                       */

	float                  fRefSBCalCoefficients[14];                    /* ����ͨ������ϵ��                              */

	float                  fRefSBSolarIrradiance[7];                     /* ����ͨ��̫�����ն�                            */

	float                  fRefSBEquivalentWidth[7];                     /* ����ͨ����Ч���                              */

	float                  fRefSBEffectiveWavelength[7];                 /* ����ͨ����Ч����                              */

	float                  fEmmisiveCentroidWaveNumber[3];               /* ����ͨ�����Ĳ���                              */

	float                  fEmmisiveBTCoefficients[6];                   /* ����ͨ�����¶���ϵ��                          */

	float                  fPrelaunchNonlinearCoefficients[12];          /* ����ǰ�����Զ���ϵ��                          */

	float                  fEmissiveCoefficientsAve[6];                  /* ����ͨ������ϵ��ƽ��ֵ                        */

	float                  fEmissiveCoefficientsStd[6];                  /* ����ͨ������ϵ����׼��                        */

	float                  fRampCalibrationCoefficients[20];             /* б��У׼����ϵ��                              */ 

	float                  fPRTCountStat[8];                             /* PRT����ֵͳ��                                 */

	float                  fBlackbodyViewStat[40];                       /* ����۲�ֵͳ��                                */

	float                  fSpaceViewStat[40];                           /* ��չ۲�ֵͳ��                                */

	float                  fRadiatorTemperatureStat[8];                  /* �������¶�ͳ��                                */

	float                  fRadiatorVoltage_Stat[4];                     /* �������¿ص�ѹͳ��                            */

	float                  fPRTTemperatureCoefficients[12];              /* PRT�¶�ת��ϵ��                               */

	float                  fBlackbodyTemperatureCoefficients[36];        /* �����¶�ת��ϵ��                              */

	float                  fPRTWeightingFactors[2];                      /* PRTȨ��ϵ��                                   */

	float                  fRadiatorTemperatureCoefficients[22];         /* �������¶�ת��ϵ��                            */

	float                  fRadiatorVoltageCoefficients;                 /* ��������ѹת��ϵ��                            */

	float                  fSpaceRadiance[3];                            /* ����ͨ����շ�����                            */

};

/* FY3ɨ������L1������GEO�ļ�*/

struct FY3_VIRRGEO_L1B_FILE_INFO

{

	char                   strSatelliteName[8];                          /* �������ƣ���FY-3C�ȣ�                          */

	char                   strSensorName[128];                           /* ��������  "Visible and InfraRed Radiometer"    */

	char                   strSensorIdentificationCode[12];              /* ���������루��VIRR��                           */

	char                   strDatasetName[64];                           /* ���ݼ����ƣ���Global VIRR Data��               */

	char                   strFileName[256];                             /* �ļ�����                                       */

	char                   strFileAliasName[256];                        /* �ļ�����                                       */

	char                   strResponser[32];                             /* ��Ʒ���ɵأ�NSMC��                             */

	char                   strVersionOfSoftware[32];                     /* ��������汾��(��V1.0.0)                       */

	char                   strDateOfSoftwareRevision[32];                /* ���������������                               */

	char                   strVersionOfCoefficientIndex[32];             /* ����ϵ���汾��                                 */

	char                   strDateOfCoefficientIndexRevision[32];        /* ����ϵ����������                               */

	char                   strDateOfObservingBeginning[32];              /* ���ݹ۲⿪ʼ����(����������)                   */

	char                   strTimeOfObservingBeginning[32];              /* ���ݹ۲⿪ʼʱ�䣨����ʱ������룩             */

	char                   strDateOfObservingEnding[32];                 /* ���ݹ۲��������(����������)                   */

	char                   strTimeOfObservingEnding[32];                 /* ���ݹ۲����ʱ�䣨����ʱ������룩             */

	char                   strDateOfDataCreating[32];                    /* ���ݴ�������(����������)                       */

	char                   strTimeOfDataCreating[32];                    /* ���ݴ���ʱ�䣨����ʱ������룩                 */

	char                   strDayOrNightFlag[8];                         /* ����ҹ���־                                   */

	unsigned int           dwOrbitNumber;                                /* �����                                         */

	unsigned short int     wOrbitPeriod;                                 /* �������                                       */

	char                   strOrbitDirection[8];                         /* �������                                       */

	unsigned char          cDataQuality;                                 /* �����������(0-5��)                            */

	int           		   iNumberOfScans;                               /* ��ɨ����                                       */

	int           		   iNumberOfDaymodescans;                        /* ����ģʽɨ����                                 */

	int                    iNumberofNightmodescans;                      /* ����ģʽɨ����                                 */

	int                    iIncompleteScans;                             /* ��������ɨ����                                 */

	unsigned char          cQAScanFlag;                                  /* ɨ�������������롢��ɨ����                     */

	unsigned short int     wQAPixelFlag;                                 /* ��Ԫ���������롢��ɨ����                       */

	unsigned short int     wBeginLineNumber;                             /* ��ʼ�к�                                       */

	unsigned short int     wEndLineNumber;                               /* �����к�                                       */

	unsigned short int     wBeginPixelNumber;                            /* ��ʼ��Ԫ��                                     */

	unsigned short int     wEndPixelNumber;                              /* ������Ԫ��                                     */

	char                   strReferenceEllipsoidModelID[12];             /* ��������ο�����ϵID��WGS84��                  */

	double                 dEarthSunDistanceRatio;                       /* �յؾ����                                     */

	char                   strMeanAnomaly[12];                           /* ƽ���ص�ǣ��ȣ�                               */

	char                   strMeanMotion[12];                            /* ƽ���˶�                                       */

	char                   strEccentricity[12];                          /* ƫ����                                         */

	char                   strPerigeeArgument[12];                       /* ���ص㸩�ǣ��ȣ�                               */

	char                   strAscendingNodeLongitude[12];                /* ������ྭ���ȣ�                               */

	char                   strOrbitalInclination[12];                    /* �����ǣ��ȣ�                                 */

	char                   strEpochTime[12];                             /* ��Ԫʱ��                                       */
	                                 
	float                  fOrbitPointLatitude[4];                       /* ���4���ǵ�γ��                                */

	float                  fOrbitPointLongitude[4];                      /* ���4���ǵ㾭��                                */

	char                   strAdditionalAnotation[1024];                 /* �ļ��ĸ���˵��(���Զ��ļ���ʹ�á������˵�˵��) */


	char                   strProductFormatVer[16];                      /* ��Ʒ��ʽ�汾��                                 */

	unsigned short int	   wGoodScanNum;								                 /* ��ɨ������																		 */
	
	unsigned short int     wFirstGoodScan;                               /* ��һ����ɨ�������                             */

	unsigned short int     wTimeErrorScans;                              /* ʱ���������                                   */

	unsigned short int     wFrameCountErrorScans;                        /* ֡������������                                 */

	unsigned short int     wFrameSyncErrorScans;                         /* ֡ͬ����������                                 */

	unsigned short int     wLostScans;                                   /* ������                                         */

	unsigned short int     wGeolocatedScans;                             /* ��ɶ�λɨ������                              */

};

/* FY3̫����������L1������ */

struct FY3_SIM_L1B_FILE_INFO

{

	char                   strSatelliteName[8];                          /* �������ƣ���FY-3C�ȣ�                          */

	char                   strSensorName[128];                           /* ��������  "Solar Irradiance Monitor"           */

	char                   strSensorIdentificationCode[12];              /* ���������루��SIM��                            */

	char                   strDatasetName[64];                           /* ���ݼ����ƣ���Global SIM Data��                */

	char                   strFileName[256];                             /* �ļ�����                                       */

	char                   strFileAliasName[256];                        /* �ļ�������SIM_L1��                             */

	char                   strResponser[32];                             /* ��Ʒ���ɵأ�NSMC��                             */

	char                   strVersionOfSoftware[32];                     /* ��������汾��(��V1.0.0)                       */

	char                   strDateOfSoftwareRevision[32];                /* ��������������ڣ�YYYY-MM-DD��                 */

	char                   strVersionOfCoefficientIndex[32];             /* ����ϵ���汾��                                 */

	char                   strDateOfCoefficientIndexRevision[32];        /* ����ϵ����������                               */

	char                   strDateOfObservingBeginning[32];              /* ���ݹ۲⿪ʼ����(����������)                   */

	char                   strTimeOfObservingBeginning[32];              /* ���ݹ۲⿪ʼʱ�䣨����ʱ������룩             */

	char                   strDateOfObservingEnding[32];                 /* ���ݹ۲��������(����������)                   */

	char                   strTimeOfObservingEnding[32];                 /* ���ݹ۲����ʱ�䣨����ʱ������룩             */

	char                   strDateOfDataCreating[32];                    /* ���ݴ�������(����������)                       */

	char                   strTimeOfDataCreating[32];                    /* ���ݴ���ʱ�䣨����ʱ������룩                 */

	char                   strDayOrNightFlag[8];                         /* ����ҹ���־                                   */

	unsigned int           dwOrbitNumber;                                /* �����                                         */

	unsigned short int     wOrbitPeriod;                                 /* �������                                       */

	char                   strOrbitDirection[8];                         /* �������                                       */

	unsigned char          cDataQuality;                                 /* �����������(0-5��)                            */

	int                    iNumberOfScans;                               /* ��ɨ����                                       */

	int                    iNumberOfDaymodescans;                        /* ����ģʽɨ����                                 */

	int                    iNumberofNightmodescans;                      /* ����ģʽɨ����                                 */

	int                    iIncompleteScans;                             /* ��������ɨ����                                 */

	unsigned char          cQAScanFlag;                                  /* ɨ�������������롢��ɨ����                     */

	unsigned short int     wQAPixelFlag;                                 /* ��Ԫ���������롢��ɨ����                       */

	unsigned short int     wBeginLineNumber;                             /* ��ʼ�к�                                       */

	unsigned short int     wEndLineNumber;                               /* �����к�                                       */

	unsigned short int     wBeginPixelNumber;                            /* ��ʼ��Ԫ��                                     */

	unsigned short int     wEndPixelNumber;                              /* ������Ԫ��                                     */

	char                   strReferenceEllipsoidModelID[12];             /* ��������ο�����ϵID��WGS84��                  */

	double                 dEarthSunDistanceRatio;                       /* �յؾ����                                     */

	char                   strMeanAnomaly[12];                           /* ƽ�����                                       */

	char                   strMeanMotion[12];                            /* �������                                       */

	char                   strEccentricity[12];                          /* ƫ����                                         */

	char                   strPerigeeArgument[12];                       /* ���ص㸩��                                     */

	char                   strAscendingNodeLongitude[12];                /* ������ྭ                                     */

	char                   strOrbitalInclination[12];                    /* ������                                       */

	char                   strEpochTime[12];                             /* ��Ԫʱ��                                       */                             

	float                  fOrbitPointLatitude[4];                       /* ���4���ǵ�γ��                                */

	float                  fOrbitPointLongitude[4];                      /* ���4���ǵ㾭��                                */

	char                   strAdditionalAnotation[1024];                 /* �ļ��ĸ���˵��(���Զ��ļ���ʹ�á������˵�˵��) */

	                                                                     
	float                  fStandardVolt[2];                             /* ��׼��ѹ                                       */
	
	float                  fResistance[2];                               /* ����                                           */
	
	float                  fAperture[2];                                 /* �������                                       */
	
	unsigned short int     iReferenceTemperature;                        /* �ο��¶�                                       */ 
	
	float                  fBlackbodyAbsorption[2];                      /* ����������                                     */
	
	float                  fWRR[2];                                      /* WRR����ϵ��                                    */
	
	float                  fTrackSettingAngle[4];                        /* ���ٰ�װ��                                     */ 

	char                   strSpaceIRradianceMeanTime[32];               /* ̫�ձ��������ֵʱ��                           */

	float		           fSpaceIRradianceMean[2];                      /* ̫�ձ��������ֵ                               */ 

	float                  fRelativeCalibrationCoefficient;              /* ��Զ���ϵ��                                   */

	char                   strRelativeCalibrationTime[32];               /* ��Զ���ʱ��                                   */

	float                  fBalanceStatistic[8000];                      /* ƽ��״̬ͳ����                                 */

	float                  fResponsibility[2000];                        /* ��Ӧ��                                         */

	float                  fSensitivity[2000];                           /* ������                                         */

	unsigned int           iShadhowTime[2000];                           /* ������Ӱʱ��                                   */
	
};                                                                               

/* FY3΢��������L1������ */

struct FY3_MWRI_L1B_FILE_INFO

{

	char                   strSatelliteName[8];                          /* �������ƣ���FY-3C�ȣ�                          */

	char                   strSensorName[128];                           /* ��������  "MicroWave Radiation Imager"         */

	char                   strSensorIdentificationCode[12];              /* ���������루��MWRI��                           */

	char                   strDatasetName[64];                           /* ���ݼ����ƣ���Global MWRI L1_SDR Data��        */

	char                   strFileName[256];                             /* �ļ�����                                       */

	char                   strFileAliasName[256];                        /* �ļ�����                                       */

	char                   strResponser[32];                             /* ��Ʒ���ɵأ�NSMC��                             */

	char                   strVersionOfSoftware[32];                     /* ��������汾��(��V1.0.0)                       */

	char                   strDateOfSoftwareRevision[32];                /* ���������������                               */

	char                   strVersionOfCoefficientIndex[32];             /* ����ϵ���汾��                                 */

	char                   strDateOfCoefficientIndexRevision[32];        /* ����ϵ����������                               */

	char                   strDateOfObservingBeginning[32];              /* ���ݹ۲⿪ʼ����(����������)                   */

	char                   strTimeOfObservingBeginning[32];              /* ���ݹ۲⿪ʼʱ�䣨����ʱ������룩             */

	char                   strDateOfObservingEnding[32];                 /* ���ݹ۲��������(����������)                   */

	char                   strTimeOfObservingEnding[32];                 /* ���ݹ۲����ʱ�䣨����ʱ������룩             */

	char                   strDateOfDataCreating[32];                    /* ���ݴ�������(����������)                       */

	char                   strTimeOfDataCreating[32];                    /* ���ݴ���ʱ�䣨����ʱ������룩                 */

	char                   strDayOrNightFlag[8];                         /* ����ҹ���־                                   */

	unsigned int           dwOrbitNumber;                                /* �����                                         */

	unsigned short int     wOrbitPeriod;                                 /* �������                                       */

	char                   strOrbitDirection[8];                         /* �������                                       */

	unsigned char          cDataQuality;                                 /* �����������(0-5��)                            */

	int                    iNumberOfScans;                               /* ��ɨ������                                     */

	int                    iNumberOfDaymodescans;                        /* ����ģʽɨ������                               */

	int                    iNumberofNightmodescans;                      /* ����ģʽɨ������                               */

	int                    iIncompleteScans;                             /* ��������ɨ������                               */

	unsigned char          cQAScanFlag;                                  /* ɨ�������������롢��ɨ����                     */

	unsigned short int     wQAPixelFlag;                                 /* ��Ԫ���������롢��ɨ����                       */

	unsigned short int     wBeginLineNumber;                             /* ��ʼ�к�                                       */

	unsigned short int     wEndLineNumber;                               /* �����к�                                       */

	unsigned short int     wBeginPixelNumber;                            /* ��ʼ��Ԫ��                                     */

	unsigned short int     wEndPixelNumber;                              /* ������Ԫ��                                     */

	char                   strReferenceEllipsoidModelID[12];             /* ��������ο�����ϵID��WGS84��                  */

	double                 dEarthSunDistanceRatio;                       /* �յؾ����                                     */

	char                   strMeanAnomaly[12];                           /* ƽ�����                                       */

	char                   strMeanMotion[12];                            /* ƽ���˶�                                       */

	char                   strEccentricity[12];                          /* ƫ����                                         */

	char                   strPerigeeArgument[12];                       /* ���ص㸩��                                     */

	char                   strAscendingNodeLongitude[12];                /* ������ྭ                                     */

	char                   strOrbitalInclination[12];                    /* ������                                       */

	char                   strEpochTime[12];                             /* ��Ԫʱ��                                       */

	float                  fOrbitPointLatitude[4];                       /* ���4���ǵ�γ��                                */

	float                  fOrbitPointLongitude[4];                      /* ���4���ǵ㾭��                                */

	char                   strAdditionalAnotation[1024];                 /* �ļ��ĸ���˵��(���Զ��ļ���ʹ�á������˵�˵��) */

	                                                                     
	unsigned short int     iCountScnlines;                               /* ��ɨ������                                     */
	
	unsigned short int     iCountScnlinesCalibrated;                     /* �������Ԥ�����ɨ������                       */

	unsigned short int     iCountTimeSeqErr;                             /* ʱ�����ɨ������                               */
	
	unsigned short int     iCountMissingScnlines;                        /* ��ʧɨ������                                   */
	
	unsigned short int     iCountCaliErrScnlines;                        /* ����ʧ��ɨ������                               */
	
	unsigned short int     iCountGeolErrScnlines;                        /* ��λʧ��ɨ������                               */
	
	float                  fChsCentralWavenumber[5];                     /* ͨ������Ƶ��                                   */
	
	unsigned short int     iCountScnlinesSPViewLunarContaminated;        /* ��չ۲������ܵ���Ⱦ��ɨ������                 */

};

/* FY3΢��������L1_OBC������ */

struct FY3_MWRIOBC_L1B_FILE_INFO

{

	char                   strSatelliteName[8];                          /* �������ƣ���FY-3C�ȣ�                          */

	char                   strSensorName[128];                           /* ��������  "MicroWave Radiation Imager"         */

	char                   strSensorIdentificationCode[12];              /* ���������루��MWRI��                           */

	char                   strDatasetName[64];                           /* ���ݼ����ƣ���Global MWRI L1_SDR Data��        */

	char                   strFileName[256];                             /* �ļ�����                                       */

	char                   strFileAliasName[256];                        /* �ļ�����                                       */

	char                   strResponser[32];                             /* ��Ʒ���ɵأ�NSMC��                             */

	char                   strVersionOfSoftware[32];                     /* ��������汾��(��V1.0.0)                       */

	char                   strDateOfSoftwareRevision[32];                /* ���������������                               */

	char                   strVersionOfCoefficientIndex[32];             /* ����ϵ���汾��                                 */

	char                   strDateOfCoefficientIndexRevision[32];        /* ����ϵ����������                               */

	char                   strDateOfObservingBeginning[32];              /* ���ݹ۲⿪ʼ����(����������)                   */

	char                   strTimeOfObservingBeginning[32];              /* ���ݹ۲⿪ʼʱ�䣨����ʱ������룩             */

	char                   strDateOfObservingEnding[32];                 /* ���ݹ۲��������(����������)                   */

	char                   strTimeOfObservingEnding[32];                 /* ���ݹ۲����ʱ�䣨����ʱ������룩             */

	char                   strDateOfDataCreating[32];                    /* ���ݴ�������(����������)                       */

	char                   strTimeOfDataCreating[32];                    /* ���ݴ���ʱ�䣨����ʱ������룩                 */

	char                   strDayOrNightFlag[8];                         /* ����ҹ���־                                   */

	unsigned int           dwOrbitNumber;                                /* �����                                         */

	unsigned short int     wOrbitPeriod;                                 /* �������                                       */

	char                   strOrbitDirection[8];                         /* �������                                       */

	unsigned char          cDataQuality;                                 /* �����������(0-5��)                            */

	int                    iNumberOfScans;                               /* ��ɨ������                                     */

	int                    iNumberOfDaymodescans;                        /* ����ģʽɨ������                               */

	int                    iNumberofNightmodescans;                      /* ����ģʽɨ������                               */

	int                    iIncompleteScans;                             /* ��������ɨ������                               */

	unsigned char          cQAScanFlag;                                  /* ɨ�������������롢��ɨ����                     */

	unsigned short int     wQAPixelFlag;                                 /* ��Ԫ���������롢��ɨ����                       */

	unsigned short int     wBeginLineNumber;                             /* ��ʼ�к�                                       */

	unsigned short int     wEndLineNumber;                               /* �����к�                                       */

	unsigned short int     wBeginPixelNumber;                            /* ��ʼ��Ԫ��                                     */

	unsigned short int     wEndPixelNumber;                              /* ������Ԫ��                                     */

	char                   strReferenceEllipsoidModelID[12];             /* ��������ο�����ϵID��WGS84��                  */

	double                 dEarthSunDistanceRatio;                       /* �յؾ����                                     */

	char                   strMeanAnomaly[12];                           /* ƽ�����                                       */

	char                   strMeanMotion[12];                            /* ƽ���˶�                                       */

	char                   strEccentricity[12];                          /* ƫ����                                         */

	char                   strPerigeeArgument[12];                       /* ���ص㸩��                                     */

	char                   strAscendingNodeLongitude[12];                /* ������ྭ                                     */

	char                   strOrbitalInclination[12];                    /* ������                                       */

	char                   strEpochTime[12];                             /* ��Ԫʱ��                                       */

	float                  fOrbitPointLatitude[4];                       /* ���4���ǵ�γ��                                */

	float                  fOrbitPointLongitude[4];                      /* ���4���ǵ㾭��                                */

	char                   strAdditionalAnotation[1024];                 /* �ļ��ĸ���˵��(���Զ��ļ���ʹ�á������˵�˵��) */


	unsigned short int     iScanMode;                                    /* ɨ��ģʽ                                       */
	
	float                  fCoefficientAvv[128];                         /* ���߽��漫������ϵ��Avv                        */
	
	float                  fCoefficientAhv[128];                         /* ���߽��漫������ϵ��Ahv                        */
	
	float                  fCoefficientAvh[128];                         /* ���߽��漫������ϵ��Avh                        */
	
	float                  fCoefficientAhh[128];                         /* ���߽��漫������ϵ��Ahh                        */
	
	float                  fCoefficientAoh[128];                         /* ���߽��漫������ϵ��Aoh                        */
	
	float                  fCoefficientAov[128];                         /* ���߽��漫������ϵ��Aov                        */
	
	float                  fNonlinearCalibrationCoefficient[10];         /* �����Զ���ϵ��                                 */
	
	char                   strCalibrationmethod[1024];                   /* ���귽��                                       */
	
	char                   strHTSCorrectionCoefficient[128];             /* ůƫ���ϵ��                                 */
	
	float                  fSpilloverCorrectionCoefficient[64];          /* ��������������ϵ��                           */
	
	char                   strHTSCorrectionVersion[32];                  /* ůƫ���ϵ���汾��                           */
	
	char                   strSpilloverCorrectionVersion[32];            /* �����������ϵ���汾��                         */
	
	float                  fColdSkyTemperature10To89GHz[10];             /* 10-89GHz��շ�������                           */
	
	float                  fMWRIfrequency[5];                            /* ΢��������Ƶ��                                 */
	
	float                  fMWRIbandwidth[4];                            /* ΢�������Ǵ���                                 */
	
	float                  fMWRIbeamwidth[10];                           /* ΢�������ǲ������                             */
	
	float                  fOff_nadir_angle[5];                          /* 10��89GHz����ƫ�ý�                            */
	
	float                  fGroundCalibrationParameters[512];            /* ���涨�������������                           */
	
	short                  iNumberOfBToutofrange;                        /* ��������������ֵ��Χ����Ԫ��ͳ����             */
	
	float                  fCoefficientIncreaseAvg[15];                  /* ���ݸ���ʱ�ζ���ϵ������ƽ��ֵ                 */
	
	float                  fCoefficientIncreaseStdev[15];                /* ���ݸ���ʱ�ζ���ϵ�������׼��                 */
	
	float                  fCoefficientInterceptAvg[15];                 /* ���ݸ���ʱ�ζ���ϵ���ؾ�ƽ��ֵ                 */

	float                  fCoefficientInterceptStdev[15];               /* ���ݸ���ʱ�ζ���ϵ���ؾ��׼��                 */
	
	float                  fInstTempAvg[2];                              /* ���ݸ���ʱ�������¶�ƽ��ֵ                     */
	
	float                  fInstTempStdev[2];                            /* ���ݸ���ʱ�������¶ȱ�׼��                     */


};

/* FY3΢��ʪ�ȼ�L1���� */

struct FY3_MWHS_L1B_FILE_INFO

{

	char                   strSatelliteName[8];                          /* �������ƣ���FY-3C�ȣ�                          */

	char                   strSensorName[128];                           /* ��������  "Microwave Humidity Sounder"         */

	char                   strSensorIdentificationCode[12];              /* ���������루��MWHS��                           */

	char                   strDatasetName[64];                           /* ���ݼ����ƣ���Global MWHS Data��               */

	char                   strFileName[256];                             /* �ļ�����                                       */

	char                   strFileAliasName[256];                        /* �ļ�����                                       */

	char                   strResponser[32];                             /* ��Ʒ���ɵأ�NSMC��                             */

	char                   strVersionOfSoftware[32];                     /* ��������汾��(��V1.0.0)                       */

	char                   strDateOfSoftwareRevision[32];                /* ���������������                               */

	char                   strVersionOfCoefficientIndex[32];             /* ����ϵ���汾��                                 */

	char                   strDateOfCoefficientIndexRevision[32];        /* ����ϵ����������                               */

	char                   strDateOfObservingBeginning[32];              /* ���ݹ۲⿪ʼ����(����������)                   */

	char                   strTimeOfObservingBeginning[32];              /* ���ݹ۲⿪ʼʱ�䣨����ʱ������룩             */

	char                   strDateOfObservingEnding[32];                 /* ���ݹ۲��������(����������)                   */

	char                   strTimeOfObservingEnding[32];                 /* ���ݹ۲����ʱ�䣨����ʱ������룩             */

	char                   strDateOfDataCreating[32];                    /* ���ݴ�������(����������)                       */

	char                   strTimeOfDataCreating[32];                    /* ���ݴ���ʱ�䣨����ʱ������룩                 */

	char                   strDayOrNightFlag[8];                         /* ����ҹ���־                                   */

	unsigned int           dwOrbitNumber;                                /* �����                                         */

	unsigned short int     wOrbitPeriod;                                 /* �������                                       */

	char                   strOrbitDirection[8];                         /* �������                                       */

	unsigned char          cDataQuality;                                 /* �����������(0-5��)                            */

	int                    iNumberOfScans;                               /* ��ɨ������                                     */

	int                    iNumberOfDaymodescans;                        /* ����ģʽɨ������                               */

	int                    iNumberofNightmodescans;                      /* ����ģʽɨ������                               */

	int                    iIncompleteScans;                             /* ��������ɨ������                               */

	unsigned char          cQAScanFlag;                                  /* ɨ�������������롢��ɨ����                     */

	unsigned short int     wQAPixelFlag;                                 /* ��Ԫ���������롢��ɨ����                       */

	unsigned short int     wBeginLineNumber;                             /* ��ʼ�к�                                       */

	unsigned short int     wEndLineNumber;                               /* �����к�                                       */

	unsigned short int     wBeginPixelNumber;                            /* ��ʼ��Ԫ��                                     */

	unsigned short int     wEndPixelNumber;                              /* ������Ԫ��                                     */

	char                   strReferenceEllipsoidModelID;                 /* ��������ο�����ϵID��WGS84��                  */

	double                 dEarthSunDistanceRatio;                       /* �յؾ����                                     */

	char                   strMeanAnomaly[12];                           /* ƽ���ص�ǣ��ȣ�                               */

	char                   strMeanMotion[12];                            /* ƽ���˶�                                       */

	char                   strEccentricity[12];                          /* ƫ����                                         */

	char                   strPerigeeArgument[12];                           /* ���ص㸩�ǣ��ȣ�                               */

	char                   strAscendingNodeLongitude[12];                /* ������ྭ���ȣ�                               */

	char                   strOrbitalInclination[12];                    /* �����ǣ��ȣ�                                 */

	char                   strEpochTime[12];                             /* ��Ԫʱ��                                       */
 
	float                  fOrbitPointLatitude[4];                       /* ���4���ǵ�γ��                                */

	float                  fOrbitPointLongitude[4];                      /* ���4���ǵ㾭��                                */

	char                   strAdditionalAnotation[1024];                 /* �ļ��ĸ���˵��(���Զ��ļ���ʹ�á������˵�˵��) */

	
	int                    iCountScnlines;                               /* ��֡��                                         */
	
	int                    iCountScnlinesCalibrated;                     /* �������Ԥ�����ɨ������                       */

	int                    iCountTimeSeqErr;                             /* ʱ�����֡��                                   */
	
	int                    iCountMissingScnlines;                        /* ��֡��                                         */
	
	int                    iCountCaliErrScnlines;                        /* ����ʧ��֡��                                   */
	
	int                    iCountGeolErrScnlines;                        /* ��λʧ��֡��                                   */
	
	float                  fChsCentralWavenumber[15];                    /* ͨ������Ƶ��                                   */
	
	short int              iCountScnlinesSPViewLunarContaminated;        /* ��չ۲������ܵ���Ⱦ��ɨ������                 */

};                                                                                                                                                                                 

/* FY3΢��ʪ�ȼ�L1_OBC���� */

struct FY3_MWHSOBC_L1B_FILE_INFO

{

	char                   strSatelliteName[8];                          /* �������ƣ���FY-3C�ȣ�                          */

	char                   strSensorName[128];                           /* ��������  "Microwave Humidity Sounder"         */

	char                   strSensorIdentificationCode[12];              /* ���������루��MWHS��                           */

	char                   strDatasetName[64];                           /* ���ݼ����ƣ���Global MWHS Data��               */

	char                   strFileName[256];                             /* �ļ�����                                       */

	char                   strFileAliasName[256];                        /* �ļ�����                                       */

	char                   strResponser[32];                             /* ��Ʒ���ɵأ�NSMC��                             */

	char                   strVersionOfSoftware[32];                     /* ��������汾��(��V1.0.0)                       */

	char                   strDateOfSoftwareRevision[32];                /* ���������������                               */

	char                   strVersionOfCoefficientIndex[32];             /* ����ϵ���汾��                                 */

	char                   strDateOfCoefficientIndexRevision[32];        /* ����ϵ����������                               */

	char                   strDateOfObservingBeginning[32];              /* ���ݹ۲⿪ʼ����(����������)                   */

	char                   strTimeOfObservingBeginning[32];              /* ���ݹ۲⿪ʼʱ�䣨����ʱ������룩             */

	char                   strDateOfObservingEnding[32];                 /* ���ݹ۲��������(����������)                   */

	char                   strTimeOfObservingEnding[32];                 /* ���ݹ۲����ʱ�䣨����ʱ������룩             */

	char                   strDateOfDataCreating[32];                    /* ���ݴ�������(����������)                       */

	char                   strTimeOfDataCreating[32];                    /* ���ݴ���ʱ�䣨����ʱ������룩                 */

	char                   strDayOrNightFlag[8];                         /* ����ҹ���־                                   */

	unsigned int           dwOrbitNumber;                                /* �����                                         */

	unsigned short int     wOrbitPeriod;                                 /* �������                                       */

	char                   strOrbitDirection[8];                         /* �������                                       */

	unsigned char          cDataQuality;                                 /* �����������(0-5��)                            */

	int                    iNumberOfScans;                               /* ��ɨ������                                     */

	int                    iNumberOfDaymodescans;                        /* ����ģʽɨ������                               */

	int                    iNumberofNightmodescans;                      /* ����ģʽɨ������                               */

	int                    iIncompleteScans;                             /* ��������ɨ������                               */

	unsigned char          cQAScanFlag;                                  /* ɨ�������������롢��ɨ����                     */

	unsigned short int     wQAPixelFlag;                                 /* ��Ԫ���������롢��ɨ����                       */

	unsigned short int     wBeginLineNumber;                             /* ��ʼ�к�                                       */

	unsigned short int     wEndLineNumber;                               /* �����к�                                       */

	unsigned short int     wBeginPixelNumber;                            /* ��ʼ��Ԫ��                                     */

	unsigned short int     wEndPixelNumber;                              /* ������Ԫ��                                     */

	char                   strReferenceEllipsoidModelID;                 /* ��������ο�����ϵID��WGS84��                  */

	double                 dEarthSunDistanceRatio;                       /* �յؾ����                                     */

	char                   strMeanAnomaly[12];                           /* ƽ���ص�ǣ��ȣ�                               */

	char                   strMeanMotion[12];                            /* ƽ���˶�                                       */

	char                   strEccentricity[12];                          /* ƫ����                                         */

	char                   strPerigeeArgument[12];                       /* ���ص㸩�ǣ��ȣ�                               */

	char                   strAscendingNodeLongitude[12];                /* ������ྭ���ȣ�                               */

	char                   strOrbitalInclination[12];                    /* �����ǣ��ȣ�                                 */

	char                   strEpochTime[12];                             /* ��Ԫʱ��                                       */

	float                  fOrbitPointLatitude[4];                       /* ���4���ǵ�γ��                                */

	float                  fOrbitPointLongitude[4];                      /* ���4���ǵ㾭��                                */

	char                   strAdditionalAnotation[1024];                 /* �ļ��ĸ���˵��(���Զ��ļ���ʹ�á������˵�˵��) */

	
	unsigned short int     wApplicationID;                               /* Ӧ�ñ�ʶ                                       */

	unsigned short int     wScanningMode;                                /* ɨ��ģ̬                                       */

	unsigned short int     wClockUpdateIndicator;                        /* ʱ�Ӹ���ָʾ(0 =û�и��£��������ʱ�Ӹ���֡��)*/

	int                    iCountScnlines;                               /* ��֡��                                         */
	
	int                    iPacketLength;                                /* Դ������                                       */

	int                    iCountScnlinesCalibrated;                     /* �������Ԥ�����ɨ������                       */

	int                    iCountTimeSeqErr;                             /* ʱ�����֡��                                   */
	
	int                    iCountMissingScnlines;                        /* ��֡��                                         */
	
	int                    iCountCaliErrScnlines;                        /* ����ʧ��֡��                                   */
	
	int                    iCountGeolErrScnlines;                        /* ��λʧ��֡��                                   */
	
	char                   strVersionOfRadianceCorrectingData[32];       /* ���䶩�����ݰ汾��                             */
	
	char                   strDateOfRadianceCorrectingDataVersion[32];   /* ���䶩�����ݸ�������                           */
	
	char                   strVersionOfBasicCalibrationData[32];         /* ��������������ݰ汾��                         */
	
	char                   strDateOfBasicCalibrationDataVersion[32];     /* ��������������ݸ�������                       */
	
	short int              iNumberofPRT;                                 /* PRT����                                        */

	short int              iNumberofBlackbody;                           /* ��������                                       */

	short int              iNumberofBBSPView;                            /* ������չ۲���                                 */
	
	float                  fPRTTemperatureCoefficient[60];               /* PRT�¶�ת��ϵ��                                */

	float                  fColdSpaceFixedBias[15];                      /* ��չ۲ⶩ��ֵ                                 */

	float                  fWarmTargetFixedBias[15];                     /* ����ƫ���                                   */

	float                  fRefInstTemp[60];                             /* ��������ο��¶�                               */
	
	float                  fNonlinearityCorrCoef[15];                    /* �����Զ�������                                 */
	
	float                  fAntennaCoefFor98Pixel[196];                  /* ���߶�������                                   */

	float                  fChsCentralWavenumber[15];                    /* ͨ������Ƶ��                                   */
	
	float                  fCoefficientAG[15];                           /* ���ݸ���ʱ�ζ���ϵ������ƽ��ֵ                 */

	float                  fCoefficientSG[15];                           /* ���ݸ���ʱ�ζ���ϵ�������׼��                 */

	float                  fCoefficientAI[15];                           /* ���ݸ���ʱ�ζ���ϵ���ؾ�ƽ��ֵ                 */

	float                  fCoefficientSI[15];                           /* ���ݸ���ʱ�ζ���ϵ���ؾ��׼��                 */

	float                  fCoefficientA2[15];                           /* ���ݸ���ʱ�ζ���ϵ��������ƽ��ֵ               */

	float                  fCoefficientS2[15];                           /* ���ݸ���ʱ�ζ���ϵ���������׼��               */

	float                  fAveInstruTemp[2];                            /* ���ݸ���ʱ�������¶�ƽ��ֵ                     */

	float                  fSIGMInstruTemp[2];                           /* ���ݸ���ʱ�������¶ȱ�׼��                     */

	float                  fBBDNAve[15];                                 /* ���ݸ���ʱ�κ������ֵƽ��ֵ                   */

	float                  fBBDNSigm[15];                                /* ���ݸ���ʱ�κ������ֵ��׼��                   */

	float                  fSPDNAve[15];                                 /* ���ݸ���ʱ����ռ���ֵƽ��ֵ                   */

	float                  fSPDNSigm[15];                                /* ���ݸ���ʱ����ռ���ֵ��׼��                   */

	float                  fPRTTempAve[2];                               /* ���ݸ���ʱ��PRT�¶�ƽ��ֵ                      */

	float                  fPRTTempSigm[2];                              /* ���ݸ���ʱ��PRT�¶ȱ�׼��                      */

	short                  iCountScnlinesSPViewLunarContaminated;        /* ��ղ�ֵ�ܵ�������Ⱦ��ɨ������                 */

};  
                                                                                                                                                                               

/* FY3΢���¶ȼ�L1������ */                                                                                                                                                   

struct FY3_MWTS_L1B_FILE_INFO                                                                                                                                                   

{                                                                                                                                                                               

	char                   strSatelliteName[8];                          /* �������ƣ���FY-3C�ȣ�                          */

	char                   strSensorName[128];                           /* ��������  "Microwave Temperature Sounder"      */

	char                   strSensorIdentificationCode[12];              /* ���������루��MWTS��                           */

	char                   strDatasetName[64];                           /* ���ݼ����ƣ���Global MWTS Data��               */

	char                   strFileName[256];                             /* �ļ�����                                       */

	char                   strFileAliasName[256];                        /* �ļ�����                                       */

	char                   strResponser[32];                             /* ��Ʒ���ɵأ�NSMC��                             */

	char                   strVersionOfSoftware[32];                     /* ��������汾��(��V1.0.0)                       */

	char                   strDateOfSoftwareRevision[32];                /* ���������������                               */

	char                   strVersionOfCoefficientIndex[32];             /* ����ϵ���汾��                                 */

	char                   strDateOfCoefficientIndexRevision[32];        /* ����ϵ����������                               */

	char                   strDateOfObservingBeginning[32];              /* ���ݹ۲⿪ʼ����(����������)                   */

	char                   strTimeOfObservingBeginning[32];              /* ���ݹ۲⿪ʼʱ�䣨����ʱ������룩             */

	char                   strDateOfObservingEnding[32];                 /* ���ݹ۲��������(����������)                   */

	char                   strTimeOfObservingEnding[32];                 /* ���ݹ۲����ʱ�䣨����ʱ������룩             */

	char                   strDateOfDataCreating[32];                    /* ���ݴ�������(����������)                       */

	char                   strTimeOfDataCreating[32];                    /* ���ݴ���ʱ�䣨����ʱ������룩                 */

	char                   strDayOrNightFlag[8];                         /* ����ҹ���־                                   */

	unsigned int           dwOrbitNumber;                                /* �����                                         */

	unsigned short int     wOrbitPeriod;                                 /* �������                                       */

	char                   strOrbitDirection[8];                         /* �������                                       */

	unsigned char          cDataQuality;                                 /* �����������(0-5��)                            */

	int                    iNumberOfScans;                               /* ��ɨ������                                     */

	int                    iNumberOfDaymodescans;                        /* ����ģʽɨ������                               */

	int                    iNumberofNightmodescans;                      /* ����ģʽɨ������                               */

	int                    iIncompleteScans;                             /* ��������ɨ������                               */

	unsigned char          cQAScanFlag;                                  /* ɨ�������������롢��ɨ����                     */

	unsigned short int     wQAPixelFlag;                                 /* ��Ԫ���������롢��ɨ����                       */

	unsigned short int     wBeginLineNumber;                             /* ��ʼ�к�                                       */

	unsigned short int     wEndLineNumber;                               /* �����к�                                       */

	unsigned short int     wBeginPixelNumber;                            /* ��ʼ��Ԫ��                                     */

	unsigned short int     wEndPixelNumber;                              /* ������Ԫ��                                     */

	char                   strReferenceEllipsoidModelID;                 /* ��������ο�����ϵID��WGS84��                  */

	double                 dEarthSunDistanceRatio;                       /* �յؾ����                                     */

	char                   strMeanAnomaly[12];                           /* ƽ���ص�ǣ��ȣ�                               */

	char                   strMeanMotion[12];                            /* ƽ���˶�                                       */

	char                   strEccentricity[12];                          /* ƫ����                                         */

	char                   strPerigeeArgument[12];                       /* ���ص㸩�ǣ��ȣ�                               */

	char                   strAscendingNodeLongitude[12];                /* ������ྭ���ȣ�                               */

	char                   strOrbitalInclination[12];                    /* �����ǣ��ȣ�                                 */

	char                   strEpochTime[12];                             /* ��Ԫʱ��                                       */

	float                  fOrbitPointLatitude[4];                       /* ���4���ǵ�γ��                                */

	float                  fOrbitPointLongitude[4];                      /* ���4���ǵ㾭��                                */

	char                   strAdditionalAnotation[1024];                 /* �ļ��ĸ���˵��(���Զ��ļ���ʹ�á������˵�˵��) */

	                                                                     
	int                    iCountScnlines;                               /* ��֡��                                         */
	
	int                    iCountScnlinesCalibrated;                     /* �������Ԥ�����ɨ������                       */
	
	int                    iCountTimeSeqErr;                             /* ʱ�����֡��                                   */
	
	int                    iCountMissingScnlines;                        /* ��֡��                                         */
	
	int                    iCountCaliErrScans;                           /* ����ʧ��֡��                                   */
	
	int                    iCountGeolErrScans;                           /* ��λʧ��֡��                                   */
	
	float                  fChsCentralWavenumber[13];                    /* ͨ������Ƶ��                                   */
	
	short int              iCountScnlinesSPViewLunarContaminated;        /* ��չ۲������ܵ���Ⱦ��ɨ������                 */

};

/* FY3΢���¶ȼ�L1_OBC���� */                                                                                                                                                   

struct FY3_MWTSOBC_L1B_FILE_INFO                                                                                                                                                   

{                                                                                                                                                                               

	char                   strSatelliteName[8];                          /* �������ƣ���FY-3C�ȣ�                          */

	char                   strSensorName[128];                           /* ��������  "Microwave Temperature Sounder"      */

	char                   strSensorIdentificationCode[12];              /* ���������루��MWTS��                           */

	char                   strDatasetName[64];                           /* ���ݼ����ƣ���Global MWTS Data��               */

	char                   strFileName[256];                             /* �ļ�����                                       */

	char                   strFileAliasName[256];                        /* �ļ�����                                       */

	char                   strResponser[32];                             /* ��Ʒ���ɵأ�NSMC��                             */

	char                   strVersionOfSoftware[32];                     /* ��������汾��(��V1.0.0)                       */

	char                   strDateOfSoftwareRevision[32];                /* ���������������                               */

	char                   strVersionOfCoefficientIndex[32];             /* ����ϵ���汾��                                 */

	char                   strDateOfCoefficientIndexRevision[32];        /* ����ϵ����������                               */

	char                   strDateOfObservingBeginning[32];              /* ���ݹ۲⿪ʼ����(����������)                   */

	char                   strTimeOfObservingBeginning[32];              /* ���ݹ۲⿪ʼʱ�䣨����ʱ������룩             */

	char                   strDateOfObservingEnding[32];                 /* ���ݹ۲��������(����������)                   */

	char                   strTimeOfObservingEnding[32];                 /* ���ݹ۲����ʱ�䣨����ʱ������룩             */

	char                   strDateOfDataCreating[32];                    /* ���ݴ�������(����������)                       */

	char                   strTimeOfDataCreating[32];                    /* ���ݴ���ʱ�䣨����ʱ������룩                 */

	char                   strDayOrNightFlag[8];                         /* ����ҹ���־                                   */

	unsigned int           dwOrbitNumber;                                /* �����                                         */

	unsigned short int     wOrbitPeriod;                                 /* �������                                       */

	char                   strOrbitDirection[8];                         /* �������                                       */

	unsigned char          cDataQuality;                                 /* �����������(0-5��)                            */

	int                    iNumberOfScans;                               /* ��ɨ������                                     */

	int                    iNumberOfDaymodescans;                        /* ����ģʽɨ������                               */

	int                    iNumberofNightmodescans;                      /* ����ģʽɨ������                               */

	int                    iIncompleteScans;                             /* ��������ɨ������                               */

	unsigned char          cQAScanFlag;                                  /* ɨ�������������롢��ɨ����                     */

	unsigned short int     wQAPixelFlag;                                 /* ��Ԫ���������롢��ɨ����                       */

	unsigned short int     wBeginLineNumber;                             /* ��ʼ�к�                                       */

	unsigned short int     wEndLineNumber;                               /* �����к�                                       */

	unsigned short int     wBeginPixelNumber;                            /* ��ʼ��Ԫ��                                     */

	unsigned short int     wEndPixelNumber;                              /* ������Ԫ��                                     */

	char                   strReferenceEllipsoidModelID;                 /* ��������ο�����ϵID��WGS84��                  */

	double                 dEarthSunDistanceRatio;                       /* �յؾ����                                     */

	char                   strMeanAnomaly[12];                           /* ƽ���ص�ǣ��ȣ�                               */

	char                   strMeanMotion[12];                            /* ƽ���˶�                                       */

	char                   strEccentricity[12];                          /* ƫ����                                         */

	char                   strPerigeeArgument[12];                       /* ���ص㸩�ǣ��ȣ�                               */

	char                   strAscendingNodeLongitude[12];                /* ������ྭ���ȣ�                               */

	char                   strOrbitalInclination[12];                    /* �����ǣ��ȣ�                                 */

	char                   strEpochTime[12];                             /* ��Ԫʱ��                                       */

	float                  fOrbitPointLatitude[4];                       /* ���4���ǵ�γ��                                */

	float                  fOrbitPointLongitude[4];                      /* ���4���ǵ㾭��                                */

	char                   strAdditionalAnotation[1024];                 /* �ļ��ĸ���˵��(���Զ��ļ���ʹ�á������˵�˵��) */


	unsigned short int     wApplicationID;                               /* Ӧ�ñ�ʶ                                       */

	unsigned short int     wScanningMode;                                /* ɨ��ģ̬                                       */

	unsigned short int     wClockUpdateIndicator;                        /* ʱ�Ӹ���ָʾ( 0 =none during this orbit; otherwise the record number of the first occurrence) */

	int                    iCountScnlines;                               /* ��֡��                                         */

	int                    iPacketLength;                                /* Դ������                                       */
	
	int                    iScnLinNumberGoodCalibration;                 /* �������Ԥ�����ɨ������                       */
	
	int                    iScnLinNumberBadTime;                         /* ʱ�����֡��                                   */
	
	int                    iScnLinNumberMissing;                         /* ��֡��                                         */
	
	int                    iCountCaliErrScans;                           /* ����ʧ��֡��                                   */
	
	int                    iCountGeolErrScans;                           /* ��λʧ��֡��                                   */
	
	char                   strVersionOfRadianceCorrectingData[32];       /* ���䶩�����ݰ汾��                             */

	char                   strDateOfRadianceCorrectingDataVersion[32];   /* ���䶩�����ݸ�������                           */

	char                   strVersionOfBasicCalibrationData[32];         /* ��������������ݰ汾��                         */

	char                   strDateOfBasicCalibrationDataVersion[32];     /* ��������������ݸ�������                       */

	short int              iNumberofPRT[5];                              /* PRT����                                        */

	short int              iNumberofBlackbody;                           /* ��������                                       */

	short int              iNumberofBBSPView;                            /* ����-��չ۲���                                */

	float                  fPRTTemperatureCoefficient[15];               /* PRT�¶�ת��ϵ��                                */

	float                  fColdSpaceFixedBias[13];                      /* ��չ۲ⶩ��ֵ                                 */

	float                  fWarmTargetFixedBias[13];                     /* ����ƫ���                                   */
	
	float                  fRefInstTemp;                                 /* ��������ο��¶�                               */
	
	float                  fNonlinearityCorrCoef[13];                    /* �����Զ�������                                 */
	
	float                  fAntennaCoefForAllPixel[1170];                /* ���߶�������                                   */
	
	float                  fChsCentralWavenumber[13];                    /* ͨ������Ƶ��                                   */
	
	float                  fCoefficientAG[13];                           /* ���ݸ���ʱ�ζ���ϵ������ƽ��ֵ                 */

	float                  fCoefficientSG[13];                           /* ���ݸ���ʱ�ζ���ϵ�������׼��                 */

	float                  fCoefficientAI[13];                           /* ���ݸ���ʱ�ζ���ϵ���ؾ�ƽ��ֵ                 */

	float                  fCoefficientSI[13];                           /* ���ݸ���ʱ�ζ���ϵ���ؾ��׼��                 */

	float                  fCoefficientA2[13];                           /* ���ݸ���ʱ�ζ���ϵ��������ƽ��ֵ               */

	float                  fCoefficientS2[13];                           /* ���ݸ���ʱ�ζ���ϵ���������׼��               */
 
	float                  fInstruTempAved;                              /* ���ݸ���ʱ�������¶�ƽ��ֵ                     */

	float                  fInstruTempSigm;                              /* ���ݸ���ʱ�������¶ȱ�׼��                     */

	float                  fBBDNAved[13];                                /* ���ݸ���ʱ�κ������ֵƽ��ֵ                   */

	float                  fBBDNSigm[13];                                /* ���ݸ���ʱ�κ������ֵ��׼��                   */
	
	float                  fSPDNAved[13];                                /* ���ݸ���ʱ����ռ���ֵƽ��ֵ                   */
	
	float                  fSPDNSigm[13];                                /* ���ݸ���ʱ����ռ���ֵ��׼��                   */
	
	float                  fPRTTempAved;                                 /* ���ݸ���ʱ��PRT�¶�ƽ��ֵ                      */
	
	float                  fPRTTempSigm;                                 /* ���ݸ���ʱ��PRT�¶ȱ�׼��                      */

	short int              iCountScnlinesSPViewLunarContaminated;        /* ��չ۲������ܵ���Ⱦ��ɨ������                 */

};

/* FY3�зֱ��ʹ��׳�����L1�����ݣ�250M�� */

struct FY3_MERSI250M_L1B_FILE_INFO

{

	char                   strSatelliteName[8];                          /* �������ƣ���FY-3C�ȣ�                          */

	char                   strSensorName[128];                           /* ��������  "Medium Resolution Spectral Imager"  */

	char                   strSensorIdentificationCode[12];              /* ���������루��MERSI��                          */

	char                   strDatasetName[64];                           /* ���ݼ����ƣ���MPT��                            */

	char                   strFileName[256];                             /* �ļ�����                                       */

	char                   strFileAliasName[256];                        /* �ļ�����                                       */

	char                   strResponser[32];                             /* ��Ʒ���ɵأ�NSMC��                             */

	char                   strVersionOfSoftware[32];                     /* ��������汾��(��V1.0.0)                       */

	char                   strDateOfSoftwareRevision[32];                /* ���������������                               */

	char                   strVersionOfCoefficientIndex[32];             /* ����ϵ���汾��                                 */

	char                   strDateOfCoefficientIndexRevision[32];        /* ����ϵ����������                               */

	char                   strDateOfObservingBeginning[32];              /* ���ݹ۲⿪ʼ����(����������)                   */

	char                   strTimeOfObservingBeginning[32];              /* ���ݹ۲⿪ʼʱ�䣨����ʱ������룩             */

	char                   strDateOfObservingEnding[32];                 /* ���ݹ۲��������(����������)                   */

	char                   strTimeOfObservingEnding[32];                 /* ���ݹ۲����ʱ�䣨����ʱ������룩             */

	char                   strDateOfDataCreating[32];                    /* ���ݴ�������(����������)                       */

	char                   strTimeOfDataCreating[32];                    /* ���ݴ���ʱ�䣨����ʱ������룩                 */

	char                   strDayOrNightFlag[8];                         /* ����ҹ���־                                   */

	unsigned int           dwOrbitNumber;                                /* �����                                         */

	unsigned short int     wOrbitPeriod;                                 /* �������                                       */

	char                   strOrbitDirection[8];                         /* �������                                       */

	unsigned char          cDataQuality;                                 /* �����������(0-5��)                            */

	int                    iNumberOfScans;                               /* ��ɨ����                                       */

	int                    iNumberOfDaymodescans;                        /* ����ģʽɨ����                                 */

	int                    iNumberofNightmodescans;                      /* ����ģʽɨ����                                 */

	int                    iIncompleteScans;                             /* ��������ɨ����                                 */

	unsigned char          cQAScanFlag;                                  /* ɨ�������������롢��ɨ����                     */

	unsigned short int     wQAPixelFlag;                                 /* ��Ԫ���������롢��ɨ����                       */

	unsigned short int     wBeginLineNumber;                             /* ��ʼ�к�                                       */

	unsigned short int     wEndLineNumber;                               /* �����к�                                       */

	unsigned short int     wBeginPixelNumber;                            /* ��ʼ��Ԫ��                                     */

	unsigned short int     wEndPixelNumber;                              /* ������Ԫ��                                     */

	char                   strReferenceEllipsoidModelID[12];             /* ��������ο�����ϵID��WGS84��                  */

	double                 dEarthSunDistanceRatio;                       /* �յؾ����                                     */

	double                 strEpochTime;                                 /* ��Ԫʱ��                                       */

	double                 strMeanMotion;                                /* ƽ���˶�                                       */

	double                 strEccentricity;                              /* ƫ����                                         */

	double                 strOrbitalInclination;                        /* ������                                       */

	double                 strAscendingNodeLongitude;                    /* ������ྭ                                     */

	double                 strPerigeeArgument;                           /* ���ص㸩��                                     */

	double                 strMeanAnomaly;                               /* ƽ���ص��                                     */                                

	float                  fOrbitPointLatitude[4];                       /* ���4���ǵ�γ��                                */

	float                  fOrbitPointLongitude[4];                      /* ���4���ǵ㾭��                                */

	char                   strAdditionalAnotation[1024];                 /* �ļ��ĸ���˵��(���Զ��ļ���ʹ�á������˵�˵��) */


	int                    iIncompletedScans;                            /* ��������ɨ����                                 */

	int                    iMissingPackets;                              /* ȱ֡��                                         */

	int                    iDiscardedpackets;                            /* ��֡����                                       */

	short int              iCountCaliErrScans;                           /* ����ʧ��ɨ����                                 */
	
	short int              iCountGeolErrScans;                           /* ��λʧ��ɨ����                                 */

	short int              iBBCountContaminatedScans;                    /* ����۲������ܵ���Ⱦ��ɨ����                   */

	short int              iSVCountContaminatedScans;                    /* ��չ۲������ܵ���Ⱦ��ɨ����                   */

};

/*  FY3B�зֱ��ʹ��׳�����L1�����ݣ�1000M�� */

struct FY3B_MERSI1000M_L1B_FILE_INFO

{

	char                   strSatelliteName[8];                          /* �������ƣ���FY-3C�ȣ�                          */

	char                   strSensorName[128];                           /* ��������  "Medium Resolution Spectral Imager"  */

	char                   strSensorIdentificationCode[12];              /* ���������루��MERSI��                          */

	char                   strDatasetName[64];                           /* ���ݼ����ƣ���MPT��                            */

	char                   strFileName[256];                             /* �ļ�����                                       */

	char                   strFileAliasName[256];                        /* �ļ�����                                       */

	char                   strResponser[32];                             /* ��Ʒ���ɵأ�NSMC��                             */

	char                   strVersionOfSoftware[32];                     /* ��������汾��(��V1.0.0)                       */

	char                   strDateOfSoftwareRevision[32];                /* ���������������                               */

	char                   strVersionOfCoefficientIndex[32];             /* ����ϵ���汾��                                 */

	char                   strDateOfCoefficientIndexRevision[32];        /* ����ϵ����������                               */

	char                   strDateOfObservingBeginning[32];              /* ���ݹ۲⿪ʼ����(����������)                   */

	char                   strTimeOfObservingBeginning[32];              /* ���ݹ۲⿪ʼʱ�䣨����ʱ������룩             */

	char                   strDateOfObservingEnding[32];                 /* ���ݹ۲��������(����������)                   */

	char                   strTimeOfObservingEnding[32];                 /* ���ݹ۲����ʱ�䣨����ʱ������룩             */

	char                   strDateOfDataCreating[32];                    /* ���ݴ�������(����������)                       */

	char                   strTimeOfDataCreating[32];                    /* ���ݴ���ʱ�䣨����ʱ������룩                 */

	char                   strDayOrNightFlag[8];                         /* ����ҹ���־                                   */

	unsigned int           dwOrbitNumber;                                /* �����                                         */

	unsigned short int     wOrbitPeriod;                                 /* �������                                       */

	char                   strOrbitDirection[8];                         /* �������                                       */

	unsigned char          cDataQuality;                                 /* �����������(0-5��)                            */

	int                    iNumberOfScans;                               /* ��ɨ����                                       */

	int                    iNumberOfDaymodescans;                        /* ����ģʽɨ����                                 */

	int                    iNumberofNightmodescans;                      /* ����ģʽɨ����                                 */

	int                    iIncompleteScans;                             /* ��������ɨ����                                 */

	unsigned char          cQAScanFlag;                             /* ɨ�������������롢��ɨ����                     */

	unsigned short int     wQAPixelFlag;                            /* ��Ԫ���������롢��ɨ����                       */

	unsigned short int     wBeginLineNumber;                             /* ��ʼ�к�                                       */

	unsigned short int     wEndLineNumber;                               /* �����к�                                       */

	unsigned short int     wBeginPixelNumber;                            /* ��ʼ��Ԫ��                                     */

	unsigned short int     wEndPixelNumber;                              /* ������Ԫ��                                     */

	char                   strReferenceEllipsoidModelID[12];             /* ��������ο�����ϵID��WGS84��                  */

	double                 dEarthSunDistanceRatio;                       /* �յؾ����                                     */

	char                   strEpochTime[7];                                 /* ��Ԫʱ��                                       */

	char                   strMeanMotion[10];                                /* ƽ���˶�                                       */

	char                   strEccentricity[10];                              /* ƫ����                                         */

	char                   strOrbitalInclination[10];                        /* ������                                       */

	char                   strAscendingNodeLongitude[10];                    /* ������ྭ                                     */

	char                   strPerigeeArgument[10];                           /* ���ص㸩��                                     */

	char                   strMeanAnomaly[10];                               /* ƽ���ص��                                     */                                

	float                  fOrbitPointLatitude[4];                       /* ���4���ǵ�γ��                                */

	float                  fOrbitPointLongitude[4];                      /* ���4���ǵ㾭��                                */

	char                   strAdditionalAnotation[1024];                 /* �ļ��ĸ���˵��(���Զ��ļ���ʹ�á������˵�˵��) */

	
	int                    iIncompletedScans;                            /* ��������ɨ����                                 */

	int                    iMissingPackets;                              /* ȱ֡��                                         */

	int                    iDiscardedpackets;                            /* ��֡����                                       */

	short int              iCountCaliErrScans;                           /* ����ʧ��ɨ����                                 */
	
	short int              iCountGeolErrScans;                           /* ��λʧ��ɨ����                                 */

	short int              iBBCountContaminatedScans;                    /* ����۲������ܵ���Ⱦ��ɨ����                   */

	short int              iSVCountContaminatedScans;                    /* ��չ۲������ܵ���Ⱦ��ɨ����                   */

	float                  fIRCalCoeff[800];                   /* ����ϵ��                                  */
	float                  fVIRCalCoeff[57];                   /* ����ϵ��                                 */

	float                  fEffectCenterWaveLenth[20];                   /* ��ͨ�����Ĳ���                                 */
	float                  fBandResponseFunction[800];                   /* ��ͨ������Ӱ��                                 */
}; 


/*  FY3�зֱ��ʹ��׳�����L1�����ݣ�1000M�� */

struct FY3_MERSI1000M_L1B_FILE_INFO

{

	char                   strSatelliteName[8];                          /* �������ƣ���FY-3C�ȣ�                          */

	char                   strSensorName[128];                           /* ��������  "Medium Resolution Spectral Imager"  */

	char                   strSensorIdentificationCode[12];              /* ���������루��MERSI��                          */

	char                   strDatasetName[64];                           /* ���ݼ����ƣ���MPT��                            */

	char                   strFileName[256];                             /* �ļ�����                                       */

	char                   strFileAliasName[256];                        /* �ļ�����                                       */

	char                   strResponser[32];                             /* ��Ʒ���ɵأ�NSMC��                             */

	char                   strVersionOfSoftware[32];                     /* ��������汾��(��V1.0.0)                       */

	char                   strDateOfSoftwareRevision[32];                /* ���������������                               */

	char                   strVersionOfCoefficientIndex[32];             /* ����ϵ���汾��                                 */

	char                   strDateOfCoefficientIndexRevision[32];        /* ����ϵ����������                               */

	char                   strDateOfObservingBeginning[32];              /* ���ݹ۲⿪ʼ����(����������)                   */

	char                   strTimeOfObservingBeginning[32];              /* ���ݹ۲⿪ʼʱ�䣨����ʱ������룩             */

	char                   strDateOfObservingEnding[32];                 /* ���ݹ۲��������(����������)                   */

	char                   strTimeOfObservingEnding[32];                 /* ���ݹ۲����ʱ�䣨����ʱ������룩             */

	char                   strDateOfDataCreating[32];                    /* ���ݴ�������(����������)                       */

	char                   strTimeOfDataCreating[32];                    /* ���ݴ���ʱ�䣨����ʱ������룩                 */

	char                   strDayOrNightFlag[8];                         /* ����ҹ���־                                   */

	unsigned int           dwOrbitNumber;                                /* �����                                         */

	unsigned short int     wOrbitPeriod;                                 /* �������                                       */

	char                   strOrbitDirection[8];                         /* �������                                       */

	unsigned char          cDataQuality;                                 /* �����������(0-5��)                            */

	int                    iNumberOfScans;                               /* ��ɨ����                                       */

	int                    iNumberOfDaymodescans;                        /* ����ģʽɨ����                                 */

	int                    iNumberofNightmodescans;                      /* ����ģʽɨ����                                 */

	int                    iIncompleteScans;                             /* ��������ɨ����                                 */

	unsigned char          cQAScanFlag;                                  /* ɨ�������������롢��ɨ����                     */

	unsigned short int     wQAPixelFlag;                                 /* ��Ԫ���������롢��ɨ����                       */

	unsigned short int     wBeginLineNumber;                             /* ��ʼ�к�                                       */

	unsigned short int     wEndLineNumber;                               /* �����к�                                       */

	unsigned short int     wBeginPixelNumber;                            /* ��ʼ��Ԫ��                                     */

	unsigned short int     wEndPixelNumber;                              /* ������Ԫ��                                     */

	char                   strReferenceEllipsoidModelID[12];             /* ��������ο�����ϵID��WGS84��                  */

	double                 dEarthSunDistanceRatio;                       /* �յؾ����                                     */

	double                 strEpochTime;                                 /* ��Ԫʱ��                                       */

	double                 strMeanMotion;                                /* ƽ���˶�                                       */

	double                 strEccentricity;                              /* ƫ����                                         */

	double                 strOrbitalInclination;                        /* ������                                       */

	double                 strAscendingNodeLongitude;                    /* ������ྭ                                     */

	double                 strPerigeeArgument;                           /* ���ص㸩��                                     */

	double                 strMeanAnomaly;                               /* ƽ���ص��                                     */                                

	float                  fOrbitPointLatitude[4];                       /* ���4���ǵ�γ��                                */

	float                  fOrbitPointLongitude[4];                      /* ���4���ǵ㾭��                                */

	char                   strAdditionalAnotation[1024];                 /* �ļ��ĸ���˵��(���Զ��ļ���ʹ�á������˵�˵��) */

	
	int                    iIncompletedScans;                            /* ��������ɨ����                                 */

	int                    iMissingPackets;                              /* ȱ֡��                                         */

	int                    iDiscardedpackets;                            /* ��֡����                                       */

	short int              iCountCaliErrScans;                           /* ����ʧ��ɨ����                                 */
	
	short int              iCountGeolErrScans;                           /* ��λʧ��ɨ����                                 */

	short int              iBBCountContaminatedScans;                    /* ����۲������ܵ���Ⱦ��ɨ����                   */

	short int              iSVCountContaminatedScans;                    /* ��չ۲������ܵ���Ⱦ��ɨ����                   */

	float                  fEffectCenterWaveLenth[20];                   /* ��ͨ�����Ĳ���                                 */
	
	float                  fBandResponseFunction[800];                   /* ��ͨ������Ӱ��                                 */
};                                                                                                                                     

/* FY3�зֱ��ʹ��׳�����L1�����ݣ�OBC�� */

struct FY3_MERSIOBC_L1B_FILE_INFO

{

	char                   strSatelliteName[8];                          /* �������ƣ���FY-3C�ȣ�                          */

	char                   strSensorName[128];                           /* ��������  "Medium Resolution Spectral Imager"  */

	char                   strSensorIdentificationCode[12];              /* ���������루��MERSI��                          */

	char                   strDatasetName[64];                           /* ���ݼ����ƣ���MPT��                            */

	char                   strFileName[256];                             /* �ļ�����                                       */

	char                   strFileAliasName[256];                        /* �ļ�����                                       */

	char                   strResponser[32];                             /* ��Ʒ���ɵأ�NSMC��                             */

	char                   strVersionOfSoftware[32];                     /* ��������汾��(��V1.0.0)                       */

	char                   strDateOfSoftwareRevision[32];                /* ���������������                               */

	char                   strVersionOfCoefficientIndex[32];             /* ����ϵ���汾��                                 */

	char                   strDateOfCoefficientIndexRevision[32];        /* ����ϵ����������                               */

	char                   strDateOfObservingBeginning[32];              /* ���ݹ۲⿪ʼ����(����������)                   */

	char                   strTimeOfObservingBeginning[32];              /* ���ݹ۲⿪ʼʱ�䣨����ʱ������룩             */

	char                   strDateOfObservingEnding[32];                 /* ���ݹ۲��������(����������)                   */

	char                   strTimeOfObservingEnding[32];                 /* ���ݹ۲����ʱ�䣨����ʱ������룩             */

	char                   strDateOfDataCreating[32];                    /* ���ݴ�������(����������)                       */

	char                   strTimeOfDataCreating[32];                    /* ���ݴ���ʱ�䣨����ʱ������룩                 */

	char                   strDayOrNightFlag[8];                         /* ����ҹ���־                                   */

	unsigned int           dwOrbitNumber;                                /* �����                                         */

	unsigned short int     wOrbitPeriod;                                 /* �������                                       */

	char                   strOrbitDirection[8];                         /* �������                                       */

	unsigned char          cDataQuality;                                 /* �����������(1-5��)                            */

	int                    iNumberOfScans;                               /* ��ɨ����                                       */

	int                    iNumberOfDaymodescans;                        /* ����ģʽɨ����                                 */

	int                    iNumberofNightmodescans;                      /* ����ģʽɨ����                                 */

	int                    iIncompleteScans;                             /* ��������ɨ����                                 */

	unsigned char          cQAScanFlag;                                  /* ɨ�������������롢��ɨ����                     */

	unsigned short int     wQAPixelFlag;                                 /* ��Ԫ���������롢��ɨ����                       */

	unsigned short int     wBeginLineNumber;                             /* ��ʼ�к�                                       */

	unsigned short int     wEndLineNumber;                               /* �����к�                                       */

	unsigned short int     wBeginPixelNumber;                            /* ��ʼ��Ԫ��                                     */

	unsigned short int     wEndPixelNumber;                              /* ������Ԫ��                                     */

	char                   strReferenceEllipsoidModelID[12];             /* ��������ο�����ϵID��WGS84��                  */

	double                 dEarthSunDistanceRatio;                       /* �յؾ����                                     */

	double                 strEpochTime;                                 /* ��Ԫʱ��                                       */

	double                 strMeanMotion;                                /* ƽ���˶�                                       */

	double                 strEccentricity;                              /* ƫ����                                         */

	double                 strOrbitalInclination;                        /* ������                                       */

	double                 strAscendingNodeLongitude;                    /* ������ྭ                                     */

	double                 strPerigeeArgument;                           /* ���ص㸩��                                     */

	double                 strMeanAnomaly;                               /* ƽ���ص��                                     */                                

	float                  fOrbitPointLatitude[4];                       /* ���4���ǵ�γ��                                */

	float                  fOrbitPointLongitude[4];                      /* ���4���ǵ㾭��                                */

	char                   strAdditionalAnotation[1024];                 /* �ļ��ĸ���˵��(���Զ��ļ���ʹ�á������˵�˵��) */


	int                    iIncompletedScans;                            /* ��������ɨ����                                 */

	int                    iMissingPackets;                              /* ȱ֡��                                         */

	int                    iDiscardedpackets;                            /* ��֡����                                       */

	short int              iCountCaliErrScans;                           /* ����ʧ��ɨ����                                 */
	
	short int              iCountGeolErrScans;                           /* ��λʧ��ɨ����                                 */

	short int              iBBCountContaminatedScans;                    /* ����۲������ܵ���Ⱦ��ɨ����                   */

	short int              iSVCountContaminatedScans;                    /* ��չ۲������ܵ���Ⱦ��ɨ����                   */

};

/* FY3�зֱ��ʹ��׳�����L1�����ݣ�250MGEO�� */

struct FY3_MERSI250MGEO_L1B_FILE_INFO

{

	char                   strSatelliteName[8];                          /* �������ƣ���FY-3C�ȣ�                          */

	char                   strSensorName[128];                           /* ��������  "Medium Resolution Spectral Imager"  */

	char                   strSensorIdentificationCode[12];              /* ���������루��MERSI��                          */

	char                   strDatasetName[64];                           /* ���ݼ����ƣ���MPT��                            */

	char                   strFileName[256];                             /* �ļ�����                                       */

	char                   strFileAliasName[256];                        /* �ļ�����                                       */

	char                   strResponser[32];                             /* ��Ʒ���ɵأ�NSMC��                             */

	char                   strVersionOfSoftware[32];                     /* ��������汾��(��V1.0.0)                       */

	char                   strDateOfSoftwareRevision[32];                /* ���������������                               */

	char                   strVersionOfCoefficientIndex[32];             /* ����ϵ���汾��                                 */

	char                   strDateOfCoefficientIndexRevision[32];        /* ����ϵ����������                               */

	char                   strDateOfObservingBeginning[32];              /* ���ݹ۲⿪ʼ����(����������)                   */

	char                   strTimeOfObservingBeginning[32];              /* ���ݹ۲⿪ʼʱ�䣨����ʱ������룩             */

	char                   strDateOfObservingEnding[32];                 /* ���ݹ۲��������(����������)                   */

	char                   strTimeOfObservingEnding[32];                 /* ���ݹ۲����ʱ�䣨����ʱ������룩             */

	char                   strDateOfDataCreating[32];                    /* ���ݴ�������(����������)                       */

	char                   strTimeOfDataCreating[32];                    /* ���ݴ���ʱ�䣨����ʱ������룩                 */

	char                   strDayOrNightFlag[8];                         /* ����ҹ���־                                   */

	unsigned int           dwOrbitNumber;                                /* �����                                         */

	unsigned short int     wOrbitPeriod;                                 /* �������                                       */

	char                   strOrbitDirection[8];                         /* �������                                       */

	unsigned char          cDataQuality;                                 /* �����������(0-5��)                            */

	int                    iNumberOfScans;                               /* ��ɨ����                                       */

	int                    iNumberOfDaymodescans;                        /* ����ģʽɨ����                                 */

	int                    iNumberofNightmodescans;                      /* ����ģʽɨ����                                 */

	int                    iIncompleteScans;                             /* ��������ɨ����                                 */

	unsigned char          cQAScanFlag;                                  /* ɨ�������������롢��ɨ����                     */

	unsigned short int     wQAPixelFlag;                                 /* ��Ԫ���������롢��ɨ����                       */

	unsigned short int     wBeginLineNumber;                             /* ��ʼ�к�                                       */

	unsigned short int     wEndLineNumber;                               /* �����к�                                       */

	unsigned short int     wBeginPixelNumber;                            /* ��ʼ��Ԫ��                                     */

	unsigned short int     wEndPixelNumber;                              /* ������Ԫ��                                     */

	char                   strReferenceEllipsoidModelID[12];             /* ��������ο�����ϵID��WGS84��                  */

	double                 dEarthSunDistanceRatio;                       /* �յؾ����                                     */

	double                 strEpochTime;                                 /* ��Ԫʱ��                                       */

	double                 strMeanMotion;                                /* ƽ���˶�                                       */

	double                 strEccentricity;                              /* ƫ����                                         */

	double                 strOrbitalInclination;                        /* ������                                       */

	double                 strAscendingNodeLongitude;                    /* ������ྭ                                     */

	double                 strPerigeeArgument;                           /* ���ص㸩��                                     */

	double                 strMeanAnomaly;                               /* ƽ���ص��                                     */                                

	float                  fOrbitPointLatitude[4];                       /* ���4���ǵ�γ��                                */

	float                  fOrbitPointLongitude[4];                      /* ���4���ǵ㾭��                                */

	char                   strAdditionalAnotation[1024];                 /* �ļ��ĸ���˵��(���Զ��ļ���ʹ�á������˵�˵��) */

};

/* FY3�зֱ��ʹ��׳�����L1�����ݣ�1000MGEO�� */

struct FY3_MERSI1000MGEO_L1B_FILE_INFO

{
	char                   strSatelliteName[8];                          /* �������ƣ���FY-3C�ȣ�                          */

	char                   strSensorName[128];                           /* ��������  "Medium Resolution Spectral Imager"  */

	char                   strSensorIdentificationCode[12];              /* ���������루��MERSI��                          */

	char                   strDatasetName[64];                           /* ���ݼ����ƣ���MPT��                            */

	char                   strFileName[256];                             /* �ļ�����                                       */

	char                   strFileAliasName[256];                        /* �ļ�����                                       */

	char                   strResponser[32];                             /* ��Ʒ���ɵأ�NSMC��                             */

	char                   strVersionOfSoftware[32];                     /* ��������汾��(��V1.0.0)                       */

	char                   strDateOfSoftwareRevision[32];                /* ���������������                               */

	char                   strVersionOfCoefficientIndex[32];             /* ����ϵ���汾��                                 */

	char                   strDateOfCoefficientIndexRevision[32];        /* ����ϵ����������                               */

	char                   strDateOfObservingBeginning[32];              /* ���ݹ۲⿪ʼ����(����������)                   */

	char                   strTimeOfObservingBeginning[32];              /* ���ݹ۲⿪ʼʱ�䣨����ʱ������룩             */

	char                   strDateOfObservingEnding[32];                 /* ���ݹ۲��������(����������)                   */

	char                   strTimeOfObservingEnding[32];                 /* ���ݹ۲����ʱ�䣨����ʱ������룩             */

	char                   strDateOfDataCreating[32];                    /* ���ݴ�������(����������)                       */

	char                   strTimeOfDataCreating[32];                    /* ���ݴ���ʱ�䣨����ʱ������룩                 */

	char                   strDayOrNightFlag[8];                         /* ����ҹ���־                                   */

	unsigned int           dwOrbitNumber;                                /* �����                                         */

	unsigned short int     wOrbitPeriod;                                 /* �������                                       */

	char                   strOrbitDirection[8];                       /* �������                                       */

	unsigned char          cDataQuality;                                 /* �����������(1-5��)                            */

	int                    iNumberOfScans;                               /* ��ɨ����                                       */

	int                    iNumberOfDaymodescans;                        /* ����ģʽɨ����                                 */

	int                    iNumberofNightmodescans;                      /* ����ģʽɨ����                                 */

	int                    iIncompleteScans;                             /* ��������ɨ����                                 */

	unsigned char          cQAScanFlag;                                  /* ɨ�������������롢��ɨ����                     */

	unsigned short int     wQAPixelFlag;                                 /* ��Ԫ���������롢��ɨ����                       */

	unsigned short int     wBeginLineNumber;                             /* ��ʼ�к�                                       */

	unsigned short int     wEndLineNumber;                               /* �����к�                                       */

	unsigned short int     wBeginPixelNumber;                            /* ��ʼ��Ԫ��                                     */

	unsigned short int     wEndPixelNumber;                              /* ������Ԫ��                                     */

	char                   strReferenceEllipsoidModelID[12];             /* ��������ο�����ϵID��WGS84��                  */

	double                 dEarthSunDistanceRatio;                       /* �յؾ����                                     */

	double                 strEpochTime;                                 /* ��Ԫʱ��                                       */

	double                 strMeanMotion;                                /* ƽ���˶�                                       */

	double                 strEccentricity;                              /* ƫ����                                         */

	double                 strOrbitalInclination;                        /* ������                                       */

	double                 strAscendingNodeLongitude;                    /* ������ྭ                                     */

	double                 strPerigeeArgument;                           /* ���ص㸩��                                     */

	double                 strMeanAnomaly;                               /* ƽ���ص��                                     */                                

	float                  fOrbitPointLatitude[4];                       /* ���4���ǵ�γ��                                */

	float                  fOrbitPointLongitude[4];                      /* ���4���ǵ㾭��                                */

	char                   strAdditionalAnotation[1024];                 /* �ļ��ĸ���˵��(���Զ��ļ���ʹ�á������˵�˵��) */


	int                    iIncompletedScans;                            /* ��������ɨ����                                 */

	int                    iMissingPackets;                              /* ȱ֡��                                         */

	int                    iDiscardedpackets;                            /* ��֡����                                       */

	short int              iCountCaliErrScans;                           /* ����ʧ��ɨ����                                 */
	
	short int              iCountGeolErrScans;                           /* ��λʧ��ɨ����                                 */

	short int              iBBCountContaminatedScans;                    /* ����۲������ܵ���Ⱦ��ɨ����                   */

	short int              iSVCountContaminatedScans;                    /* ��չ۲������ܵ���Ⱦ��ɨ����                   */

};

/* FY3���������ֱ̽����L1���� */

struct FY3_SBUS_L1B_FILE_INFO

{

	char                   strSatelliteName[8];                          /* �������ƣ���FY-3C�ȣ�                          */

	char                   strSensorName[128];                           /* ��������"Solar Backscatter Ultraviolet Sounder"*/

	char                   strSensorIdentificationCode[12];              /* ���������루��SUBS��                           */

	char                   strDatasetName[64];                           /* ���ݼ����ƣ���Global SBUS Data��               */

	char                   strFileName[256];                             /* �ļ�����                                       */

	char                   strFileAliasName[256];                        /* �ļ�����                                       */

	char                   strResponser[32];                             /* ��Ʒ���ɵأ�NSMC��                             */

	char                   strVersionOfSoftware[32];                     /* ��������汾��(��V1.0.0)                       */

	char                   strDateOfSoftwareRevision[32];                /* ���������������                               */

	char                   strVersionOfCoefficientIndex[32];             /* ����ϵ���汾��                                 */

	char                   strDateOfCoefficientIndexRevision[32];        /* ����ϵ����������                               */

	char                   strDateOfObservingBeginning[32];              /* ���ݹ۲⿪ʼ����(����������)                   */

	char                   strTimeOfObservingBeginning[32];              /* ���ݹ۲⿪ʼʱ�䣨����ʱ������룩             */

	char                   strDateOfObservingEnding[32];                 /* ���ݹ۲��������(����������)                   */

	char                   strTimeOfObservingEnding[32];                 /* ���ݹ۲����ʱ�䣨����ʱ������룩             */

	char                   strDateOfDataCreating[32];                    /* ���ݴ�������(����������)                       */

	char                   strTimeOfDataCreating[32];                    /* ���ݴ���ʱ�䣨����ʱ������룩                 */

	char                   strDayOrNightFlag[8];                         /* ����ҹ���־                                   */

	unsigned int           dwOrbitNumber;                                /* �����                                         */

	unsigned short int     wOrbitPeriod;                                 /* �������                                       */

	char                   strOrbitDirection[8];                         /* �������                                       */

	unsigned char          cDataQuality;                                 /* �����������(0-5��)                            */

	int                    iNumberOfScans;                               /* ��ɨ������                                     */

	int                    iNumberOfDaymodescans;                        /* ����ģʽɨ������                               */

	int                    iNumberofNightmodescans;                      /* ����ģʽɨ������                               */

	int                    iIncompleteScans;                             /* ��������ɨ������                               */

	unsigned char          cQAScanFlag;                                  /* ɨ�������������롢��ɨ����                     */

	unsigned short int     wQAPixelFlag;                                 /* ��Ԫ���������롢��ɨ����                       */

	unsigned short int     wBeginLineNumber;                             /* ��ʼ�к�                                       */

	unsigned short int     wEndLineNumber;                               /* �����к�                                       */

	unsigned short int     wBeginPixelNumber;                            /* ��ʼ��Ԫ��                                     */

	unsigned short int     wEndPixelNumber;                              /* ������Ԫ��                                     */

	char                   strReferenceEllipsoidModelID;                 /* ��������ο�����ϵID��WGS84��                  */

	double                 dEarthSunDistanceRatio;                       /* �յؾ����                                     */

	char                   strMeanAnomaly[12];                           /* ƽ���ص�ǣ��ȣ�                               */

	char                   strMeanMotion[12];                            /* ƽ���˶�                                       */

	char                   strEccentricity[12];                          /* ƫ����                                         */

	char                   strPerigeeArgument[12];                       /* ���ص㸩�ǣ��ȣ�                               */

	char                   strAscendingNodeLongitude[12];                /* ������ྭ���ȣ�                               */

	char                   strOrbitalInclination[12];                    /* �����ǣ��ȣ�                                 */

	char                   strEpochTime[12];                             /* ��Ԫʱ��                                       */

	float                  fOrbitPointLatitude[4];                       /* ���4���ǵ�γ��                                */

	float                  fOrbitPointLongitude[4];                      /* ���4���ǵ㾭��                                */

	char                   strAdditionalAnotation[1024];                 /* �ļ��ĸ���˵��(���Զ��ļ���ʹ�á������˵�˵��) */
	

	unsigned short int     iCountOfFrames;                               /* ��Ȧ����֡��                                                                                                          */

	unsigned short int     iCountOfPackets;                              /* ��Ȧ���ݰ���                                                                                                          */

	unsigned short int     iBeginningPacketNumber;                       /* ��Ȧ��ʼ�����                                                                                                        */

	unsigned short int     iEndingPacketNumber;                          /* ��Ȧ���������                                                                                                        */

	unsigned int           iBeginningTimeInSecond;                       /* ��Ȧ��ʼʱ��                                                                                                          */

	unsigned int           iEndingTimeInSecond;                          /* ��Ȧ����ʱ��                                                                                                          */

	int                    iBeginningTimeForSolarMode;                   /* ̫��ģʽ����������̫��ģʽ����׼��ģʽ������̫��ģʽ��̫������ģʽ���۲⿪ʼʱ�䣨��̫��ģʽΪ��999��                 */

	int                    iEndingTimeForSolarMode;                      /* ̫��ģʽ����������̫��ģʽ����׼��ģʽ������̫��ģʽ��̫������ģʽ���۲����ʱ�䣨��̫��ģʽΪ��999��                 */

	unsigned short int     iCountForMissingPackets;                      /* ��ʧ���ݰ���                                                                                                          */

	unsigned short int     iCountForTimeSequenceError;                   /* ʱ��������                                                                                                          */

	short int              iStatusOfSweepModeReferenceDiffuser;          /* ̫������ģʽ�۲������0���ޣ�1���У���1���۲�ʧ�ܣ�                                                                   */

	short int              iStatusOfSweepModeStandardDiffuser;           /* ��׼��ģʽ��̫������ģʽ�۲������0���ޣ�1���У���1���۲�ʧ�ܣ�                                                       */

	short int              iStatusOfLampModeReferenceDiffuser;           /* ��׼��ģʽ�¹��ƹ۲�������ο��壩��0���ޣ�1���У���1���۲�ʧ�ܣ�                                                     */

	short int              iStatusOfLampModeStandardDiffuser;            /* ��׼��ģʽ�¹��ƹ۲��������׼�壩�۲������0���ޣ�1���У���1���۲�ʧ�ܣ�                                             */

	short int              iStatusOfLampModeDarkCurent;                  /* ��׼��ģʽ�°������۲��������׼�壩�۲������0���ޣ�1���У���1���۲�ʧ�ܣ�                                           */

	short int              iStatusOfDiscreteSolarMode;                   /* ̫������ģʽ�۲������0���ޣ�1���У���1���۲�ʧ�ܣ�                                                                   */

	unsigned short int     iCountForErrorsOfAtmosphericMeasurements;     /* ����ģʽʧ�ܴ���                                                                                                      */

	short int              iStatusOfDarkCurrentFile;                     /* �������ļ����������0��û���£�1�����³ɹ�����1������ʧ�ܣ�                                                           */

	short int              iStatusOfSolarIrradianceFittingCoeffients;    /* ̫�����ն����ϵ�����������0��û���£�1�����³ɹ�����1������ʧ�ܣ�                                                   */


};      

/* FY3���������ֱ̽����L1_OBC���� */

struct FY3_SBUSOBC_L1B_FILE_INFO

{

	char                   strSatelliteName[8];                          /* �������ƣ���FY-3C�ȣ�                          */

	char                   strSensorName[128];                           /* ��������"Solar Backscatter Ultraviolet Sounder"*/

	char                   strSensorIdentificationCode[12];              /* ���������루��SUBS��                           */

	char                   strDatasetName[64];                           /* ���ݼ����ƣ���Global SBUS Data��               */

	char                   strFileName[256];                             /* �ļ�����                                       */

	char                   strFileAliasName[256];                        /* �ļ�����                                       */

	char                   strResponser[32];                             /* ��Ʒ���ɵأ�NSMC��                             */

	char                   strVersionOfSoftware[32];                     /* ��������汾��(��V1.0.0)                       */

	char                   strDateOfSoftwareRevision[32];                /* ���������������                               */

	char                   strVersionOfCoefficientIndex[32];             /* ����ϵ���汾��                                 */

	char                   strDateOfCoefficientIndexRevision[32];        /* ����ϵ����������                               */

	char                   strDateOfObservingBeginning[32];              /* ���ݹ۲⿪ʼ����(����������)                   */

	char                   strTimeOfObservingBeginning[32];              /* ���ݹ۲⿪ʼʱ�䣨����ʱ������룩             */

	char                   strDateOfObservingEnding[32];                 /* ���ݹ۲��������(����������)                   */

	char                   strTimeOfObservingEnding[32];                 /* ���ݹ۲����ʱ�䣨����ʱ������룩             */

	char                   strDateOfDataCreating[32];                    /* ���ݴ�������(����������)                       */

	char                   strTimeOfDataCreating[32];                    /* ���ݴ���ʱ�䣨����ʱ������룩                 */

	char                   strDayOrNightFlag[8];                         /* ����ҹ���־                                   */

	unsigned int           dwOrbitNumber;                                /* �����                                         */

	unsigned short int     wOrbitPeriod;                                 /* �������                                       */

	char                   strOrbitDirection[8];                         /* �������                                       */

	unsigned char          cDataQuality;                                 /* �����������(0-5��)                            */

	int                    iNumberOfScans;                               /* ��ɨ������                                     */

	int                    iNumberOfDaymodescans;                        /* ����ģʽɨ������                               */

	int                    iNumberofNightmodescans;                      /* ����ģʽɨ������                               */

	int                    iIncompleteScans;                             /* ��������ɨ������                               */

	unsigned char          cQAScanFlag;                                  /* ɨ�������������롢��ɨ����                     */

	unsigned short int     wQAPixelFlag;                                 /* ��Ԫ���������롢��ɨ����                       */

	unsigned short int     wBeginLineNumber;                             /* ��ʼ�к�                                       */

	unsigned short int     wEndLineNumber;                               /* �����к�                                       */

	unsigned short int     wBeginPixelNumber;                            /* ��ʼ��Ԫ��                                     */

	unsigned short int     wEndPixelNumber;                              /* ������Ԫ��                                     */

	char                   strReferenceEllipsoidModelID;                 /* ��������ο�����ϵID��WGS84��                  */

	double                 dEarthSunDistanceRatio;                       /* �յؾ����                                     */

	char                   strMeanAnomaly[12];                           /* ƽ���ص�ǣ��ȣ�                               */

	char                   strMeanMotion[12];                            /* ƽ���˶�                                       */

	char                   strEccentricity[12];                          /* ƫ����                                         */

	char                   strPerigeeArgument[12];                       /* ���ص㸩�ǣ��ȣ�                               */

	char                   strAscendingNodeLongitude[12];                /* ������ྭ���ȣ�                               */

	char                   strOrbitalInclination[12];                    /* �����ǣ��ȣ�                                 */

	char                   strEpochTime[12];                             /* ��Ԫʱ��                                       */

	float                  fOrbitPointLatitude[4];                       /* ���4���ǵ�γ��                                */

	float                  fOrbitPointLongitude[4];                      /* ���4���ǵ㾭��                                */

	char                   strAdditionalAnotation[1024];                 /* �ļ��ĸ���˵��(���Զ��ļ���ʹ�á������˵�˵��) */
	

	unsigned short int     iCountOfFrames;                               /* ��Ȧ����֡��                                                                                                          */

	unsigned short int     iCountOfPackets;                              /* ��Ȧ���ݰ���                                                                                                          */

	unsigned short int     iBeginningPacketNumber;                       /* ��Ȧ��ʼ�����                                                                                                        */

	unsigned short int     iEndingPacketNumber;                          /* ��Ȧ���������                                                                                                        */

	unsigned int           iBeginningTimeInSecond;                       /* ��Ȧ��ʼʱ��                                                                                                          */

	unsigned int           iEndingTimeInSecond;                          /* ��Ȧ����ʱ��                                                                                                          */

	int                    iBeginningTimeForSolarMode;                   /* ̫��ģʽ����������̫��ģʽ����׼��ģʽ������̫��ģʽ��̫������ģʽ���۲⿪ʼʱ�䣨��̫��ģʽΪ��999��                 */

	int                    iEndingTimeForSolarMode;                      /* ̫��ģʽ����������̫��ģʽ����׼��ģʽ������̫��ģʽ��̫������ģʽ���۲����ʱ�䣨��̫��ģʽΪ��999��                 */

	unsigned short int     iCountForMissingPackets;                      /* ��ʧ���ݰ���                                                                                                          */

	unsigned short int     iCountForTimeSequenceError;                   /* ʱ��������                                                                                                          */

	short int              iStatusOfSweepModeReferenceDiffuser;          /* ̫������ģʽ�۲������0���ޣ�1���У���1���۲�ʧ�ܣ�                                                                   */

	short int              iStatusOfSweepModeStandardDiffuser;           /* ��׼��ģʽ��̫������ģʽ�۲������0���ޣ�1���У���1���۲�ʧ�ܣ�                                                       */

	short int              iStatusOfLampModeReferenceDiffuser;           /* ��׼��ģʽ�¹��ƹ۲�������ο��壩��0���ޣ�1���У���1���۲�ʧ�ܣ�                                                     */

	short int              iStatusOfLampModeStandardDiffuser;            /* ��׼��ģʽ�¹��ƹ۲��������׼�壩�۲������0���ޣ�1���У���1���۲�ʧ�ܣ�                                             */

	short int              iStatusOfLampModeDarkCurent;                  /* ��׼��ģʽ�°������۲��������׼�壩�۲������0���ޣ�1���У���1���۲�ʧ�ܣ�                                           */

	short int              iStatusOfDiscreteSolarMode;                   /* ̫������ģʽ�۲������0���ޣ�1���У���1���۲�ʧ�ܣ�                                                                   */

	unsigned short int     iCountForErrorsOfAtmosphericMeasurements;     /* ����ģʽʧ�ܴ���                                                                                                      */

	short int              iStatusOfDarkCurrentFile;                     /* �������ļ����������0��û���£�1�����³ɹ�����1������ʧ�ܣ�                                                           */

	short int              iStatusOfSolarIrradianceFittingCoeffients;    /* ̫�����ն����ϵ�����������0��û���£�1�����³ɹ�����1������ʧ�ܣ�                                                   */


};
        

/* FY3�����������̽����L1���� */

struct FY3_TOU_L1B_FILE_INFO

{       

	char                   strSatelliteName[8];                          /* �������ƣ���FY-3C�ȣ�                          */

	char                   strSensorName[128];                           /* ��������  "Total Ozone Unit"                   */

	char                   strSensorIdentificationCode[12];              /* ���������루��TOU��                            */

	char                   strDatasetName[64];                           /* ���ݼ����ƣ���Global TOU Data��                */

	char                   strFileName[256];                             /* �ļ�����                                       */

	char                   strFileAliasName[256];                        /* �ļ�����                                       */

	char                   strResponser[32];                             /* ��Ʒ���ɵأ�NSMC��                             */

	char                   strVersionOfSoftware[32];                     /* ��������汾��(��V1.0.0)                       */

	char                   strDateOfSoftwareRevision[32];                /* ���������������                               */

	char                   strVersionOfCoefficientIndex[32];             /* ����ϵ���汾��                                 */

	char                   strDateOfCoefficientIndexRevision[32];        /* ����ϵ����������                               */

	char                   strDateOfObservingBeginning[32];              /* ���ݹ۲⿪ʼ����(����������)                   */

	char                   strTimeOfObservingBeginning[32];              /* ���ݹ۲⿪ʼʱ�䣨����ʱ������룩             */

	char                   strDateOfObservingEnding[32];                 /* ���ݹ۲��������(����������)                   */

	char                   strTimeOfObservingEnding[32];                 /* ���ݹ۲����ʱ�䣨����ʱ������룩             */

	char                   strDateOfDataCreating[32];                    /* ���ݴ�������(����������)                       */

	char                   strTimeOfDataCreating[32];                    /* ���ݴ���ʱ�䣨����ʱ������룩                 */

	char                   strDayOrNightFlag[8];                         /* ����ҹ���־                                   */

	unsigned int           dwOrbitNumber;                                /* �����                                         */

	unsigned short int     wOrbitPeriod;                                 /* �������                                       */

	char                   strOrbitDirection[8];                         /* �������                                       */

	unsigned char          cDataQuality;                                 /* �����������(0-5��)                            */

	int                    iNumberOfScans;                               /* ��ɨ������                                     */

	int                    iNumberOfDaymodescans;                        /* ����ģʽɨ������                               */

	int                    iNumberofNightmodescans;                      /* ����ģʽɨ������                               */

	int                    iIncompleteScans;                             /* ��������ɨ������                               */

	unsigned char          cQAScanFlag;                                  /* ɨ�������������롢��ɨ����                     */

	unsigned short int     wQAPixelFlag;                                 /* ��Ԫ���������롢��ɨ����                       */

	unsigned short int     wBeginLineNumber;                             /* ��ʼ�к�                                       */

	unsigned short int     wEndLineNumber;                               /* �����к�                                       */

	unsigned short int     wBeginPixelNumber;                            /* ��ʼ��Ԫ��                                     */

	unsigned short int     wEndPixelNumber;                              /* ������Ԫ��                                     */

	char                   strReferenceEllipsoidModelID[32];             /* ��������ο�����ϵID��WGS84��                  */

	double                 dEarthSunDistanceRatio;                       /* �յؾ����                                     */

	char                   strMeanAnomaly[12];                           /* ƽ���ص�ǣ��ȣ�                               */

	char                   strMeanMotion[12];                            /* ƽ���˶�                                       */

	char                   strEccentricity[12];                          /* ƫ����                                         */

	char                   strPerigeeArgument[12];                       /* ���ص㸩�ǣ��ȣ�                               */

	char                   strAscendingNodeLongitude[12];                /* ������ྭ���ȣ�                               */

	char                   strOrbitalInclination[12];                    /* �����ǣ��ȣ�                                 */

	char                   strEpochTime[12];                             /* ��Ԫʱ��                                       */

	float                  fOrbitPointLatitude[4];                       /* ���4���ǵ�γ��                                */

	float                  fOrbitPointLongitude[4];                      /* ���4���ǵ㾭��                                */

	char                   strAdditionalAnotation[1024];                 /* �ļ��ĸ���˵��(���Զ��ļ���ʹ�á������˵�˵��) */

	

	unsigned short int     iCountOfFrames;                               /* ��Ȧ����֡��                                                        */

	unsigned short int     iBeginningPacketNumber;                       /* ��Ȧ��ʼ�����                                                      */

	unsigned short int     iEndingPacketNumber;                          /* ��Ȧ���������                                                      */

	unsigned int           iBeginningTimeInSecond;                       /* ��Ȧ��ʼʱ��                                                        */

	unsigned int           iEndingTimeInSecond;                          /* ��Ȧ��ʼʱ��                                                        */

	int                    iBeginningTimeForSolarModeA1;                 /* ���䶨��ģʽ�۲⿪ʼʱ�䣨�ǰ壬û�У���999��                       */

	int                    iBeginningTimeForSolarModeA2;                 /* ���䶨��ģʽ�۲⿪ʼʱ�䣨�����壬û�У���999��                     */

	int                    iBeginningTimeForSolarModeA3;                 /* ���䶨��ģʽ�۲⿪ʼʱ�䣨�ο��壬û�У���999��                     */

	int                    iEndingTimeForSolarModeA1;                    /* ���䶨��ģʽ�۲����ʱ�䣨�ǰ壬û�У���999��                       */

	int                    iEndingTimeForSolarModeA2;                    /* ���䶨��ģʽ�۲����ʱ�䣨�����壬û�У���999��                     */

	int                    iEndingTimeForSolarModeA3;                    /* ���䶨��ģʽ�۲����ʱ�䣨�ο��壬û�У���999��                     */

	short int              iStatusOfWavelengthCalibrationMode;           /* ��������ģʽ�۲������0���ޣ�1���У���1���۲�ʧ�ܣ�                 */

	unsigned int           iCountForMissingPackets;                      /* ��ʧ���ݰ���                                                        */

	unsigned int           iCountForTimeSequenceError;                   /* ʱ��������                                                        */

	unsigned int           iCountForErrorsOfAtmosphericMeasurements;     /* �Ե�ģʽʧ�ܴ���                                                    */

	short int              iStatusOfSolarIrradianceFittingCoeffients;    /* ̫�����ն����ϵ�����������0��û���£�1�����³ɹ�����1������ʧ�ܣ� */

};


/* FY3�����������̽����L1_OBC���� */

struct FY3_TOUOBC_L1B_FILE_INFO

{       

	char                   strSatelliteName[8];                          /* �������ƣ���FY-3C�ȣ�                          */

	char                   strSensorName[128];                           /* ��������  "Total Ozone Unit"                   */

	char                   strSensorIdentificationCode[12];              /* ���������루��TOU��                            */

	char                   strDatasetName[64];                           /* ���ݼ����ƣ���Global TOU Data��                */

	char                   strFileName[256];                             /* �ļ�����                                       */

	char                   strFileAliasName[256];                        /* �ļ�����                                       */

	char                   strResponser[32];                             /* ��Ʒ���ɵأ�NSMC��                             */

	char                   strVersionOfSoftware[32];                     /* ��������汾��(��V1.0.0)                       */

	char                   strDateOfSoftwareRevision[32];                /* ���������������                               */

	char                   strVersionOfCoefficientIndex[32];             /* ����ϵ���汾��                                 */

	char                   strDateOfCoefficientIndexRevision[32];        /* ����ϵ����������                               */

	char                   strDateOfObservingBeginning[32];              /* ���ݹ۲⿪ʼ����(����������)                   */

	char                   strTimeOfObservingBeginning[32];              /* ���ݹ۲⿪ʼʱ�䣨����ʱ������룩             */

	char                   strDateOfObservingEnding[32];                 /* ���ݹ۲��������(����������)                   */

	char                   strTimeOfObservingEnding[32];                 /* ���ݹ۲����ʱ�䣨����ʱ������룩             */

	char                   strDateOfDataCreating[32];                    /* ���ݴ�������(����������)                       */

	char                   strTimeOfDataCreating[32];                    /* ���ݴ���ʱ�䣨����ʱ������룩                 */

	char                   strDayOrNightFlag[8];                         /* ����ҹ���־                                   */

	unsigned int           dwOrbitNumber;                                /* �����                                         */

	unsigned short int     wOrbitPeriod;                                 /* �������                                       */

	char                   strOrbitDirection[8];                         /* �������                                       */

	unsigned char          cDataQuality;                                 /* �����������(0-5��)                            */

	int                    iNumberOfScans;                               /* ��ɨ������                                     */

	int                    iNumberOfDaymodescans;                        /* ����ģʽɨ������                               */

	int                    iNumberofNightmodescans;                      /* ����ģʽɨ������                               */

	int                    iIncompleteScans;                             /* ��������ɨ������                               */

	unsigned char          cQAScanFlag;                                  /* ɨ�������������롢��ɨ����                     */

	unsigned short int     wQAPixelFlag;                                 /* ��Ԫ���������롢��ɨ����                       */

	unsigned short int     wBeginLineNumber;                             /* ��ʼ�к�                                       */

	unsigned short int     wEndLineNumber;                               /* �����к�                                       */

	unsigned short int     wBeginPixelNumber;                            /* ��ʼ��Ԫ��                                     */

	unsigned short int     wEndPixelNumber;                              /* ������Ԫ��                                     */

	char                   strReferenceEllipsoidModelID[32];             /* ��������ο�����ϵID��WGS84��                  */

	double                 dEarthSunDistanceRatio;                       /* �յؾ����                                     */

	char                   strMeanAnomaly[12];                           /* ƽ���ص�ǣ��ȣ�                               */

	char                   strMeanMotion[12];                            /* ƽ���˶�                                       */

	char                   strEccentricity[12];                          /* ƫ����                                         */

	char                   strPerigeeArgument[12];                       /* ���ص㸩�ǣ��ȣ�                               */

	char                   strAscendingNodeLongitude[12];                /* ������ྭ���ȣ�                               */

	char                   strOrbitalInclination[12];                    /* �����ǣ��ȣ�                                 */

	char                   strEpochTime[12];                             /* ��Ԫʱ��                                       */

	float                  fOrbitPointLatitude[4];                       /* ���4���ǵ�γ��                                */

	float                  fOrbitPointLongitude[4];                      /* ���4���ǵ㾭��                                */

	char                   strAdditionalAnotation[1024];                 /* �ļ��ĸ���˵��(���Զ��ļ���ʹ�á������˵�˵��) */

	

	unsigned short int     iCountOfFrames;                               /* ��Ȧ����֡��                                                        */

	unsigned short int     iBeginningPacketNumber;                       /* ��Ȧ��ʼ�����                                                      */

	unsigned short int     iEndingPacketNumber;                          /* ��Ȧ���������                                                      */

	unsigned int           iBeginningTimeInSecond;                       /* ��Ȧ��ʼʱ��                                                        */

	unsigned int           iEndingTimeInSecond;                          /* ��Ȧ��ʼʱ��                                                        */

	int                    iBeginningTimeForSolarModeA1;                 /* ���䶨��ģʽ�۲⿪ʼʱ�䣨�ǰ壬û�У���999��                       */

	int                    iBeginningTimeForSolarModeA2;                 /* ���䶨��ģʽ�۲⿪ʼʱ�䣨�����壬û�У���999��                     */

	int                    iBeginningTimeForSolarModeA3;                 /* ���䶨��ģʽ�۲⿪ʼʱ�䣨�ο��壬û�У���999��                     */

	int                    iEndingTimeForSolarModeA1;                    /* ���䶨��ģʽ�۲����ʱ�䣨�ǰ壬û�У���999��                       */

	int                    iEndingTimeForSolarModeA2;                    /* ���䶨��ģʽ�۲����ʱ�䣨�����壬û�У���999��                     */

	int                    iEndingTimeForSolarModeA3;                    /* ���䶨��ģʽ�۲����ʱ�䣨�ο��壬û�У���999��                     */

	short int              iStatusOfWavelengthCalibrationMode;           /* ��������ģʽ�۲������0���ޣ�1���У���1���۲�ʧ�ܣ�                 */

	unsigned int           iCountForMissingPackets;                      /* ��ʧ���ݰ���                                                        */

	unsigned int           iCountForTimeSequenceError;                   /* ʱ��������                                                        */

	unsigned int           iCountForErrorsOfAtmosphericMeasurements;     /* �Ե�ģʽʧ�ܴ���                                                    */

	short int              iStatusOfSolarIrradianceFittingCoeffients;    /* ̫�����ն����ϵ�����������0��û���£�1�����³ɹ�����1������ʧ�ܣ� */

};

/* ���ֽ�����FY-3A SDS������Ϣ*/

struct FY3_L1B_SDS_INFO_CHAR

{

        char                   strUnits[12];                                 /*��ѧ���ݶ������ݵĵ�λ  			       */

        int                    iValidRange[2];                               /*��ѧ���ݶ������ݵ���Чֵ��Χ�����������С��Χ  */

        int                    iFillValue;                                   /*��ѧ���ݶ������ݵ���Ч���ֵ		       */

        float                  fIntercept;                                   /*��ѧ���ݶ������ݱ任�Ľؾ�		       */

        float                  fSlope;                                       /*��ѧ���ݶ������ݱ任��б��		       */

        char                   strLongName[128];                             /*��ѧ���ݶ������������  			       */

        char                   strBandName[128];                             /*��ѧ���ݶ���İ�����������  		       */

};

/* ˫�ֽ�����FY-3A SDS������Ϣ*/

struct FY3_L1B_SDS_INFO_SHORT

{

        char                   strUnits[12];                                 /*��ѧ���ݶ������ݵĵ�λ  			       */

        int                    iValidRange[2];                               /*��ѧ���ݶ������ݵ���Чֵ��Χ�����������С��Χ  */

        int                    iFillValue;                                   /*��ѧ���ݶ������ݵ���Ч���ֵ		       */

        float                  fIntercept;                                   /*��ѧ���ݶ������ݱ任�Ľؾ�		       */

        float                  fSlope;                                       /*��ѧ���ݶ������ݱ任��б��		       */

        char                   strLongName[128];                             /*��ѧ���ݶ������������  			       */

        char                   strBandName[128];                             /*��ѧ���ݶ���İ�����������  		       */

};

/* ���ֽ�����FY-3A SDS������Ϣ*/

struct FY3_L1B_SDS_INFO_INT

{

        char                   strUnits[12];                                 /*��ѧ���ݶ������ݵĵ�λ  			       */

        int                    iValidRange[2];                               /*��ѧ���ݶ������ݵ���Чֵ��Χ�����������С��Χ  */

        int                    iFillValue;                                   /*��ѧ���ݶ������ݵ���Ч���ֵ		       */

        float                  fIntercept;                                   /*��ѧ���ݶ������ݱ任�Ľؾ�		       */

        float                  fSlope;                                       /*��ѧ���ݶ������ݱ任��б��		       */

        char                   strLongName[128];                             /*��ѧ���ݶ������������  			       */

        char                   strBandName[128];                             /*��ѧ���ݶ���İ�����������  		       */

};

/* ���ֽ�����FY-3A SDS������Ϣ*/

struct FY3_L1B_SDS_INFO_LONG

{

        char                   strUnits[12];                                 /*��ѧ���ݶ������ݵĵ�λ  			       */

        long                   lValidRange[2];                               /*��ѧ���ݶ������ݵ���Чֵ��Χ�����������С��Χ  */

        long                   lFillValue;                                   /*��ѧ���ݶ������ݵ���Ч���ֵ		       */

        float                  fIntercept;                                   /*��ѧ���ݶ������ݱ任�Ľؾ�		       */

        float                  fSlope;                                       /*��ѧ���ݶ������ݱ任��б��		       */

        char                   strLongName[128];                             /*��ѧ���ݶ������������  			       */

	char                   strBandName[128];                             /*��ѧ���ݶ���İ�����������  		       */

};

/* ������FY-3A SDS������Ϣ*/

struct FY3_L1B_SDS_INFO_FLOAT

{

        char                   strUnits[12];                                 /*��ѧ���ݶ������ݵĵ�λ  			       */

        double                 dValidRange[2];                               /*��ѧ���ݶ������ݵ���Чֵ��Χ�����������С��Χ  */

        double                 dFillValue;                                   /*��ѧ���ݶ������ݵ���Ч���ֵ		       */

        double                 dIntercept;                                   /*��ѧ���ݶ������ݱ任�Ľؾ�		       */

        double                 dSlope;                                       /*��ѧ���ݶ������ݱ任��б��		       */

        char                   strLongName[128];                             /*��ѧ���ݶ������������  			       */

        char                   strBandName[128];                             /*��ѧ���ݶ���İ�����������  		       */

};

/* ˫������FY-3A SDS������Ϣ*/

struct FY3_L1B_SDS_INFO_DOUBLE

{

        char                   strUnits[12];                                 /*��ѧ���ݶ������ݵĵ�λ  			       */

        double                 dValidRange[2];                               /*��ѧ���ݶ������ݵ���Чֵ��Χ�����������С��Χ  */

        double                 dFillValue;                                   /*��ѧ���ݶ������ݵ���Ч���ֵ		       */

        double                 dIntercept;                                   /*��ѧ���ݶ������ݱ任�Ľؾ�		       */

        double                 dSlope;                                       /*��ѧ���ݶ������ݱ任��б��		       */

        char                   strLongName[128];                             /*��ѧ���ݶ������������  			       */

        char                   strBandName[128];                             /*��ѧ���ݶ���İ�����������  		       */

};

/* ɨ������L1������EV_RefSB SDS������Ϣ*/

struct FY3_L1B_SDS_INFO_VIRR_EV_RefSB

{

        char                   strUnits[12];                                 /*��ѧ���ݶ������ݵĵ�λ  			       */

        double                 dValidRange[2];                               /*��ѧ���ݶ������ݵ���Чֵ��Χ�����������С��Χ  */

        double                 dFillValue;                                   /*��ѧ���ݶ������ݵ���Ч���ֵ		       */

        double                 dIntercept[7];                                /*��ѧ���ݶ������ݱ任�Ľؾ�		       */

        double                 dSlope[7];                                    /*��ѧ���ݶ������ݱ任��б��		       */

        char                   strLongName[128];                             /*��ѧ���ݶ������������  			       */

        char                   strBandName[128];                             /*��ѧ���ݶ���İ�����������  		       */        

};

/* ɨ������L1������EV_Emissive SDS������Ϣ*/

struct FY3_L1B_SDS_INFO_VIRR_EV_Emissive

{

        char                   strUnits[12];                                 /*��ѧ���ݶ������ݵĵ�λ  			       */

        double                 dValidRange[2];                               /*��ѧ���ݶ������ݵ���Чֵ��Χ�����������С��Χ  */

        double                 dFillValue;                                   /*��ѧ���ݶ������ݵ���Ч���ֵ		       */

        double                 dIntercept[3];                                /*��ѧ���ݶ������ݱ任�Ľؾ�		       */

        double                 dSlope[3];                                    /*��ѧ���ݶ������ݱ任��б��		       */

        char                   strLongName[128];                             /*��ѧ���ݶ������������  			       */

        char                   strBandName[128];                             /*��ѧ���ݶ���İ�����������  		       */        

};

/* MERSI 250M L1������EV_RefSB SDS������Ϣ*/

struct FY3_L1B_SDS_INFO_MERSI250M_EV_RefSB

{

        char                   strUnits[12];                                 /*��ѧ���ݶ������ݵĵ�λ  			       */

        double                 dValidRange[2];                               /*��ѧ���ݶ������ݵ���Чֵ��Χ�����������С��Χ  */

        double                 dFillValue;                                   /*��ѧ���ݶ������ݵ���Ч���ֵ		       */

        double                 dIntercept[4];                                /*��ѧ���ݶ������ݱ任�Ľؾ�		       */

        double                 dSlope[4];                                    /*��ѧ���ݶ������ݱ任��б��		       */

        char                   strLongName[128];                             /*��ѧ���ݶ������������  			       */

        char                   strBandName[128];                             /*��ѧ���ݶ���İ�����������  		       */        

};

/* MERSI 250M L1������EV_Emissive SDS������Ϣ*/

struct FY3_L1B_SDS_INFO_MERSI250M_EV_Emissive

{

        char                   strUnits[12];                                 /*��ѧ���ݶ������ݵĵ�λ  			       */

        double                 dValidRange[2];                               /*��ѧ���ݶ������ݵ���Чֵ��Χ�����������С��Χ  */

        double                 dFillValue;                                   /*��ѧ���ݶ������ݵ���Ч���ֵ		       */

        double                 dIntercept[4];                                /*��ѧ���ݶ������ݱ任�Ľؾ�		       */

        double                 dSlope[4];                                    /*��ѧ���ݶ������ݱ任��б��		       */

        char                   strLongName[128];                             /*��ѧ���ݶ������������  			       */

        char                   strBandName[128];                             /*��ѧ���ݶ���İ�����������  		       */        

};

/* MERSI 1000M L1������EV_250_Aggr1km_RefSB SDS������Ϣ*/

struct FY3_L1B_SDS_INFO_MERSI1000M_EV_RefSB

{

        char                   strUnits[12];                                 /*��ѧ���ݶ������ݵĵ�λ  			       */

        double                 dValidRange[2];                               /*��ѧ���ݶ������ݵ���Чֵ��Χ�����������С��Χ  */

        double                 dFillValue;                                   /*��ѧ���ݶ������ݵ���Ч���ֵ		       */

        double                 dIntercept[4];                                /*��ѧ���ݶ������ݱ任�Ľؾ�		       */

        double                 dSlope[4];                                    /*��ѧ���ݶ������ݱ任��б��		       */

        char                   strLongName[128];                             /*��ѧ���ݶ������������  			       */

        char                   strBandName[128];                             /*��ѧ���ݶ���İ�����������  		       */             

};

/* MERSI 1000M L1������EV_Emissive SDS������Ϣ*/

struct FY3_L1B_SDS_INFO_MERSI1000M_EV_Emissive

{

        char                   strUnits[12];                                 /*��ѧ���ݶ������ݵĵ�λ  			       */

        double                 dValidRange[2];                               /*��ѧ���ݶ������ݵ���Чֵ��Χ�����������С��Χ  */

        double                 dFillValue;                                   /*��ѧ���ݶ������ݵ���Ч���ֵ		       */

        double                 dIntercept[15];                               /*��ѧ���ݶ������ݱ任�Ľؾ�		       */

        double                 dSlope[15];                                   /*��ѧ���ݶ������ݱ任��б��		       */

        char                   strLongName[128];                             /*��ѧ���ݶ������������  			       */

        char                   strBandName[128];                             /*��ѧ���ݶ���İ�����������  		       */        

};

/* FY-3A VASS L1������ */

struct FY3_VASS_L1B_FILE_INFO

{

	char                   strSatelliteName[8];                          /* �������ƣ���FY-3A�ȣ�                          */

	char                   strSensorName[128];                           /* ��������  "Earth Radiation Measurement"        */

	char                   strSensorIdentificationCode[12];              /* ���������루��ERM��                           */

	char                   strDatasetName[64];                           /* ���ݼ����ƣ���Global ERM Data��                            */

	char                   strFileName[256];                             /* �ļ�����                                       */

	char                   strFileAliasName[256];                        /* �ļ�����                                       */

	char                   strResponser[32];                             /* ��Ʒ���ɵأ�NSMC��                             */

	char                   strVersionOfSoftware[32];                     /* ��������汾��(��V1.0.0)                       */

	char                   strDateOfSoftwareRevision[32];                /* ���������������                               */

	char                   strVersionOfCoefficientIndex[32];             /* ����ϵ���汾��                                 */

	char                   strDateOfCoefficientIndexRevision[32];        /* ����ϵ����������                               */

	char                   strDateOfObservingBeginning[32];              /* ���ݹ۲⿪ʼ����(����������)                   */

	char                   strTimeOfObservingBeginning[32];              /* ���ݹ۲⿪ʼʱ�䣨����ʱ������룩             */

	char                   strDateOfObservingEnding[32];                 /* ���ݹ۲��������(����������)                   */

	char                   strTimeOfObservingEnding[32];                 /* ���ݹ۲����ʱ�䣨����ʱ������룩             */

	char                   strDateOfDataCreating[32];                    /* ���ݴ�������(����������)                       */

	char                   strTimeOfDataCreating[32];                    /* ���ݴ���ʱ�䣨����ʱ������룩                 */

	char                   strDayOrNightFlag[8];                         /* ����ҹ���־                                   */

	unsigned int           dwOrbitNumber;                                /* �����                                         */

	unsigned short int     wOrbitPeriod;                                 /* �������                                       */

	char                   strOrbitDirection[8];                         /* �������                                       */

	unsigned char          cDataQuality;                                 /* �����������(1-5��)                            */

	unsigned int           iNumberOfScans;                               /* ��ɨ����                                       */

	unsigned int           iNumberOfDaymodescans;                        /* ����ģʽɨ����                                 */

	unsigned int           iNumberofNightmodescans;                      /* ����ģʽɨ����                                 */

	unsigned int           iIncompleteScans;                             /* ��������ɨ����                                 */

	unsigned char          cQAScanFlag[2000];                            /* ɨ�������������롢��ɨ����                     */

	unsigned short int     wQAPixelFlag[2000];                           /* ��Ԫ���������롢��ɨ����                       */

	unsigned short int     wBeginLineNumber;                             /* ��ʼ�к�                                       */

	unsigned short int     wEndLineNumber;                               /* �����к�                                       */

	unsigned short int     wBeginPixelNumber;                            /* ��ʼ��Ԫ��                                     */

	unsigned short int     wEndPixelNumber;                              /* ������Ԫ��                                     */

	char                   strReferenceEllipsoidModelID[12];             /* ��������ο�����ϵID��WGS84��                  */

	double                 dEarthSunDistanceRatio;                       /* �յؾ����                                     */

	

	double                 dWGS84a;                                      /* ���򳤰���                                     */

	double                 dWGS84b;                                      /* ����̰���                                     */

	double                 dWGS84Oblateness;                             /* �����ƽ��                                     */

	char                   strSatID[12];                                 /* �Ǳ�                                           */

	char                   strOrbit[12];                                 /* �����                                         */

	char                   strMeanAnomaly[12];                           /* ƽ�����                                       */

	char                   strMeanMotion[12];                            /* �������                                       */

	char                   strDecay[12];                                 /* ˥��                                           */

	char                   strEccentricity[12];                          /* ƫ����                                         */

	char                   strPerigeeArgument[12];                       /* ���ص㸩��                                     */

	char                   strAscendingNodeLongitude[12];                /* ������ྭ                                     */

	char                   strOrbitalInclination[12];                    /* ������                                       */

	char                   strEpochTime[12];                             /* ��Ԫʱ��                                       */

	                                 

	float                  fOrbitPointLatitude[4];                       /* ���4���ǵ�γ��                                */

	float                  fOrbitPointLongitude[4];                      /* ���4���ǵ㾭��                                */

	char                   strAdditionalAnotation[1024];                 /* �ļ��ĸ���˵��(���Զ��ļ���ʹ�á������˵�˵��) */

	

	unsigned short int     wPackageID;                                   /* ���ݰ���ʶ                                                                                    */

	unsigned short int     wClockUpdateIndicator;                        /* ʱ�Ӹ���ָʾ(0 = none during this orbit; otherwise the record number of the first occurrence) */

	unsigned short int     wTimeSequenceErrors;                          /* ʱ���������                                                                                  */

	unsigned short int     wMissingScanLines;                            /* ������                                                                                        */

	unsigned short int     wCalibratedEarthLocatedScanLines;             /* �������Ԥ�����ɨ������                                                                      */

	unsigned short int     wRealTimeCaliScans;                           /* ����ڹ춨������                                                                              */

	unsigned short int     wUsingReferenceCaliCoefScans;                 /* ʹ�òο�����ϵ������                                                                          */

	char                   strVersionofReferencedCoefficient[32];        /* �ο�����ϵ���汾��                                                                            */

	char                   strDateOfReferencedCoefficientVersion[32];    /* �ο�����ϵ����������                                                                          */

	char                   strVersionOfBandCorrection[32];               /* ���������ݰ汾��                                                                            */

	char                   strDateOfBandCorrectionVersion[32];           /* ���������ݸ�������                                                                          */

	char                   strVersionOfBasefile[32];                     /* ��������������ݰ汾��                                                                        */

	char                   strDateOfBaseFileVersion[32];                 /* ��������������ݸ�������                                                                      */

	float                  fIraCentralWn[26];                            /* ͨ�����Ĳ���                                                                                  */

	float                  fIraBdCorCoef[40];                            /* �Ⱥ���ͨ��������ϵ��                                                                        */

	float                  fIraRefCalCoef[3];                            /* �ο�����ϵ��������,б��,�ؾ�                                                                  */

	float                  fCalCoefSlopeAve;                             /* ���ݸ���ʱ�ζ���ϵ��б��ƽ��ֵ                                                                */

	float                  fCalCoefSlopeStd;                             /* ���ݸ���ʱ�ζ���ϵ��б�ʱ�׼��                                                                */

	float                  fCalCoefInterAve;                             /* ���ݸ���ʱ�ζ���ϵ���ؾ�ƽ��ֵ                                                                */

	float                  fCalCoefInterStd;                             /* ���ݸ���ʱ�ζ���ϵ���ؾ��׼��                                                                */

	float                  fIraPrtNb;                                    /* PRT����                                                                                       */

	float                  fIraDisconNb;                                 /* �ܵ�������Ⱦ����ղ����                                                                      */

	float                  fIraPrtConvCoef[8];                           /* PRT�¶�ת��ϵ��                                                                               */

	float                  fIraMuduConvCoef[10];                         /* �������¶�ת��ϵ��                                                                            */

	float                  fIraWheelConvCoef[10];                        /* �˹����¶�ת��ϵ��                                                                            */

	float                  fIraMirrorConvCoef;                           /* ɨ�辵�¶�ת��ϵ��                                                                            */

	float                  fIraMainOpticConvCoef;                        /* ����ѧ�¶�ת��ϵ��                                                                            */

	float                  fIraRelayOpticConvCoef;                       /* �м̹�ѧ�¶�ת��ϵ��                                                                          */

	float                  fIraBoardConvCoef;                            /* ͷ�������¶�ת��ϵ��                                                                          */

	float                  fIraBoxConvCoef;                              /* ��Ϣ�������¶�ת��ϵ��                                                                        */

	float                  fIraColder2TempAve;                           /* ���ݸ���ʱ�ζ�������¶�ƽ��ֵ                                                                */

	float                  fIraColder2TempStd;                           /* ���ݸ���ʱ�ζ�������¶ȱ�׼��                                                                */

	float                  fIraWheelTempAve;                             /* ���ݸ���ʱ���˹����¶�ƽ��ֵ                                                                  */

	float                  fIraWheelTempStd;                             /* ���ݸ���ʱ���˹����¶ȱ�׼��                                                                  */

	float                  fIraModulatorTempAve;                         /* ���ݸ���ʱ�ε������¶�ƽ��ֵ                                                                  */

	float                  fIraModulatorTempStd;                         /* ���ݸ���ʱ�ε������¶ȱ�׼��                                                                  */

	float                  fIraBBTtempAve;                               /* ���ݸ���ʱ�κ����¶�ƽ��ֵ                                                                    */

	float                  fIraBBTempStd;                                /* ���ݸ���ʱ�κ����¶ȱ�׼��                                                                    */

	float                  fIraMirrorTempAve;                            /* ���ݸ���ʱ��ɨ�辵�¶�ƽ��ֵ                                                                  */

	float                  fIraMainOpticalTempAve;                       /* ���ݸ���ʱ������ѧ�¶�ƽ��ֵ                                                                  */

	float                  fIraRelayOpticTempAve;                        /* ���ݸ���ʱ���м̹�ѧ�¶�ƽ��ֵ                                                                */

	float                  fIraBoardTempAve;                             /* ���ݸ���ʱ��ͷ�������¶�ƽ��ֵ                                                                */

	float                  fIraBoxTempAve;                               /* ���ݸ���ʱ����Ϣ�������¶�ƽ��ֵ                                                              */

};                                                                         

/* FY-3C L2L3��Ʒ���� */

struct FY3_L2L3_FILE_INFO

{

	char                   strSatelliteName[8];                          /* �������ƣ���FY-3C�ȣ�                          */

	char                   strDatasetName[64];                           /* ���ݼ����ƣ���Cloud Mask��                     */

	char                   strFileName[256];                             /* �ļ�����                                       */

	char                   strFileAliasName[256];                        /* �ļ�����                                       */

	char                   strSensorName[128];                           /* ��������  "Earth Radiation Measurement"        */

	char		               strDatasetArea[12];			                     /* ���ݼ����� ����Global��Orbit�ȣ�               */	

	char                   strDataLevel[8];                              /* ���ݼ���(Level_2��Lever_3)                     */	               

	char                   strVersionOfSoftware[32];                     /* ��������汾��(��V1.0.0)                       */

	char                   strDateOfSoftwareRevision[32];                /* ���������������                               */

	char                   strDateOfObservingBeginning[32];              /* ���ݹ۲⿪ʼ����(����������)                   */

	char                   strTimeOfObservingBeginning[32];              /* ���ݹ۲⿪ʼʱ�䣨����ʱ������룩             */

	char                   strDateOfObservingEnding[32];                 /* ���ݹ۲��������(����������)                   */

	char                   strTimeOfObservingEnding[32];                 /* ���ݹ۲����ʱ�䣨����ʱ������룩             */

	char                   strDateOfDataCreating[32];                    /* ���ݴ�������(����������)                       */

	char                   strTimeOfDataCreating[32];                    /* ���ݴ���ʱ�䣨����ʱ������룩                 */

	char                   strTimeOfDataComposed[12];                    /* ����ʱ���ա��Ѯ���ºϳɵı�־(��Hour��Day��)*/
//Modified By Fanbo , 20130802 , Begin (unsigned int -> unsigned short int)
	unsigned short int     iNumberOfDataLevel;                           /* ���ݲ���(��ʾ�����м���ͨ���򼸿��)           */
//Modified By Fanbo , 20130802 , End
	char                   strProjectionType[128];                       /* ͶӰ����                                       */

	float                  fLatitudeOfLeftTop;                           /* ���Ͻ�γ��                                     */ 

	float                  fLongitudeLeftTop;                            /* ���ϽǾ���                                     */

	float                  fLatitudeRightTop;                            /* ���Ͻ�γ��                                     */

	float                  fLongitudeRightTop;                           /* ���ϽǾ���                                     */

	float                  fLatitudeLeftBottom;                          /* ���½�γ��                                     */

	float                  fLongitudeLeftBottom;                         /* ���½Ǿ���                                     */

	float                  fLatitudeRightBottom;                         /* ���½�γ��                                     */

	float                  fLongitudeRightBottom;                        /* ���½Ǿ���                                     */
//Modified By Fanbo , 20130802 , Begin
	char                   strCoordinateUnit[12];                        /* ���굥λ                                       */
//Modified By Fanbo , 20130802 , End
	float                  fProjectionCenterLatitude;                    /* ͶӰ����γ��                                   */

	float                  fProjectionCenterLongitude;                   /* ͶӰ���ľ���                                   */

	float                  fStandardProjectionLatitude1;                 /* ��׼ͶӰγ��1                                  */

	float                  fStandardProjectionLatitude2;                 /* ��׼ͶӰγ��2                                  */

	float                  fStandardProjectionLongitude;                 /* ��׼ͶӰ����                                   */

	char                   strResolutionUnit[12];                        /* �ֱ��ʵ�λ(��meter,degree)                     */

	float                  fLongitudeResolution;                         /* ����ֱ���                                     */

	float                  fLatitudeResolution;                          /* γ��ֱ���                                     */

	unsigned int           iDataLines;                                   /* ��������                                       */

	unsigned int           iDataPixels;                                  /* ��������                                       */
//Modified By Fanbo , 20130802 , Begin
	char                   strProjectionAnnotation[1024];                /* ͶӰ����˵��                                   */

	unsigned char          cL1DataQuality;                               /* L1�����������                                 */
	
	unsigned char          cDataQuality;                                 /* �����������                                   */
	
	char                   strDataQualityAnnotation[1024];               /* �����������˵��                               */
//Modified By Fanbo , 20130802 , End
	char                   strProductCreator[128];                       /* ��Ʒ������                                     */

	char                   strProgrammer[128];                           /* ���������                                     */

	char                   strAdditionalAnotation[1024];                 /* �ļ��ĸ���˵��(���Զ��ļ���ʹ�á������˵�˵��) */																							

};


struct FY3_PrjLut_FILE_INFO

{

	char                   strSatelliteName[8];                          /* �������ƣ���FY-3C�ȣ�                          */
//Modified By Fanbo , 20130807 , Begin
//	char                   strSensorIdentificationCode[12];              /* ���������루��VIRR��                           */
//Modified By Fanbo , 20130807 , End
	char                   strDatasetName[64];                           /* ���ݼ����ƣ���MPT��                            */

	char                   strFileName[256];                             /* �ļ�����                                       */

	char                   strFileAliasName[256];                        /* �ļ�����                                       */

	char                   strSensorName[128];                           /* ��������  "Earth Radiation Measurement"        */

	char                   strDatasetArea[12];                           /* ���ݼ����� ����Global��Orbit�ȣ�               */	

	char                   strDataLevel[8];                              /* ���ݼ���(Level_2��Lever_3)                     */	               

	char                   strVersionOfSoftware[32];                     /* ��������汾��(��V1.0.0)                       */

	char                   strDateOfSoftwareRevision[32];                /* ���������������                               */

	char                   strDateOfObservingBeginning[32];              /* ���ݹ۲⿪ʼ����(����������)                   */

	char                   strTimeOfObservingBeginning[32];              /* ���ݹ۲⿪ʼʱ�䣨����ʱ������룩             */

	char                   strDateOfObservingEnding[32];                 /* ���ݹ۲��������(����������)                   */

	char                   strTimeOfObservingEnding[32];                 /* ���ݹ۲����ʱ�䣨����ʱ������룩             */

	char                   strDateOfDataCreating[32];                    /* ���ݴ�������(����������)                       */

	char                   strTimeOfDataCreating[32];                    /* ���ݴ���ʱ�䣨����ʱ������룩                 */

	char                   strTimeOfDataComposed[12];                    /* ����ʱ���ա��Ѯ���ºϳɵı�־(��Hour��Day��)*/

	unsigned int           iNumberOfDataLevel;                           /* ���ݲ���(��ʾ�����м���ͨ���򼸿��)           */

	char                   strProjectionType[128];                       /* ͶӰ����                                       */

	float                  fLatitudeOfLeftTop;                           /* ���Ͻ�γ��                                     */ 

	float                  fLongitudeLeftTop;                            /* ���ϽǾ���                                     */

	float                  fLatitudeRightTop;                            /* ���Ͻ�γ��                                     */

	float                  fLongitudeRightTop;                           /* ���ϽǾ���                                     */

	float                  fLatitudeLeftBottom;                          /* ���½�γ��                                     */

	float                  fLongitudeLeftBottom;                         /* ���½Ǿ���                                     */

	float                  fLatitudeRightBottom;                         /* ���½�γ��                                     */

	float                  fLongitudeRightBottom;                        /* ���½Ǿ���                                     */

	float                  fProjectionCenterLatitude;                    /* ͶӰ����γ��                                   */

	float                  fProjectionCenterLongitude;                   /* ͶӰ���ľ���                                   */

	float                  fStandardProjectionLatitude1;                 /* ��׼ͶӰγ��1                                  */

	float                  fStandardProjectionLatitude2;                 /* ��׼ͶӰγ��2                                  */

	float                  fStandardProjectionLongitude;                 /* ��׼ͶӰ����                                   */

	char                   strResolutionUnit[12];                        /* �ֱ��ʵ�λ(��meter,degree)                     */

	float                  fLongitudeResolution;                         /* ͶӰˮƽ�ֱ���                                 */

	float                  fLatitudeResolution;                          /* ͶӰ��ֱ�ֱ���                                 */

	unsigned int           iTopLeftOffsetX;                              /* ���Ͻǵ���ȫ��ͼ�е��к�                       */

	unsigned int           iTopLeftOffsetY;                              /* ���Ͻǵ���ȫ��ͼ�е��к�                       */

	unsigned int           iDataLines;                                   /* ��������                                       */

	unsigned int           iDataPixels;                                  /* ��������                                       */

	char                   strProductCreator[128];                       /* ��Ʒ������                                     */

	char                   strProgrammer[128];                           /* ���������                                     */

	char                   strAdditionalAnotation[1024];                 /* �ļ��ĸ���˵��(���Զ��ļ���ʹ�á������˵�˵��) */

};


#pragma pack (pop)


#endif /*FY3L1BHEADER_H*/





