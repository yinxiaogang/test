#ifndef FY3L1BHEADER_H

#define FY3L1BHEADER_H



#pragma pack (push)

#pragma pack (1)

#include <string>
using namespace std;

/* FY3地球辐射收支仪L1级数据 */

struct FY3_ERM_L1B_FILE_INFO

{

	char                   strSatelliteName[8];                          /* 卫星名称（如FY-3C等）                          */

	char                   strSensorName[128];                           /* 仪器名称  "Earth Radiation Measurement"        */

	char                   strSensorIdentificationCode[12];              /* 传感器代码（如ERM）                            */

	char                   strDatasetName[64];                           /* 数据集名称（如Global ERM Data）                */

	char                   strFileName[256];                             /* 文件名称                                       */

	char                   strFileAliasName[256];                        /* 文件别名                                       */

	char                   strResponser[32];                             /* 产品生成地（NSMC）                             */

	char                   strVersionOfSoftware[32];                     /* 处理软件版本号(如V1.0.0)                       */

	char                   strDateOfSoftwareRevision[32];                /* 处理软件更新日期                               */

	char                   strVersionOfCoefficientIndex[32];             /* 定标系数版本号                                 */

	char                   strDateOfCoefficientIndexRevision[32];        /* 定标系数更新日期                               */

	char                   strDateOfObservingBeginning[32];              /* 数据观测开始日期(包括年月日)                   */

	char                   strTimeOfObservingBeginning[32];              /* 数据观测开始时间（包括时分秒毫秒）             */

	char                   strDateOfObservingEnding[32];                 /* 数据观测结束日期(包括年月日)                   */

	char                   strTimeOfObservingEnding[32];                 /* 数据观测结束时间（包括时分秒毫秒）             */

	char                   strDateOfDataCreating[32];                    /* 数据创建日期(包括年月日)                       */

	char                   strTimeOfDataCreating[32];                    /* 数据创建时间（包括时分秒毫秒）                 */

	char                   strDayOrNightFlag[8];                         /* 白天夜间标志                                   */

	unsigned int           dwOrbitNumber;                                /* 轨道号                                         */

	unsigned short int     wOrbitPeriod;                                 /* 轨道周期                                       */

	char                   strOrbitDirection[8];                         /* 轨道方向                                       */

	unsigned char          cDataQuality;                                 /* 数据质量标记(0-5级)                            */

	int                    iNumberOfScans;                               /* 总扫描线数                                     */

	int                    iNumberOfDaymodescans;                        /* 白天模式扫描线数                               */

	int                    iNumberofNightmodescans;                      /* 晚上模式扫描线数                               */

	int                    iIncompleteScans;                             /* 不完整的扫描线数                               */

	unsigned char          cQAScanFlag;                                  /* 扫描线质量检验码、按扫描线                     */

	unsigned short int     wQAPixelFlag;                                 /* 象元质量检验码、按扫描线                       */

	unsigned short int     wBeginLineNumber;                             /* 起始行号                                       */

	unsigned short int     wEndLineNumber;                               /* 结束行号                                       */

	unsigned short int     wBeginPixelNumber;                            /* 起始象元号                                     */

	unsigned short int     wEndPixelNumber;                              /* 结束象元号                                     */

	unsigned char          strReferenceEllipsoidModelID;                 /* 地球椭球参考坐标系ID（WGS84）                  */

	double                 dEarthSunDistanceRatio;                       /* 日地距离比                                     */

	char                   strMeanAnomaly[12];                           /* 平近地点角（度）                               */

	char                   strMeanMotion[12];                            /* 平均运动                                       */

	char                   strEccentricity[12];                          /* 偏心率                                         */

	char                   strPerigeeArgument[12];                       /* 近地点俯角（度）                               */

	char                   strAscendingNodeLongitude[12];                /* 升交点赤经（度）                               */

	char                   strOrbitalInclination[12];                    /* 轨道倾角（度）                                 */

	char                   strEpochTime[12];                             /* 历元时间                                       */
  
	float                  fOrbitPointLatitude[4];                       /* 轨道4个角点纬度                                */

	float                  fOrbitPointLongitude[4];                      /* 轨道4个角点经度                                */

	char                   strAdditionalAnotation[1024];                 /* 文件的附加说明(可以对文件的使用、创建人等说明) */

                                                                             

	long                   iCalibrationStartTime[4];                     /* 探测通道定标开始时间                           */																													

	long                   iCalibrationEndTime[4];                       /* 探测通道定标结束时间                           */																													

	int                    iCalibrationNscans;                           /* 在轨定标观测的源包个数                         */

	unsigned char          cOperationalTempFlag[2000];                   /* 仪器工作温度标识                               */

	float                  fCountToTadianceCoefficientPrecal[16];        /* 在轨定标前探测通道辐射标定系数                 */																													

	float                  fCountToRadianceCoefficientAftercal[16];      /* 在轨定标后探测通道辐射标定系数                 */																													

	float                  fStaticAnalysisOfEnginerringData[48];         /* 在轨工程遥测数据的统计分析                     */																													

};

/* FY3地球辐射收支仪L1_OBC数据 */

struct FY3_ERMOBC_L1B_FILE_INFO

{

	char                   strSatelliteName[8];                          /* 卫星名称（如FY-3C等）                          */

	char                   strSensorName[128];                           /* 仪器名称  "Earth Radiation Measurement"        */

	char                   strSensorIdentificationCode[12];              /* 传感器代码（如ERM）                            */

	char                   strDatasetName[64];                           /* 数据集名称（如Global ERM Data）                */

	char                   strFileName[256];                             /* 文件名称                                       */

	char                   strFileAliasName[256];                        /* 文件别名                                       */

	char                   strResponser[32];                             /* 产品生成地（NSMC）                             */

	char                   strVersionOfSoftware[32];                     /* 处理软件版本号(如V1.0.0)                       */

	char                   strDateOfSoftwareRevision[32];                /* 处理软件更新日期                               */

	char                   strVersionOfCoefficientIndex[32];             /* 定标系数版本号                                 */

	char                   strDateOfCoefficientIndexRevision[32];        /* 定标系数更新日期                               */

	char                   strDateOfObservingBeginning[32];              /* 数据观测开始日期(包括年月日)                   */

	char                   strTimeOfObservingBeginning[32];              /* 数据观测开始时间（包括时分秒毫秒）             */

	char                   strDateOfObservingEnding[32];                 /* 数据观测结束日期(包括年月日)                   */

	char                   strTimeOfObservingEnding[32];                 /* 数据观测结束时间（包括时分秒毫秒）             */

	char                   strDateOfDataCreating[32];                    /* 数据创建日期(包括年月日)                       */

	char                   strTimeOfDataCreating[32];                    /* 数据创建时间（包括时分秒毫秒）                 */

	char                   strDayOrNightFlag[8];                         /* 白天夜间标志                                   */

	unsigned int           dwOrbitNumber;                                /* 轨道号                                         */

	unsigned short int     wOrbitPeriod;                                 /* 轨道周期                                       */

	char                   strOrbitDirection[8];                         /* 轨道方向                                       */

	unsigned char          cDataQuality;                                 /* 数据质量标记(0-5级)                            */

	int                    iNumberOfScans;                               /* 总扫描数                                       */

	int                    iNumberOfDaymodescans;                        /* 白天模式扫描数                                 */

	int                    iNumberofNightmodescans;                      /* 晚上模式扫描数                                 */

	int                    iIncompleteScans;                             /* 不完整的扫描数                                 */

	unsigned char          cQAScanFlag;                                  /* 扫描线质量检验码、按扫描线                     */

	unsigned short int     wQAPixelFlag;                                 /* 象元质量检验码、按扫描线                       */

	unsigned short int     wBeginLineNumber;                             /* 起始行号                                       */

	unsigned short int     wEndLineNumber;                               /* 结束行号                                       */

	unsigned short int     wBeginPixelNumber;                            /* 起始象元号                                     */

	unsigned short int     wEndPixelNumber;                              /* 结束象元号                                     */

	unsigned char          strReferenceEllipsoidModelID;                 /* 地球椭球参考坐标系ID（WGS84）                  */

	double                 dEarthSunDistanceRatio;                       /* 日地距离比                                     */

	char                   strMeanAnomaly[12];                           /* 平近地点角（度）                               */

	char                   strMeanMotion[12];                            /* 平均运动                                       */

	char                   strEccentricity[12];                          /* 偏心率                                         */

	char                   strPerigeeArgument[12];                       /* 近地点俯角（度）                               */

	char                   strAscendingNodeLongitude[12];                /* 升交点赤经（度）                               */

	char                   strOrbitalInclination[12];                    /* 轨道倾角（度）                                 */

	char                   strEpochTime[12];                             /* 历元时间                                       */
	

	float                  fOrbitPointLatitude[4];                       /* 轨道4个角点纬度                                */

	float                  fOrbitPointLongitude[4];                      /* 轨道4个角点经度                                */

	char                   strAdditionalAnotation[1024];                 /* 文件的附加说明(可以对文件的使用、创建人等说明) */

                                                                             

	long                   iCalibrationStartTime[4];                     /* 探测通道定标开始时间                           */																													

	long                   iCalibrationEndTime[4];                       /* 探测通道定标结束时间                           */																													

	int                    iCalibrationNscans;                           /* 在轨定标观测的源包个数                         */

	unsigned char          cOperationalTempFlag[2000];                   /* 仪器工作温度标识                               */

	float                  fCountToTadianceCoefficientPrecal[16];        /* 在轨定标前探测通道辐射标定系数                 */																													

	float                  fCountToRadianceCoefficientAftercal[16];      /* 在轨定标后探测通道辐射标定系数                 */																													

	float                  fStaticAnalysisOfEnginerringData[48];         /* 在轨工程遥测数据的统计分析                     */																													

};

/* FY3红外分光计L1级数据 */

struct FY3_IRAS_L1B_FILE_INFO

{

	char                   strSatelliteName[8];                          /* 卫星名称（如FY-3C等）                          */

	char                   strSensorName[128];                           /* 仪器名称  "InfraRed Atmospheric Sounder"       */

	char                   strSensorIdentificationCode[12];              /* 传感器代码（如IRAS）                           */

	char                   strDatasetName[64];                           /* 数据集名称（如Global IRAS Data）               */

	char                   strFileName[256];                             /* 文件名称                                       */

	char                   strFileAliasName[256];                        /* 文件别名                                       */

	char                   strResponser[32];                             /* 产品生成地（NSMC）                             */

	char                   strVersionOfSoftware[32];                     /* 处理软件版本号(如V1.0.0)                       */

	char                   strDateOfSoftwareRevision[32];                /* 处理软件更新日期                               */

	char                   strVersionOfCoefficientIndex[32];             /* 定标系数版本号                                 */

	char                   strDateOfCoefficientIndexRevision[32];        /* 定标系数更新日期                               */

	char                   strDateOfObservingBeginning[32];              /* 数据观测开始日期(包括年月日)                   */

	char                   strTimeOfObservingBeginning[32];              /* 数据观测开始时间（包括时分秒毫秒）             */

	char                   strDateOfObservingEnding[32];                 /* 数据观测结束日期(包括年月日)                   */

	char                   strTimeOfObservingEnding[32];                 /* 数据观测结束时间（包括时分秒毫秒）             */

	char                   strDateOfDataCreating[32];                    /* 数据创建日期(包括年月日)                       */

	char                   strTimeOfDataCreating[32];                    /* 数据创建时间（包括时分秒毫秒）                 */

	char                   strDayOrNightFlag[8];                         /* 白天夜间标志                                   */

	unsigned int           dwOrbitNumber;                                /* 轨道号                                         */

	unsigned short int     wOrbitPeriod;                                 /* 轨道周期                                       */

	char                   strOrbitDirection[8];                         /* 轨道方向                                       */

	unsigned char          cDataQuality;                                 /* 数据质量标记(0-5级)                            */

	int                    iNumberOfScans;                               /* 总扫描数                                       */

	int                    iNumberOfDaymodescans;                        /* 白天模式扫描数                                 */

	int                    iNumberofNightmodescans;                      /* 晚上模式扫描数                                 */

	int                    iIncompleteScans;                             /* 不完整的扫描数                                 */
 
	unsigned char          cQAScanFlag;                                  /* 扫描线质量检验码、按扫描线                     */

	unsigned short int     wQAPixelFlag;                                 /* 象元质量检验码、按扫描线                       */

	unsigned short int     wBeginLineNumber;                             /* 起始行号                                       */

	unsigned short int     wEndLineNumber;                               /* 结束行号                                       */

	unsigned short int     wBeginPixelNumber;                            /* 起始象元号                                     */

	unsigned short int     wEndPixelNumber;                              /* 结束象元号                                     */

	char                   strReferenceEllipsoidModelID;                 /* 地球椭球参考坐标系ID（WGS84）                  */

	double                 dEarthSunDistanceRatio;                       /* 日地距离比                                     */

	char                   strMeanAnomaly[12];                           /* 平近地点角（度）                               */

	char                   strMeanMotion[12];                            /* 平均运动                                       */

	char                   strEccentricity[12];                          /* 偏心率                                         */

	char                   strPerigeeArgument[12];                       /* 近地点俯角（度）                               */

	char                   strAscendingNodeLongitude[12];                /* 升交点赤经（度）                               */

	char                   strOrbitalInclination[12];                    /* 轨道倾角（度）                                 */

	char                   strEpochTime[12];                             /* 历元时间                                       */
	
	float                  fOrbitPointLatitude[4];                       /* 轨道4个角点纬度                                */

	float                  fOrbitPointLongitude[4];                      /* 轨道4个角点经度                                */

	char                   strAdditionalAnotation[1024];                 /* 文件的附加说明(可以对文件的使用、创建人等说明) */


	unsigned short int     wClockUpdateIndicator;                        /* 时钟更新指示(0 = none during this orbit; otherwise the record number of the first occurrence) */

	unsigned short int     wTimeSequenceErrors;                          /* 时序出错线数                                                                                  */

	unsigned short int     wMissingScanLines;                            /* 丢线数                                                                                        */

	unsigned short int     wCountOfCalFailScanlines;                     /* 定标失败扫描线数                                                                              */
	
	unsigned short int     wCountOfGeoFailScanlines;                     /* 定位失败扫描线数                                                                              */

	unsigned short int     wRealTimeCaliScans;                           /* 完成在轨定标线数                                                                              */

	unsigned short int     wUsingReferenceCaliCoefScans;                 /* 使用参考定标系数线数                                                                          */

	char                   strVersionofReferencedCoefficient[32];        /* 参考定标系数版本号                                                                            */

	char                   strDateOfReferencedCoefficientVersion[32];    /* 参考定标系数更新日期                                                                          */

	char                   strVersionOfBandCorrection[32];               /* 带宽订正数据版本号                                                                            */

	char                   strDateOfBandCorrectionVersion[32];           /* 带宽订正数据更新日期                                                                          */

	char                   strVersionOfBasefile[32];                     /* 定标基础参数数据版本号                                                                        */

	char                   strDateOfBaseFileVersion[32];                 /* 定标基础参数数据更新日期                                                                      */

	float                  fIraCentralWn[26];                            /* 通道中心波数                                                                                  */

	float                  fIraBdCorCoef[40];                            /* 热红外通道带宽订正系数                                                                        */

	float                  fIraRefCalCoef[78];                           /* 参考定标系数二次项,斜率,截距                                                                  */

};

/* FY3红外分光计L1 OBC级数据 */

struct FY3_IRASOBC_L1B_FILE_INFO

{

	char                   strSatelliteName[8];                          /* 卫星名称（如FY-3C等）                          */

	char                   strSensorName[128];                           /* 仪器名称  "InfraRed Atmospheric Sounder"       */

	char                   strSensorIdentificationCode[12];              /* 传感器代码（如IRAS）                           */

	char                   strDatasetName[64];                           /* 数据集名称（如Global IRAS Data）               */

	char                   strFileName[256];                             /* 文件名称                                       */

	char                   strFileAliasName[256];                        /* 文件别名                                       */

	char                   strResponser[32];                             /* 产品生成地（NSMC）                             */

	char                   strVersionOfSoftware[32];                     /* 处理软件版本号(如V1.0.0)                       */

	char                   strDateOfSoftwareRevision[32];                /* 处理软件更新日期                               */

	char                   strVersionOfCoefficientIndex[32];             /* 定标系数版本号                                 */

	char                   strDateOfCoefficientIndexRevision[32];        /* 定标系数更新日期                               */

	char                   strDateOfObservingBeginning[32];              /* 数据观测开始日期(包括年月日)                   */

	char                   strTimeOfObservingBeginning[32];              /* 数据观测开始时间（包括时分秒毫秒）             */

	char                   strDateOfObservingEnding[32];                 /* 数据观测结束日期(包括年月日)                   */

	char                   strTimeOfObservingEnding[32];                 /* 数据观测结束时间（包括时分秒毫秒）             */

	char                   strDateOfDataCreating[32];                    /* 数据创建日期(包括年月日)                       */

	char                   strTimeOfDataCreating[32];                    /* 数据创建时间（包括时分秒毫秒）                 */

	char                   strDayOrNightFlag[8];                         /* 白天夜间标志                                   */

	unsigned int           dwOrbitNumber;                                /* 轨道号                                         */

	unsigned short int     wOrbitPeriod;                                 /* 轨道周期                                       */

	char                   strOrbitDirection[8];                         /* 轨道方向                                       */

	unsigned char          cDataQuality;                                 /* 数据质量标记(0-5级)                            */

	int                    iNumberOfScans;                               /* 总扫描数                                       */

	int                    iNumberOfDaymodescans;                        /* 白天模式扫描数                                 */

	int                    iNumberofNightmodescans;                      /* 晚上模式扫描数                                 */

	int                    iIncompleteScans;                             /* 不完整的扫描数                                 */
 
	unsigned char          cQAScanFlag;                                  /* 扫描线质量检验码、按扫描线                     */

	unsigned short int     wQAPixelFlag;                                 /* 象元质量检验码、按扫描线                       */

	unsigned short int     wBeginLineNumber;                             /* 起始行号                                       */

	unsigned short int     wEndLineNumber;                               /* 结束行号                                       */

	unsigned short int     wBeginPixelNumber;                            /* 起始象元号                                     */

	unsigned short int     wEndPixelNumber;                              /* 结束象元号                                     */

	char                   strReferenceEllipsoidModelID;                 /* 地球椭球参考坐标系ID（WGS84）                  */

	double                 dEarthSunDistanceRatio;                       /* 日地距离比                                     */

	char                   strMeanAnomaly[12];                           /* 平近地点角（度）                               */

	char                   strMeanMotion[12];                            /* 平均运动                                       */

	char                   strEccentricity[12];                          /* 偏心率                                         */

	char                   strPerigeeArgument[12];                       /* 近地点俯角（度）                               */

	char                   strAscendingNodeLongitude[12];                /* 升交点赤经（度）                               */

	char                   strOrbitalInclination[12];                    /* 轨道倾角（度）                                 */

	char                   strEpochTime[12];                             /* 历元时间                                       */
	
	float                  fOrbitPointLatitude[4];                       /* 轨道4个角点纬度                                */

	float                  fOrbitPointLongitude[4];                      /* 轨道4个角点经度                                */

	char                   strAdditionalAnotation[1024];                 /* 文件的附加说明(可以对文件的使用、创建人等说明) */


	float                  fCalCoefSlopeAve[20];                         /* 数据覆盖时段定标系数斜率平均值                                                                */

	float                  fCalCoefSlopeStd[20];                         /* 数据覆盖时段定标系数斜率标准差                                                                */

	float                  fCalCoefInterAve[20];                         /* 数据覆盖时段定标系数截距平均值                                                                */

	float                  fCalCoefInterStd[20];                         /* 数据覆盖时段定标系数截距标准差                                                                */

	float                  fIraPrtNb;                                    /* PRT数量                                                                                       */

	float                  fIraDisconNb;                                 /* 受到月亮污染的外空测点数                                                                      */

	float                  fIraPrtConvCoef[8];                           /* PRT温度转换系数                                                                               */

	float                  fIraMuduConvCoef[10];                         /* 调制盘温度转换系数                                                                            */

	float                  fIraWheelConvCoef[10];                        /* 滤光轮温度转换系数                                                                            */

	float                  fIraMirrorConvCoef[2];                        /* 扫描镜温度转换系数                                                                            */

	float                  fIraMainOpticConvCoef[2];                     /* 主光学温度转换系数                                                                            */

	float                  fIraRelayOpticConvCoef[2];                    /* 中继光学温度转换系数                                                                          */

	float                  fIraBoardConvCoef[2];                         /* 头部基板温度转换系数                                                                          */

	float                  fIraBoxConvCoef[2];                           /* 信息处理器温度转换系数                                                                        */

	float                  fIraColder2TempAve;                           /* 数据覆盖时段二级冷块温度平均值                                                                */

	float                  fIraColder2TempStd;                           /* 数据覆盖时段二级冷块温度标准差                                                                */

	float                  fIraWheelTempAve;                             /* 数据覆盖时段滤光轮温度平均值                                                                  */

	float                  fIraWheelTempStd;                             /* 数据覆盖时段滤光轮温度标准差                                                                  */

	float                  fIraModulatorTempAve;                         /* 数据覆盖时段调制盘温度平均值                                                                  */

	float                  fIraModulatorTempStd;                         /* 数据覆盖时段调制盘温度标准差                                                                  */

	float                  fIraBBTempAve;                                /* 数据覆盖时段黑体温度平均值                                                                    */

	float                  fIraBBTempStd;                                /* 数据覆盖时段黑体温度标准差                                                                    */

	float                  fIraMirrorTempAve;                            /* 数据覆盖时段扫描镜温度平均值                                                                  */

	float                  fIraMainOpticalTempAve;                       /* 数据覆盖时段主光学温度平均值                                                                  */

	float                  fIraRelayOpticTempAve;                        /* 数据覆盖时段中继光学温度平均值                                                                */

	float                  fIraBoardTempAve;                             /* 数据覆盖时段头部基板温度平均值                                                                */

	float                  fIraBoxTempAve;                               /* 数据覆盖时段信息处理器温度平均值                                                              */

};

/* FY3扫描辐射计L1级数据*/

struct FY3_VIRR_L1B_FILE_INFO

{

	char                   strSatelliteName[8];                          /* 卫星名称（如FY-3C等）                          */

	char                   strSensorName[128];                           /* 仪器名称  "Visible and InfraRed Radiometer"    */

	char                   strSensorIdentificationCode[12];              /* 传感器代码（如VIRR）                           */

	char                   strDatasetName[64];                           /* 数据集名称（如Global VIRR Data）               */

	char                   strFileName[256];                             /* 文件名称                                       */

	char                   strFileAliasName[256];                        /* 文件别名                                       */

	char                   strResponser[32];                             /* 产品生成地（NSMC）                             */

	char                   strVersionOfSoftware[32];                     /* 处理软件版本号(如V1.0.0)                       */

	char                   strDateOfSoftwareRevision[32];                /* 处理软件更新日期                               */

	char                   strVersionOfCoefficientIndex[32];             /* 定标系数版本号                                 */

	char                   strDateOfCoefficientIndexRevision[32];        /* 定标系数更新日期                               */

	char                   strDateOfObservingBeginning[32];              /* 数据观测开始日期(包括年月日)                   */

	char                   strTimeOfObservingBeginning[32];              /* 数据观测开始时间（包括时分秒毫秒）             */

	char                   strDateOfObservingEnding[32];                 /* 数据观测结束日期(包括年月日)                   */

	char                   strTimeOfObservingEnding[32];                 /* 数据观测结束时间（包括时分秒毫秒）             */

	char                   strDateOfDataCreating[32];                    /* 数据创建日期(包括年月日)                       */

	char                   strTimeOfDataCreating[32];                    /* 数据创建时间（包括时分秒毫秒）                 */

	char                   strDayOrNightFlag[8];                         /* 白天夜间标志                                   */

	unsigned int           dwOrbitNumber;                                /* 轨道号                                         */

	unsigned short int     wOrbitPeriod;                                 /* 轨道周期                                       */

	char                   strOrbitDirection[8];                         /* 轨道方向                                       */

	unsigned char          cDataQuality;                                 /* 数据质量标记(0-5级)                            */

	int           		     iNumberOfScans;                               /* 总扫描数                                       */

	int           		     iNumberOfDaymodescans;                        /* 白天模式扫描数                                 */

	int                    iNumberofNightmodescans;                      /* 晚上模式扫描数                                 */

	int                    iIncompleteScans;                             /* 不完整的扫描数                                 */

	unsigned char          cQAScanFlag;                                  /* 扫描线质量检验码、按扫描线                     */

	unsigned short int     wQAPixelFlag;                                 /* 象元质量检验码、按扫描线                       */

	unsigned short int     wBeginLineNumber;                             /* 起始行号                                       */

	unsigned short int     wEndLineNumber;                               /* 结束行号                                       */

	unsigned short int     wBeginPixelNumber;                            /* 起始象元号                                     */

	unsigned short int     wEndPixelNumber;                              /* 结束象元号                                     */

	char                   strReferenceEllipsoidModelID[12];             /* 地球椭球参考坐标系ID（WGS84）                  */

	double                 dEarthSunDistanceRatio;                       /* 日地距离比                                     */

	char                   strMeanAnomaly[12];                           /* 平近地点角（度）                               */

	char                   strMeanMotion[12];                            /* 平均运动                                       */

	char                   strEccentricity[12];                          /* 偏心率                                         */

	char                   strPerigeeArgument[12];                       /* 近地点俯角（度）                               */

	char                   strAscendingNodeLongitude[12];                /* 升交点赤经（度）                               */

	char                   strOrbitalInclination[12];                    /* 轨道倾角（度）                                 */

	char                   strEpochTime[12];                             /* 历元时间                                       */
	                                 
	float                  fOrbitPointLatitude[4];                       /* 轨道4个角点纬度                                */

	float                  fOrbitPointLongitude[4];                      /* 轨道4个角点经度                                */

	char                   strAdditionalAnotation[1024];                 /* 文件的附加说明(可以对文件的使用、创建人等说明) */


	char                   strProductFormatVer[16];                      /* 产品格式版本号                                 */

	unsigned short int	   wGoodScanNum;								                 /* 好扫描线数																		 */
	
	unsigned short int     wFirstGoodScan;                               /* 第一条好扫描线序号                             */

	unsigned short int     wCalflagScanNum;                              /* 可定标扫描线数                                 */
	
	unsigned short int     wPeriodNum;                                   /* 定标周期数                                     */
	
	unsigned short int     wTimeErrorScans;                              /* 时序出错线数                                   */

	unsigned short int     wFrameCountErrorScans;                        /* 帧计数出错线数                                 */

	unsigned short int     wFrameSyncErrorScans;                         /* 帧同步出错线数                                 */

	unsigned short int     wLostScans;                                   /* 丢线数                                         */

	unsigned short int     wCalibratedScans;                             /* 完成定标扫描线数                               */

	unsigned short int     wGeolocatedScans;                             /* 完成定位扫描线数                              */

	unsigned char          strRampCalIndicators;                         /* 斜坡校准指示符                                       */

	float                  fRefSBCalCoefficients[14];                    /* 反射通道定标系数                              */

	float                  fRefSBSolarIrradiance[7];                     /* 反射通道太阳辐照度                            */

	float                  fRefSBEquivalentWidth[7];                     /* 反射通道等效宽度                              */

	float                  fRefSBEffectiveWavelength[7];                 /* 反射通道有效波长                              */

	float                  fEmmisiveCentroidWaveNumber[3];               /* 发射通道中心波数                              */

	float                  fEmmisiveBTCoefficients[6];                   /* 发射通道亮温订正系数                          */

	float                  fPrelaunchNonlinearCoefficients[12];          /* 发射前非线性订正系数                          */

	float                  fEmissiveCoefficientsAve[6];                  /* 发射通道定标系数平均值                        */

	float                  fEmissiveCoefficientsStd[6];                  /* 发射通道定标系数标准差                        */

	float                  fRampCalibrationCoefficients[20];             /* 斜坡校准处理系数                              */ 
};

/* FY3扫描辐射计L1级数据OBC文件*/

struct FY3_VIRROBC_L1B_FILE_INFO

{

	char                   strSatelliteName[8];                          /* 卫星名称（如FY-3C等）                          */

	char                   strSensorName[128];                           /* 仪器名称  "Visible and InfraRed Radiometer"    */

	char                   strSensorIdentificationCode[12];              /* 传感器代码（如VIRR）                           */

	char                   strDatasetName[64];                           /* 数据集名称（如Global VIRR Data）               */

	char                   strFileName[256];                             /* 文件名称                                       */

	char                   strFileAliasName[256];                        /* 文件别名                                       */

	char                   strResponser[32];                             /* 产品生成地（NSMC）                             */

	char                   strVersionOfSoftware[32];                     /* 处理软件版本号(如V1.0.0)                       */

	char                   strDateOfSoftwareRevision[32];                /* 处理软件更新日期                               */

	char                   strVersionOfCoefficientIndex[32];             /* 定标系数版本号                                 */

	char                   strDateOfCoefficientIndexRevision[32];        /* 定标系数更新日期                               */

	char                   strDateOfObservingBeginning[32];              /* 数据观测开始日期(包括年月日)                   */

	char                   strTimeOfObservingBeginning[32];              /* 数据观测开始时间（包括时分秒毫秒）             */

	char                   strDateOfObservingEnding[32];                 /* 数据观测结束日期(包括年月日)                   */

	char                   strTimeOfObservingEnding[32];                 /* 数据观测结束时间（包括时分秒毫秒）             */

	char                   strDateOfDataCreating[32];                    /* 数据创建日期(包括年月日)                       */

	char                   strTimeOfDataCreating[32];                    /* 数据创建时间（包括时分秒毫秒）                 */

	char                   strDayOrNightFlag[8];                         /* 白天夜间标志                                   */

	unsigned int           dwOrbitNumber;                                /* 轨道号                                         */

	unsigned short int     wOrbitPeriod;                                 /* 轨道周期                                       */

	char                   strOrbitDirection[8];                         /* 轨道方向                                       */

	unsigned char          cDataQuality;                                 /* 数据质量标记(0-5级)                            */

	int                    iNumberOfScans;                               /* 总扫描数                                       */

	int                    iNumberOfDaymodescans;                        /* 白天模式扫描数                                 */

	int                    iNumberofNightmodescans;                      /* 晚上模式扫描数                                 */

	int                    iIncompleteScans;                             /* 不完整的扫描数                                 */

	unsigned char          cQAScanFlag;                                  /* 扫描线质量检验码、按扫描线                     */

	unsigned short int     wQAPixelFlag;                                 /* 象元质量检验码、按扫描线                       */
 
	unsigned short int     wBeginLineNumber;                             /* 起始行号                                       */

	unsigned short int     wEndLineNumber;                               /* 结束行号                                       */

	unsigned short int     wBeginPixelNumber;                            /* 起始象元号                                     */

	unsigned short int     wEndPixelNumber;                              /* 结束象元号                                     */

	char                   strReferenceEllipsoidModelID[12];             /* 地球椭球参考坐标系ID（WGS84）                  */

	double                 dEarthSunDistanceRatio;                       /* 日地距离比                                     */
	
	char                   strMeanAnomaly[12];                           /* 平近地点角（度）                               */

	char                   strMeanMotion[12];                            /* 平均运动                                       */

	char                   strEccentricity[12];                          /* 偏心率                                         */

	char                   strPerigeeArgument[12];                       /* 近地点俯角（度）                               */

	char                   strAscendingNodeLongitude[12];                /* 升交点赤经（度）                               */

	char                   strOrbitalInclination[12];                    /* 轨道倾角（度）                                 */

	char                   strEpochTime[12];                             /* 历元时间                                       */
                            
	float                  fOrbitPointLatitude[4];                       /* 轨道4个角点纬度                                */

	float                  fOrbitPointLongitude[4];                      /* 轨道4个角点经度                                */

	char                   strAdditionalAnotation[1024];                 /* 文件的附加说明(可以对文件的使用、创建人等说明) */


	char                   strProductFormatVer[16];                      /* 产品格式版本号                                 */

	unsigned short int	   wGoodScanNum; 								 /* 好扫描线数																		 */
	
	unsigned short int     wFirstGoodScan;                               /* 第一条好扫描线序号                             */

	unsigned short int     wCalflagScanNum;                              /* 可定标扫描线数                                 */
	
	unsigned short int     wPeriodNum;                                   /* 定标周期数                                     */
	
	unsigned short int     wTimeErrorScans;                              /* 时序出错线数                                   */

	unsigned short int     wFrameCountErrorScans;                        /* 帧计数出错线数                                 */

	unsigned short int     wFrameSyncErrorScans;                         /* 帧同步出错线数                                 */

	unsigned short int     wLostScans;                                   /* 丢线数                                         */

	unsigned short int     wCalibratedScans;                             /* 完成定标扫描线数                               */

	unsigned short int     wGeolocatedScans;                             /* 完成定位扫描线数                              */

	unsigned char          strRampCalIndicators;                         /* 斜坡校准指示符                                       */

	float                  fRefSBCalCoefficients[14];                    /* 反射通道定标系数                              */

	float                  fRefSBSolarIrradiance[7];                     /* 反射通道太阳辐照度                            */

	float                  fRefSBEquivalentWidth[7];                     /* 反射通道等效宽度                              */

	float                  fRefSBEffectiveWavelength[7];                 /* 反射通道有效波长                              */

	float                  fEmmisiveCentroidWaveNumber[3];               /* 发射通道中心波数                              */

	float                  fEmmisiveBTCoefficients[6];                   /* 发射通道亮温订正系数                          */

	float                  fPrelaunchNonlinearCoefficients[12];          /* 发射前非线性订正系数                          */

	float                  fEmissiveCoefficientsAve[6];                  /* 发射通道定标系数平均值                        */

	float                  fEmissiveCoefficientsStd[6];                  /* 发射通道定标系数标准差                        */

	float                  fRampCalibrationCoefficients[20];             /* 斜坡校准处理系数                              */ 

	float                  fPRTCountStat[8];                             /* PRT计数值统计                                 */

	float                  fBlackbodyViewStat[40];                       /* 黑体观测值统计                                */

	float                  fSpaceViewStat[40];                           /* 外空观测值统计                                */

	float                  fRadiatorTemperatureStat[8];                  /* 辐冷器温度统计                                */

	float                  fRadiatorVoltage_Stat[4];                     /* 辐冷器温控电压统计                            */

	float                  fPRTTemperatureCoefficients[12];              /* PRT温度转换系数                               */

	float                  fBlackbodyTemperatureCoefficients[36];        /* 黑体温度转换系数                              */

	float                  fPRTWeightingFactors[2];                      /* PRT权重系数                                   */

	float                  fRadiatorTemperatureCoefficients[22];         /* 辐冷器温度转换系数                            */

	float                  fRadiatorVoltageCoefficients;                 /* 辐冷器电压转换系数                            */

	float                  fSpaceRadiance[3];                            /* 发射通道冷空辐射率                            */

};

/* FY3扫描辐射计L1级数据GEO文件*/

struct FY3_VIRRGEO_L1B_FILE_INFO

{

	char                   strSatelliteName[8];                          /* 卫星名称（如FY-3C等）                          */

	char                   strSensorName[128];                           /* 仪器名称  "Visible and InfraRed Radiometer"    */

	char                   strSensorIdentificationCode[12];              /* 传感器代码（如VIRR）                           */

	char                   strDatasetName[64];                           /* 数据集名称（如Global VIRR Data）               */

	char                   strFileName[256];                             /* 文件名称                                       */

	char                   strFileAliasName[256];                        /* 文件别名                                       */

	char                   strResponser[32];                             /* 产品生成地（NSMC）                             */

	char                   strVersionOfSoftware[32];                     /* 处理软件版本号(如V1.0.0)                       */

	char                   strDateOfSoftwareRevision[32];                /* 处理软件更新日期                               */

	char                   strVersionOfCoefficientIndex[32];             /* 定标系数版本号                                 */

	char                   strDateOfCoefficientIndexRevision[32];        /* 定标系数更新日期                               */

	char                   strDateOfObservingBeginning[32];              /* 数据观测开始日期(包括年月日)                   */

	char                   strTimeOfObservingBeginning[32];              /* 数据观测开始时间（包括时分秒毫秒）             */

	char                   strDateOfObservingEnding[32];                 /* 数据观测结束日期(包括年月日)                   */

	char                   strTimeOfObservingEnding[32];                 /* 数据观测结束时间（包括时分秒毫秒）             */

	char                   strDateOfDataCreating[32];                    /* 数据创建日期(包括年月日)                       */

	char                   strTimeOfDataCreating[32];                    /* 数据创建时间（包括时分秒毫秒）                 */

	char                   strDayOrNightFlag[8];                         /* 白天夜间标志                                   */

	unsigned int           dwOrbitNumber;                                /* 轨道号                                         */

	unsigned short int     wOrbitPeriod;                                 /* 轨道周期                                       */

	char                   strOrbitDirection[8];                         /* 轨道方向                                       */

	unsigned char          cDataQuality;                                 /* 数据质量标记(0-5级)                            */

	int           		   iNumberOfScans;                               /* 总扫描数                                       */

	int           		   iNumberOfDaymodescans;                        /* 白天模式扫描数                                 */

	int                    iNumberofNightmodescans;                      /* 晚上模式扫描数                                 */

	int                    iIncompleteScans;                             /* 不完整的扫描数                                 */

	unsigned char          cQAScanFlag;                                  /* 扫描线质量检验码、按扫描线                     */

	unsigned short int     wQAPixelFlag;                                 /* 象元质量检验码、按扫描线                       */

	unsigned short int     wBeginLineNumber;                             /* 起始行号                                       */

	unsigned short int     wEndLineNumber;                               /* 结束行号                                       */

	unsigned short int     wBeginPixelNumber;                            /* 起始象元号                                     */

	unsigned short int     wEndPixelNumber;                              /* 结束象元号                                     */

	char                   strReferenceEllipsoidModelID[12];             /* 地球椭球参考坐标系ID（WGS84）                  */

	double                 dEarthSunDistanceRatio;                       /* 日地距离比                                     */

	char                   strMeanAnomaly[12];                           /* 平近地点角（度）                               */

	char                   strMeanMotion[12];                            /* 平均运动                                       */

	char                   strEccentricity[12];                          /* 偏心率                                         */

	char                   strPerigeeArgument[12];                       /* 近地点俯角（度）                               */

	char                   strAscendingNodeLongitude[12];                /* 升交点赤经（度）                               */

	char                   strOrbitalInclination[12];                    /* 轨道倾角（度）                                 */

	char                   strEpochTime[12];                             /* 历元时间                                       */
	                                 
	float                  fOrbitPointLatitude[4];                       /* 轨道4个角点纬度                                */

	float                  fOrbitPointLongitude[4];                      /* 轨道4个角点经度                                */

	char                   strAdditionalAnotation[1024];                 /* 文件的附加说明(可以对文件的使用、创建人等说明) */


	char                   strProductFormatVer[16];                      /* 产品格式版本号                                 */

	unsigned short int	   wGoodScanNum;								                 /* 好扫描线数																		 */
	
	unsigned short int     wFirstGoodScan;                               /* 第一条好扫描线序号                             */

	unsigned short int     wTimeErrorScans;                              /* 时序出错线数                                   */

	unsigned short int     wFrameCountErrorScans;                        /* 帧计数出错线数                                 */

	unsigned short int     wFrameSyncErrorScans;                         /* 帧同步出错线数                                 */

	unsigned short int     wLostScans;                                   /* 丢线数                                         */

	unsigned short int     wGeolocatedScans;                             /* 完成定位扫描线数                              */

};

/* FY3太阳辐射监测仪L1级数据 */

struct FY3_SIM_L1B_FILE_INFO

{

	char                   strSatelliteName[8];                          /* 卫星名称（如FY-3C等）                          */

	char                   strSensorName[128];                           /* 仪器名称  "Solar Irradiance Monitor"           */

	char                   strSensorIdentificationCode[12];              /* 传感器代码（如SIM）                            */

	char                   strDatasetName[64];                           /* 数据集名称（如Global SIM Data）                */

	char                   strFileName[256];                             /* 文件名称                                       */

	char                   strFileAliasName[256];                        /* 文件别名（SIM_L1）                             */

	char                   strResponser[32];                             /* 产品生成地（NSMC）                             */

	char                   strVersionOfSoftware[32];                     /* 处理软件版本号(如V1.0.0)                       */

	char                   strDateOfSoftwareRevision[32];                /* 处理软件更新日期（YYYY-MM-DD）                 */

	char                   strVersionOfCoefficientIndex[32];             /* 定标系数版本号                                 */

	char                   strDateOfCoefficientIndexRevision[32];        /* 定标系数更新日期                               */

	char                   strDateOfObservingBeginning[32];              /* 数据观测开始日期(包括年月日)                   */

	char                   strTimeOfObservingBeginning[32];              /* 数据观测开始时间（包括时分秒毫秒）             */

	char                   strDateOfObservingEnding[32];                 /* 数据观测结束日期(包括年月日)                   */

	char                   strTimeOfObservingEnding[32];                 /* 数据观测结束时间（包括时分秒毫秒）             */

	char                   strDateOfDataCreating[32];                    /* 数据创建日期(包括年月日)                       */

	char                   strTimeOfDataCreating[32];                    /* 数据创建时间（包括时分秒毫秒）                 */

	char                   strDayOrNightFlag[8];                         /* 白天夜间标志                                   */

	unsigned int           dwOrbitNumber;                                /* 轨道号                                         */

	unsigned short int     wOrbitPeriod;                                 /* 轨道周期                                       */

	char                   strOrbitDirection[8];                         /* 轨道方向                                       */

	unsigned char          cDataQuality;                                 /* 数据质量标记(0-5级)                            */

	int                    iNumberOfScans;                               /* 总扫描数                                       */

	int                    iNumberOfDaymodescans;                        /* 白天模式扫描数                                 */

	int                    iNumberofNightmodescans;                      /* 晚上模式扫描数                                 */

	int                    iIncompleteScans;                             /* 不完整的扫描数                                 */

	unsigned char          cQAScanFlag;                                  /* 扫描线质量检验码、按扫描线                     */

	unsigned short int     wQAPixelFlag;                                 /* 象元质量检验码、按扫描线                       */

	unsigned short int     wBeginLineNumber;                             /* 起始行号                                       */

	unsigned short int     wEndLineNumber;                               /* 结束行号                                       */

	unsigned short int     wBeginPixelNumber;                            /* 起始象元号                                     */

	unsigned short int     wEndPixelNumber;                              /* 结束象元号                                     */

	char                   strReferenceEllipsoidModelID[12];             /* 地球椭球参考坐标系ID（WGS84）                  */

	double                 dEarthSunDistanceRatio;                       /* 日地距离比                                     */

	char                   strMeanAnomaly[12];                           /* 平近点角                                       */

	char                   strMeanMotion[12];                            /* 轨道周期                                       */

	char                   strEccentricity[12];                          /* 偏心率                                         */

	char                   strPerigeeArgument[12];                       /* 近地点俯角                                     */

	char                   strAscendingNodeLongitude[12];                /* 升交点赤经                                     */

	char                   strOrbitalInclination[12];                    /* 轨道倾角                                       */

	char                   strEpochTime[12];                             /* 历元时间                                       */                             

	float                  fOrbitPointLatitude[4];                       /* 轨道4个角点纬度                                */

	float                  fOrbitPointLongitude[4];                      /* 轨道4个角点经度                                */

	char                   strAdditionalAnotation[1024];                 /* 文件的附加说明(可以对文件的使用、创建人等说明) */

	                                                                     
	float                  fStandardVolt[2];                             /* 标准电压                                       */
	
	float                  fResistance[2];                               /* 电阻                                           */
	
	float                  fAperture[2];                                 /* 光阑面积                                       */
	
	unsigned short int     iReferenceTemperature;                        /* 参考温度                                       */ 
	
	float                  fBlackbodyAbsorption[2];                      /* 黑体吸收率                                     */
	
	float                  fWRR[2];                                      /* WRR订正系数                                    */
	
	float                  fTrackSettingAngle[4];                        /* 跟踪安装角                                     */ 

	char                   strSpaceIRradianceMeanTime[32];               /* 太空背景辐射均值时间                           */

	float		           fSpaceIRradianceMean[2];                      /* 太空背景辐射均值                               */ 

	float                  fRelativeCalibrationCoefficient;              /* 相对定标系数                                   */

	char                   strRelativeCalibrationTime[32];               /* 相对定标时间                                   */

	float                  fBalanceStatistic[8000];                      /* 平衡状态统计量                                 */

	float                  fResponsibility[2000];                        /* 响应度                                         */

	float                  fSensitivity[2000];                           /* 灵敏度                                         */

	unsigned int           iShadhowTime[2000];                           /* 进出阴影时间                                   */
	
};                                                                               

/* FY3微波成像仪L1级数据 */

struct FY3_MWRI_L1B_FILE_INFO

{

	char                   strSatelliteName[8];                          /* 卫星名称（如FY-3C等）                          */

	char                   strSensorName[128];                           /* 仪器名称  "MicroWave Radiation Imager"         */

	char                   strSensorIdentificationCode[12];              /* 传感器代码（如MWRI）                           */

	char                   strDatasetName[64];                           /* 数据集名称（如Global MWRI L1_SDR Data）        */

	char                   strFileName[256];                             /* 文件名称                                       */

	char                   strFileAliasName[256];                        /* 文件别名                                       */

	char                   strResponser[32];                             /* 产品生成地（NSMC）                             */

	char                   strVersionOfSoftware[32];                     /* 处理软件版本号(如V1.0.0)                       */

	char                   strDateOfSoftwareRevision[32];                /* 处理软件更新日期                               */

	char                   strVersionOfCoefficientIndex[32];             /* 定标系数版本号                                 */

	char                   strDateOfCoefficientIndexRevision[32];        /* 定标系数更新日期                               */

	char                   strDateOfObservingBeginning[32];              /* 数据观测开始日期(包括年月日)                   */

	char                   strTimeOfObservingBeginning[32];              /* 数据观测开始时间（包括时分秒毫秒）             */

	char                   strDateOfObservingEnding[32];                 /* 数据观测结束日期(包括年月日)                   */

	char                   strTimeOfObservingEnding[32];                 /* 数据观测结束时间（包括时分秒毫秒）             */

	char                   strDateOfDataCreating[32];                    /* 数据创建日期(包括年月日)                       */

	char                   strTimeOfDataCreating[32];                    /* 数据创建时间（包括时分秒毫秒）                 */

	char                   strDayOrNightFlag[8];                         /* 白天夜间标志                                   */

	unsigned int           dwOrbitNumber;                                /* 轨道号                                         */

	unsigned short int     wOrbitPeriod;                                 /* 轨道周期                                       */

	char                   strOrbitDirection[8];                         /* 轨道方向                                       */

	unsigned char          cDataQuality;                                 /* 数据质量标记(0-5级)                            */

	int                    iNumberOfScans;                               /* 总扫描线数                                     */

	int                    iNumberOfDaymodescans;                        /* 白天模式扫描线数                               */

	int                    iNumberofNightmodescans;                      /* 晚上模式扫描线数                               */

	int                    iIncompleteScans;                             /* 不完整的扫描线数                               */

	unsigned char          cQAScanFlag;                                  /* 扫描线质量检验码、按扫描线                     */

	unsigned short int     wQAPixelFlag;                                 /* 象元质量检验码、按扫描线                       */

	unsigned short int     wBeginLineNumber;                             /* 起始行号                                       */

	unsigned short int     wEndLineNumber;                               /* 结束行号                                       */

	unsigned short int     wBeginPixelNumber;                            /* 起始象元号                                     */

	unsigned short int     wEndPixelNumber;                              /* 结束象元号                                     */

	char                   strReferenceEllipsoidModelID[12];             /* 地球椭球参考坐标系ID（WGS84）                  */

	double                 dEarthSunDistanceRatio;                       /* 日地距离比                                     */

	char                   strMeanAnomaly[12];                           /* 平近点角                                       */

	char                   strMeanMotion[12];                            /* 平均运动                                       */

	char                   strEccentricity[12];                          /* 偏心率                                         */

	char                   strPerigeeArgument[12];                       /* 近地点俯角                                     */

	char                   strAscendingNodeLongitude[12];                /* 升交点赤经                                     */

	char                   strOrbitalInclination[12];                    /* 轨道倾角                                       */

	char                   strEpochTime[12];                             /* 历元时间                                       */

	float                  fOrbitPointLatitude[4];                       /* 轨道4个角点纬度                                */

	float                  fOrbitPointLongitude[4];                      /* 轨道4个角点经度                                */

	char                   strAdditionalAnotation[1024];                 /* 文件的附加说明(可以对文件的使用、创建人等说明) */

	                                                                     
	unsigned short int     iCountScnlines;                               /* 总扫描线数                                     */
	
	unsigned short int     iCountScnlinesCalibrated;                     /* 完成数据预处理的扫描线数                       */

	unsigned short int     iCountTimeSeqErr;                             /* 时序出错扫描线数                               */
	
	unsigned short int     iCountMissingScnlines;                        /* 丢失扫描线数                                   */
	
	unsigned short int     iCountCaliErrScnlines;                        /* 定标失败扫描线数                               */
	
	unsigned short int     iCountGeolErrScnlines;                        /* 定位失败扫描线数                               */
	
	float                  fChsCentralWavenumber[5];                     /* 通道中心频率                                   */
	
	unsigned short int     iCountScnlinesSPViewLunarContaminated;        /* 冷空观测数据受到污染的扫描线数                 */

};

/* FY3微波成像仪L1_OBC级数据 */

struct FY3_MWRIOBC_L1B_FILE_INFO

{

	char                   strSatelliteName[8];                          /* 卫星名称（如FY-3C等）                          */

	char                   strSensorName[128];                           /* 仪器名称  "MicroWave Radiation Imager"         */

	char                   strSensorIdentificationCode[12];              /* 传感器代码（如MWRI）                           */

	char                   strDatasetName[64];                           /* 数据集名称（如Global MWRI L1_SDR Data）        */

	char                   strFileName[256];                             /* 文件名称                                       */

	char                   strFileAliasName[256];                        /* 文件别名                                       */

	char                   strResponser[32];                             /* 产品生成地（NSMC）                             */

	char                   strVersionOfSoftware[32];                     /* 处理软件版本号(如V1.0.0)                       */

	char                   strDateOfSoftwareRevision[32];                /* 处理软件更新日期                               */

	char                   strVersionOfCoefficientIndex[32];             /* 定标系数版本号                                 */

	char                   strDateOfCoefficientIndexRevision[32];        /* 定标系数更新日期                               */

	char                   strDateOfObservingBeginning[32];              /* 数据观测开始日期(包括年月日)                   */

	char                   strTimeOfObservingBeginning[32];              /* 数据观测开始时间（包括时分秒毫秒）             */

	char                   strDateOfObservingEnding[32];                 /* 数据观测结束日期(包括年月日)                   */

	char                   strTimeOfObservingEnding[32];                 /* 数据观测结束时间（包括时分秒毫秒）             */

	char                   strDateOfDataCreating[32];                    /* 数据创建日期(包括年月日)                       */

	char                   strTimeOfDataCreating[32];                    /* 数据创建时间（包括时分秒毫秒）                 */

	char                   strDayOrNightFlag[8];                         /* 白天夜间标志                                   */

	unsigned int           dwOrbitNumber;                                /* 轨道号                                         */

	unsigned short int     wOrbitPeriod;                                 /* 轨道周期                                       */

	char                   strOrbitDirection[8];                         /* 轨道方向                                       */

	unsigned char          cDataQuality;                                 /* 数据质量标记(0-5级)                            */

	int                    iNumberOfScans;                               /* 总扫描线数                                     */

	int                    iNumberOfDaymodescans;                        /* 白天模式扫描线数                               */

	int                    iNumberofNightmodescans;                      /* 晚上模式扫描线数                               */

	int                    iIncompleteScans;                             /* 不完整的扫描线数                               */

	unsigned char          cQAScanFlag;                                  /* 扫描线质量检验码、按扫描线                     */

	unsigned short int     wQAPixelFlag;                                 /* 象元质量检验码、按扫描线                       */

	unsigned short int     wBeginLineNumber;                             /* 起始行号                                       */

	unsigned short int     wEndLineNumber;                               /* 结束行号                                       */

	unsigned short int     wBeginPixelNumber;                            /* 起始象元号                                     */

	unsigned short int     wEndPixelNumber;                              /* 结束象元号                                     */

	char                   strReferenceEllipsoidModelID[12];             /* 地球椭球参考坐标系ID（WGS84）                  */

	double                 dEarthSunDistanceRatio;                       /* 日地距离比                                     */

	char                   strMeanAnomaly[12];                           /* 平近点角                                       */

	char                   strMeanMotion[12];                            /* 平均运动                                       */

	char                   strEccentricity[12];                          /* 偏心率                                         */

	char                   strPerigeeArgument[12];                       /* 近地点俯角                                     */

	char                   strAscendingNodeLongitude[12];                /* 升交点赤经                                     */

	char                   strOrbitalInclination[12];                    /* 轨道倾角                                       */

	char                   strEpochTime[12];                             /* 历元时间                                       */

	float                  fOrbitPointLatitude[4];                       /* 轨道4个角点纬度                                */

	float                  fOrbitPointLongitude[4];                      /* 轨道4个角点经度                                */

	char                   strAdditionalAnotation[1024];                 /* 文件的附加说明(可以对文件的使用、创建人等说明) */


	unsigned short int     iScanMode;                                    /* 扫描模式                                       */
	
	float                  fCoefficientAvv[128];                         /* 天线交叉极化定标系数Avv                        */
	
	float                  fCoefficientAhv[128];                         /* 天线交叉极化定标系数Ahv                        */
	
	float                  fCoefficientAvh[128];                         /* 天线交叉极化定标系数Avh                        */
	
	float                  fCoefficientAhh[128];                         /* 天线交叉极化定标系数Ahh                        */
	
	float                  fCoefficientAoh[128];                         /* 天线交叉极化定标系数Aoh                        */
	
	float                  fCoefficientAov[128];                         /* 天线交叉极化定标系数Aov                        */
	
	float                  fNonlinearCalibrationCoefficient[10];         /* 非线性定标系数                                 */
	
	char                   strCalibrationmethod[1024];                   /* 定标方法                                       */
	
	char                   strHTSCorrectionCoefficient[128];             /* 暖偏差订正系数                                 */
	
	float                  fSpilloverCorrectionCoefficient[64];          /* 天线冷空溢出订正系数                           */
	
	char                   strHTSCorrectionVersion[32];                  /* 暖偏差订正系数版本号                           */
	
	char                   strSpilloverCorrectionVersion[32];            /* 天线溢出订正系数版本号                         */
	
	float                  fColdSkyTemperature10To89GHz[10];             /* 10-89GHz冷空辐射亮温                           */
	
	float                  fMWRIfrequency[5];                            /* 微波成像仪频率                                 */
	
	float                  fMWRIbandwidth[4];                            /* 微波成像仪带宽                                 */
	
	float                  fMWRIbeamwidth[10];                           /* 微波成像仪波束宽度                             */
	
	float                  fOff_nadir_angle[5];                          /* 10－89GHz波束偏置角                            */
	
	float                  fGroundCalibrationParameters[512];            /* 地面定标基础参数数据                           */
	
	short                  iNumberOfBToutofrange;                        /* 超过辐射亮温阈值范围的像元数统计量             */
	
	float                  fCoefficientIncreaseAvg[15];                  /* 数据覆盖时段定标系数增益平均值                 */
	
	float                  fCoefficientIncreaseStdev[15];                /* 数据覆盖时段定标系数增益标准差                 */
	
	float                  fCoefficientInterceptAvg[15];                 /* 数据覆盖时段定标系数截距平均值                 */

	float                  fCoefficientInterceptStdev[15];               /* 数据覆盖时段定标系数截距标准差                 */
	
	float                  fInstTempAvg[2];                              /* 数据覆盖时段仪器温度平均值                     */
	
	float                  fInstTempStdev[2];                            /* 数据覆盖时段仪器温度标准差                     */


};

/* FY3微波湿度计L1数据 */

struct FY3_MWHS_L1B_FILE_INFO

{

	char                   strSatelliteName[8];                          /* 卫星名称（如FY-3C等）                          */

	char                   strSensorName[128];                           /* 仪器名称  "Microwave Humidity Sounder"         */

	char                   strSensorIdentificationCode[12];              /* 传感器代码（如MWHS）                           */

	char                   strDatasetName[64];                           /* 数据集名称（如Global MWHS Data）               */

	char                   strFileName[256];                             /* 文件名称                                       */

	char                   strFileAliasName[256];                        /* 文件别名                                       */

	char                   strResponser[32];                             /* 产品生成地（NSMC）                             */

	char                   strVersionOfSoftware[32];                     /* 处理软件版本号(如V1.0.0)                       */

	char                   strDateOfSoftwareRevision[32];                /* 处理软件更新日期                               */

	char                   strVersionOfCoefficientIndex[32];             /* 定标系数版本号                                 */

	char                   strDateOfCoefficientIndexRevision[32];        /* 定标系数更新日期                               */

	char                   strDateOfObservingBeginning[32];              /* 数据观测开始日期(包括年月日)                   */

	char                   strTimeOfObservingBeginning[32];              /* 数据观测开始时间（包括时分秒毫秒）             */

	char                   strDateOfObservingEnding[32];                 /* 数据观测结束日期(包括年月日)                   */

	char                   strTimeOfObservingEnding[32];                 /* 数据观测结束时间（包括时分秒毫秒）             */

	char                   strDateOfDataCreating[32];                    /* 数据创建日期(包括年月日)                       */

	char                   strTimeOfDataCreating[32];                    /* 数据创建时间（包括时分秒毫秒）                 */

	char                   strDayOrNightFlag[8];                         /* 白天夜间标志                                   */

	unsigned int           dwOrbitNumber;                                /* 轨道号                                         */

	unsigned short int     wOrbitPeriod;                                 /* 轨道周期                                       */

	char                   strOrbitDirection[8];                         /* 轨道方向                                       */

	unsigned char          cDataQuality;                                 /* 数据质量标记(0-5级)                            */

	int                    iNumberOfScans;                               /* 总扫描线数                                     */

	int                    iNumberOfDaymodescans;                        /* 白天模式扫描线数                               */

	int                    iNumberofNightmodescans;                      /* 晚上模式扫描线数                               */

	int                    iIncompleteScans;                             /* 不完整的扫描线数                               */

	unsigned char          cQAScanFlag;                                  /* 扫描线质量检验码、按扫描线                     */

	unsigned short int     wQAPixelFlag;                                 /* 象元质量检验码、按扫描线                       */

	unsigned short int     wBeginLineNumber;                             /* 起始行号                                       */

	unsigned short int     wEndLineNumber;                               /* 结束行号                                       */

	unsigned short int     wBeginPixelNumber;                            /* 起始象元号                                     */

	unsigned short int     wEndPixelNumber;                              /* 结束象元号                                     */

	char                   strReferenceEllipsoidModelID;                 /* 地球椭球参考坐标系ID（WGS84）                  */

	double                 dEarthSunDistanceRatio;                       /* 日地距离比                                     */

	char                   strMeanAnomaly[12];                           /* 平近地点角（度）                               */

	char                   strMeanMotion[12];                            /* 平均运动                                       */

	char                   strEccentricity[12];                          /* 偏心率                                         */

	char                   strPerigeeArgument[12];                           /* 近地点俯角（度）                               */

	char                   strAscendingNodeLongitude[12];                /* 升交点赤经（度）                               */

	char                   strOrbitalInclination[12];                    /* 轨道倾角（度）                                 */

	char                   strEpochTime[12];                             /* 历元时间                                       */
 
	float                  fOrbitPointLatitude[4];                       /* 轨道4个角点纬度                                */

	float                  fOrbitPointLongitude[4];                      /* 轨道4个角点经度                                */

	char                   strAdditionalAnotation[1024];                 /* 文件的附加说明(可以对文件的使用、创建人等说明) */

	
	int                    iCountScnlines;                               /* 总帧数                                         */
	
	int                    iCountScnlinesCalibrated;                     /* 完成数据预处理的扫描线数                       */

	int                    iCountTimeSeqErr;                             /* 时序出错帧数                                   */
	
	int                    iCountMissingScnlines;                        /* 丢帧数                                         */
	
	int                    iCountCaliErrScnlines;                        /* 定标失败帧数                                   */
	
	int                    iCountGeolErrScnlines;                        /* 定位失败帧数                                   */
	
	float                  fChsCentralWavenumber[15];                    /* 通道中心频率                                   */
	
	short int              iCountScnlinesSPViewLunarContaminated;        /* 冷空观测数据受到污染的扫描线数                 */

};                                                                                                                                                                                 

/* FY3微波湿度计L1_OBC数据 */

struct FY3_MWHSOBC_L1B_FILE_INFO

{

	char                   strSatelliteName[8];                          /* 卫星名称（如FY-3C等）                          */

	char                   strSensorName[128];                           /* 仪器名称  "Microwave Humidity Sounder"         */

	char                   strSensorIdentificationCode[12];              /* 传感器代码（如MWHS）                           */

	char                   strDatasetName[64];                           /* 数据集名称（如Global MWHS Data）               */

	char                   strFileName[256];                             /* 文件名称                                       */

	char                   strFileAliasName[256];                        /* 文件别名                                       */

	char                   strResponser[32];                             /* 产品生成地（NSMC）                             */

	char                   strVersionOfSoftware[32];                     /* 处理软件版本号(如V1.0.0)                       */

	char                   strDateOfSoftwareRevision[32];                /* 处理软件更新日期                               */

	char                   strVersionOfCoefficientIndex[32];             /* 定标系数版本号                                 */

	char                   strDateOfCoefficientIndexRevision[32];        /* 定标系数更新日期                               */

	char                   strDateOfObservingBeginning[32];              /* 数据观测开始日期(包括年月日)                   */

	char                   strTimeOfObservingBeginning[32];              /* 数据观测开始时间（包括时分秒毫秒）             */

	char                   strDateOfObservingEnding[32];                 /* 数据观测结束日期(包括年月日)                   */

	char                   strTimeOfObservingEnding[32];                 /* 数据观测结束时间（包括时分秒毫秒）             */

	char                   strDateOfDataCreating[32];                    /* 数据创建日期(包括年月日)                       */

	char                   strTimeOfDataCreating[32];                    /* 数据创建时间（包括时分秒毫秒）                 */

	char                   strDayOrNightFlag[8];                         /* 白天夜间标志                                   */

	unsigned int           dwOrbitNumber;                                /* 轨道号                                         */

	unsigned short int     wOrbitPeriod;                                 /* 轨道周期                                       */

	char                   strOrbitDirection[8];                         /* 轨道方向                                       */

	unsigned char          cDataQuality;                                 /* 数据质量标记(0-5级)                            */

	int                    iNumberOfScans;                               /* 总扫描线数                                     */

	int                    iNumberOfDaymodescans;                        /* 白天模式扫描线数                               */

	int                    iNumberofNightmodescans;                      /* 晚上模式扫描线数                               */

	int                    iIncompleteScans;                             /* 不完整的扫描线数                               */

	unsigned char          cQAScanFlag;                                  /* 扫描线质量检验码、按扫描线                     */

	unsigned short int     wQAPixelFlag;                                 /* 象元质量检验码、按扫描线                       */

	unsigned short int     wBeginLineNumber;                             /* 起始行号                                       */

	unsigned short int     wEndLineNumber;                               /* 结束行号                                       */

	unsigned short int     wBeginPixelNumber;                            /* 起始象元号                                     */

	unsigned short int     wEndPixelNumber;                              /* 结束象元号                                     */

	char                   strReferenceEllipsoidModelID;                 /* 地球椭球参考坐标系ID（WGS84）                  */

	double                 dEarthSunDistanceRatio;                       /* 日地距离比                                     */

	char                   strMeanAnomaly[12];                           /* 平近地点角（度）                               */

	char                   strMeanMotion[12];                            /* 平均运动                                       */

	char                   strEccentricity[12];                          /* 偏心率                                         */

	char                   strPerigeeArgument[12];                       /* 近地点俯角（度）                               */

	char                   strAscendingNodeLongitude[12];                /* 升交点赤经（度）                               */

	char                   strOrbitalInclination[12];                    /* 轨道倾角（度）                                 */

	char                   strEpochTime[12];                             /* 历元时间                                       */

	float                  fOrbitPointLatitude[4];                       /* 轨道4个角点纬度                                */

	float                  fOrbitPointLongitude[4];                      /* 轨道4个角点经度                                */

	char                   strAdditionalAnotation[1024];                 /* 文件的附加说明(可以对文件的使用、创建人等说明) */

	
	unsigned short int     wApplicationID;                               /* 应用标识                                       */

	unsigned short int     wScanningMode;                                /* 扫描模态                                       */

	unsigned short int     wClockUpdateIndicator;                        /* 时钟更新指示(0 =没有更新，否则代表时钟更新帧号)*/

	int                    iCountScnlines;                               /* 总帧数                                         */
	
	int                    iPacketLength;                                /* 源包长度                                       */

	int                    iCountScnlinesCalibrated;                     /* 完成数据预处理的扫描线数                       */

	int                    iCountTimeSeqErr;                             /* 时序出错帧数                                   */
	
	int                    iCountMissingScnlines;                        /* 丢帧数                                         */
	
	int                    iCountCaliErrScnlines;                        /* 定标失败帧数                                   */
	
	int                    iCountGeolErrScnlines;                        /* 定位失败帧数                                   */
	
	char                   strVersionOfRadianceCorrectingData[32];       /* 辐射订正数据版本号                             */
	
	char                   strDateOfRadianceCorrectingDataVersion[32];   /* 辐射订正数据更新日期                           */
	
	char                   strVersionOfBasicCalibrationData[32];         /* 定标基础参数数据版本号                         */
	
	char                   strDateOfBasicCalibrationDataVersion[32];     /* 定标基础参数数据更新日期                       */
	
	short int              iNumberofPRT;                                 /* PRT数量                                        */

	short int              iNumberofBlackbody;                           /* 黑体数量                                       */

	short int              iNumberofBBSPView;                            /* 黑体外空观测数                                 */
	
	float                  fPRTTemperatureCoefficient[60];               /* PRT温度转换系数                                */

	float                  fColdSpaceFixedBias[15];                      /* 冷空观测订正值                                 */

	float                  fWarmTargetFixedBias[15];                     /* 黑体偏差订正                                   */

	float                  fRefInstTemp[60];                             /* 仪器定标参考温度                               */
	
	float                  fNonlinearityCorrCoef[15];                    /* 非线性订正因子                                 */
	
	float                  fAntennaCoefFor98Pixel[196];                  /* 天线订正因子                                   */

	float                  fChsCentralWavenumber[15];                    /* 通道中心频率                                   */
	
	float                  fCoefficientAG[15];                           /* 数据覆盖时段定标系数增益平均值                 */

	float                  fCoefficientSG[15];                           /* 数据覆盖时段定标系数增益标准差                 */

	float                  fCoefficientAI[15];                           /* 数据覆盖时段定标系数截距平均值                 */

	float                  fCoefficientSI[15];                           /* 数据覆盖时段定标系数截距标准差                 */

	float                  fCoefficientA2[15];                           /* 数据覆盖时段定标系数二次项平均值               */

	float                  fCoefficientS2[15];                           /* 数据覆盖时段定标系数二次项标准差               */

	float                  fAveInstruTemp[2];                            /* 数据覆盖时段仪器温度平均值                     */

	float                  fSIGMInstruTemp[2];                           /* 数据覆盖时段仪器温度标准差                     */

	float                  fBBDNAve[15];                                 /* 数据覆盖时段黑体计数值平均值                   */

	float                  fBBDNSigm[15];                                /* 数据覆盖时段黑体计数值标准差                   */

	float                  fSPDNAve[15];                                 /* 数据覆盖时段冷空计数值平均值                   */

	float                  fSPDNSigm[15];                                /* 数据覆盖时段冷空计数值标准差                   */

	float                  fPRTTempAve[2];                               /* 数据覆盖时段PRT温度平均值                      */

	float                  fPRTTempSigm[2];                              /* 数据覆盖时段PRT温度标准差                      */

	short                  iCountScnlinesSPViewLunarContaminated;        /* 外空测值受到月亮污染的扫描线数                 */

};  
                                                                                                                                                                               

/* FY3微波温度计L1级数据 */                                                                                                                                                   

struct FY3_MWTS_L1B_FILE_INFO                                                                                                                                                   

{                                                                                                                                                                               

	char                   strSatelliteName[8];                          /* 卫星名称（如FY-3C等）                          */

	char                   strSensorName[128];                           /* 仪器名称  "Microwave Temperature Sounder"      */

	char                   strSensorIdentificationCode[12];              /* 传感器代码（如MWTS）                           */

	char                   strDatasetName[64];                           /* 数据集名称（如Global MWTS Data）               */

	char                   strFileName[256];                             /* 文件名称                                       */

	char                   strFileAliasName[256];                        /* 文件别名                                       */

	char                   strResponser[32];                             /* 产品生成地（NSMC）                             */

	char                   strVersionOfSoftware[32];                     /* 处理软件版本号(如V1.0.0)                       */

	char                   strDateOfSoftwareRevision[32];                /* 处理软件更新日期                               */

	char                   strVersionOfCoefficientIndex[32];             /* 定标系数版本号                                 */

	char                   strDateOfCoefficientIndexRevision[32];        /* 定标系数更新日期                               */

	char                   strDateOfObservingBeginning[32];              /* 数据观测开始日期(包括年月日)                   */

	char                   strTimeOfObservingBeginning[32];              /* 数据观测开始时间（包括时分秒毫秒）             */

	char                   strDateOfObservingEnding[32];                 /* 数据观测结束日期(包括年月日)                   */

	char                   strTimeOfObservingEnding[32];                 /* 数据观测结束时间（包括时分秒毫秒）             */

	char                   strDateOfDataCreating[32];                    /* 数据创建日期(包括年月日)                       */

	char                   strTimeOfDataCreating[32];                    /* 数据创建时间（包括时分秒毫秒）                 */

	char                   strDayOrNightFlag[8];                         /* 白天夜间标志                                   */

	unsigned int           dwOrbitNumber;                                /* 轨道号                                         */

	unsigned short int     wOrbitPeriod;                                 /* 轨道周期                                       */

	char                   strOrbitDirection[8];                         /* 轨道方向                                       */

	unsigned char          cDataQuality;                                 /* 数据质量标记(0-5级)                            */

	int                    iNumberOfScans;                               /* 总扫描线数                                     */

	int                    iNumberOfDaymodescans;                        /* 白天模式扫描线数                               */

	int                    iNumberofNightmodescans;                      /* 晚上模式扫描线数                               */

	int                    iIncompleteScans;                             /* 不完整的扫描线数                               */

	unsigned char          cQAScanFlag;                                  /* 扫描线质量检验码、按扫描线                     */

	unsigned short int     wQAPixelFlag;                                 /* 象元质量检验码、按扫描线                       */

	unsigned short int     wBeginLineNumber;                             /* 起始行号                                       */

	unsigned short int     wEndLineNumber;                               /* 结束行号                                       */

	unsigned short int     wBeginPixelNumber;                            /* 起始象元号                                     */

	unsigned short int     wEndPixelNumber;                              /* 结束象元号                                     */

	char                   strReferenceEllipsoidModelID;                 /* 地球椭球参考坐标系ID（WGS84）                  */

	double                 dEarthSunDistanceRatio;                       /* 日地距离比                                     */

	char                   strMeanAnomaly[12];                           /* 平近地点角（度）                               */

	char                   strMeanMotion[12];                            /* 平均运动                                       */

	char                   strEccentricity[12];                          /* 偏心率                                         */

	char                   strPerigeeArgument[12];                       /* 近地点俯角（度）                               */

	char                   strAscendingNodeLongitude[12];                /* 升交点赤经（度）                               */

	char                   strOrbitalInclination[12];                    /* 轨道倾角（度）                                 */

	char                   strEpochTime[12];                             /* 历元时间                                       */

	float                  fOrbitPointLatitude[4];                       /* 轨道4个角点纬度                                */

	float                  fOrbitPointLongitude[4];                      /* 轨道4个角点经度                                */

	char                   strAdditionalAnotation[1024];                 /* 文件的附加说明(可以对文件的使用、创建人等说明) */

	                                                                     
	int                    iCountScnlines;                               /* 总帧数                                         */
	
	int                    iCountScnlinesCalibrated;                     /* 完成数据预处理的扫描线数                       */
	
	int                    iCountTimeSeqErr;                             /* 时序出错帧数                                   */
	
	int                    iCountMissingScnlines;                        /* 丢帧数                                         */
	
	int                    iCountCaliErrScans;                           /* 定标失败帧数                                   */
	
	int                    iCountGeolErrScans;                           /* 定位失败帧数                                   */
	
	float                  fChsCentralWavenumber[13];                    /* 通道中心频率                                   */
	
	short int              iCountScnlinesSPViewLunarContaminated;        /* 冷空观测数据受到污染的扫描线数                 */

};

/* FY3微波温度计L1_OBC数据 */                                                                                                                                                   

struct FY3_MWTSOBC_L1B_FILE_INFO                                                                                                                                                   

{                                                                                                                                                                               

	char                   strSatelliteName[8];                          /* 卫星名称（如FY-3C等）                          */

	char                   strSensorName[128];                           /* 仪器名称  "Microwave Temperature Sounder"      */

	char                   strSensorIdentificationCode[12];              /* 传感器代码（如MWTS）                           */

	char                   strDatasetName[64];                           /* 数据集名称（如Global MWTS Data）               */

	char                   strFileName[256];                             /* 文件名称                                       */

	char                   strFileAliasName[256];                        /* 文件别名                                       */

	char                   strResponser[32];                             /* 产品生成地（NSMC）                             */

	char                   strVersionOfSoftware[32];                     /* 处理软件版本号(如V1.0.0)                       */

	char                   strDateOfSoftwareRevision[32];                /* 处理软件更新日期                               */

	char                   strVersionOfCoefficientIndex[32];             /* 定标系数版本号                                 */

	char                   strDateOfCoefficientIndexRevision[32];        /* 定标系数更新日期                               */

	char                   strDateOfObservingBeginning[32];              /* 数据观测开始日期(包括年月日)                   */

	char                   strTimeOfObservingBeginning[32];              /* 数据观测开始时间（包括时分秒毫秒）             */

	char                   strDateOfObservingEnding[32];                 /* 数据观测结束日期(包括年月日)                   */

	char                   strTimeOfObservingEnding[32];                 /* 数据观测结束时间（包括时分秒毫秒）             */

	char                   strDateOfDataCreating[32];                    /* 数据创建日期(包括年月日)                       */

	char                   strTimeOfDataCreating[32];                    /* 数据创建时间（包括时分秒毫秒）                 */

	char                   strDayOrNightFlag[8];                         /* 白天夜间标志                                   */

	unsigned int           dwOrbitNumber;                                /* 轨道号                                         */

	unsigned short int     wOrbitPeriod;                                 /* 轨道周期                                       */

	char                   strOrbitDirection[8];                         /* 轨道方向                                       */

	unsigned char          cDataQuality;                                 /* 数据质量标记(0-5级)                            */

	int                    iNumberOfScans;                               /* 总扫描线数                                     */

	int                    iNumberOfDaymodescans;                        /* 白天模式扫描线数                               */

	int                    iNumberofNightmodescans;                      /* 晚上模式扫描线数                               */

	int                    iIncompleteScans;                             /* 不完整的扫描线数                               */

	unsigned char          cQAScanFlag;                                  /* 扫描线质量检验码、按扫描线                     */

	unsigned short int     wQAPixelFlag;                                 /* 象元质量检验码、按扫描线                       */

	unsigned short int     wBeginLineNumber;                             /* 起始行号                                       */

	unsigned short int     wEndLineNumber;                               /* 结束行号                                       */

	unsigned short int     wBeginPixelNumber;                            /* 起始象元号                                     */

	unsigned short int     wEndPixelNumber;                              /* 结束象元号                                     */

	char                   strReferenceEllipsoidModelID;                 /* 地球椭球参考坐标系ID（WGS84）                  */

	double                 dEarthSunDistanceRatio;                       /* 日地距离比                                     */

	char                   strMeanAnomaly[12];                           /* 平近地点角（度）                               */

	char                   strMeanMotion[12];                            /* 平均运动                                       */

	char                   strEccentricity[12];                          /* 偏心率                                         */

	char                   strPerigeeArgument[12];                       /* 近地点俯角（度）                               */

	char                   strAscendingNodeLongitude[12];                /* 升交点赤经（度）                               */

	char                   strOrbitalInclination[12];                    /* 轨道倾角（度）                                 */

	char                   strEpochTime[12];                             /* 历元时间                                       */

	float                  fOrbitPointLatitude[4];                       /* 轨道4个角点纬度                                */

	float                  fOrbitPointLongitude[4];                      /* 轨道4个角点经度                                */

	char                   strAdditionalAnotation[1024];                 /* 文件的附加说明(可以对文件的使用、创建人等说明) */


	unsigned short int     wApplicationID;                               /* 应用标识                                       */

	unsigned short int     wScanningMode;                                /* 扫描模态                                       */

	unsigned short int     wClockUpdateIndicator;                        /* 时钟更新指示( 0 =none during this orbit; otherwise the record number of the first occurrence) */

	int                    iCountScnlines;                               /* 总帧数                                         */

	int                    iPacketLength;                                /* 源包长度                                       */
	
	int                    iScnLinNumberGoodCalibration;                 /* 完成数据预处理的扫描线数                       */
	
	int                    iScnLinNumberBadTime;                         /* 时序出错帧数                                   */
	
	int                    iScnLinNumberMissing;                         /* 丢帧数                                         */
	
	int                    iCountCaliErrScans;                           /* 定标失败帧数                                   */
	
	int                    iCountGeolErrScans;                           /* 定位失败帧数                                   */
	
	char                   strVersionOfRadianceCorrectingData[32];       /* 辐射订正数据版本号                             */

	char                   strDateOfRadianceCorrectingDataVersion[32];   /* 辐射订正数据更新日期                           */

	char                   strVersionOfBasicCalibrationData[32];         /* 定标基础参数数据版本号                         */

	char                   strDateOfBasicCalibrationDataVersion[32];     /* 定标基础参数数据更新日期                       */

	short int              iNumberofPRT[5];                              /* PRT数量                                        */

	short int              iNumberofBlackbody;                           /* 黑体数量                                       */

	short int              iNumberofBBSPView;                            /* 黑体-外空观测数                                */

	float                  fPRTTemperatureCoefficient[15];               /* PRT温度转换系数                                */

	float                  fColdSpaceFixedBias[13];                      /* 冷空观测订正值                                 */

	float                  fWarmTargetFixedBias[13];                     /* 黑体偏差订正                                   */
	
	float                  fRefInstTemp;                                 /* 仪器定标参考温度                               */
	
	float                  fNonlinearityCorrCoef[13];                    /* 非线性订正因子                                 */
	
	float                  fAntennaCoefForAllPixel[1170];                /* 天线订正因子                                   */
	
	float                  fChsCentralWavenumber[13];                    /* 通道中心频率                                   */
	
	float                  fCoefficientAG[13];                           /* 数据覆盖时段定标系数增益平均值                 */

	float                  fCoefficientSG[13];                           /* 数据覆盖时段定标系数增益标准差                 */

	float                  fCoefficientAI[13];                           /* 数据覆盖时段定标系数截距平均值                 */

	float                  fCoefficientSI[13];                           /* 数据覆盖时段定标系数截距标准差                 */

	float                  fCoefficientA2[13];                           /* 数据覆盖时段定标系数二次项平均值               */

	float                  fCoefficientS2[13];                           /* 数据覆盖时段定标系数二次项标准差               */
 
	float                  fInstruTempAved;                              /* 数据覆盖时段仪器温度平均值                     */

	float                  fInstruTempSigm;                              /* 数据覆盖时段仪器温度标准差                     */

	float                  fBBDNAved[13];                                /* 数据覆盖时段黑体计数值平均值                   */

	float                  fBBDNSigm[13];                                /* 数据覆盖时段黑体计数值标准差                   */
	
	float                  fSPDNAved[13];                                /* 数据覆盖时段冷空计数值平均值                   */
	
	float                  fSPDNSigm[13];                                /* 数据覆盖时段冷空计数值标准差                   */
	
	float                  fPRTTempAved;                                 /* 数据覆盖时段PRT温度平均值                      */
	
	float                  fPRTTempSigm;                                 /* 数据覆盖时段PRT温度标准差                      */

	short int              iCountScnlinesSPViewLunarContaminated;        /* 冷空观测数据受到污染的扫描线数                 */

};

/* FY3中分辨率光谱成像仪L1级数据（250M） */

struct FY3_MERSI250M_L1B_FILE_INFO

{

	char                   strSatelliteName[8];                          /* 卫星名称（如FY-3C等）                          */

	char                   strSensorName[128];                           /* 仪器名称  "Medium Resolution Spectral Imager"  */

	char                   strSensorIdentificationCode[12];              /* 传感器代码（如MERSI）                          */

	char                   strDatasetName[64];                           /* 数据集名称（如MPT）                            */

	char                   strFileName[256];                             /* 文件名称                                       */

	char                   strFileAliasName[256];                        /* 文件别名                                       */

	char                   strResponser[32];                             /* 产品生成地（NSMC）                             */

	char                   strVersionOfSoftware[32];                     /* 处理软件版本号(如V1.0.0)                       */

	char                   strDateOfSoftwareRevision[32];                /* 处理软件更新日期                               */

	char                   strVersionOfCoefficientIndex[32];             /* 定标系数版本号                                 */

	char                   strDateOfCoefficientIndexRevision[32];        /* 定标系数更新日期                               */

	char                   strDateOfObservingBeginning[32];              /* 数据观测开始日期(包括年月日)                   */

	char                   strTimeOfObservingBeginning[32];              /* 数据观测开始时间（包括时分秒毫秒）             */

	char                   strDateOfObservingEnding[32];                 /* 数据观测结束日期(包括年月日)                   */

	char                   strTimeOfObservingEnding[32];                 /* 数据观测结束时间（包括时分秒毫秒）             */

	char                   strDateOfDataCreating[32];                    /* 数据创建日期(包括年月日)                       */

	char                   strTimeOfDataCreating[32];                    /* 数据创建时间（包括时分秒毫秒）                 */

	char                   strDayOrNightFlag[8];                         /* 白天夜间标志                                   */

	unsigned int           dwOrbitNumber;                                /* 轨道号                                         */

	unsigned short int     wOrbitPeriod;                                 /* 轨道周期                                       */

	char                   strOrbitDirection[8];                         /* 轨道方向                                       */

	unsigned char          cDataQuality;                                 /* 数据质量标记(0-5级)                            */

	int                    iNumberOfScans;                               /* 总扫描数                                       */

	int                    iNumberOfDaymodescans;                        /* 白天模式扫描数                                 */

	int                    iNumberofNightmodescans;                      /* 晚上模式扫描数                                 */

	int                    iIncompleteScans;                             /* 不完整的扫描数                                 */

	unsigned char          cQAScanFlag;                                  /* 扫描线质量检验码、按扫描线                     */

	unsigned short int     wQAPixelFlag;                                 /* 象元质量检验码、按扫描线                       */

	unsigned short int     wBeginLineNumber;                             /* 起始行号                                       */

	unsigned short int     wEndLineNumber;                               /* 结束行号                                       */

	unsigned short int     wBeginPixelNumber;                            /* 起始象元号                                     */

	unsigned short int     wEndPixelNumber;                              /* 结束象元号                                     */

	char                   strReferenceEllipsoidModelID[12];             /* 地球椭球参考坐标系ID（WGS84）                  */

	double                 dEarthSunDistanceRatio;                       /* 日地距离比                                     */

	double                 strEpochTime;                                 /* 历元时间                                       */

	double                 strMeanMotion;                                /* 平均运动                                       */

	double                 strEccentricity;                              /* 偏心率                                         */

	double                 strOrbitalInclination;                        /* 轨道倾角                                       */

	double                 strAscendingNodeLongitude;                    /* 升交点赤经                                     */

	double                 strPerigeeArgument;                           /* 近地点俯角                                     */

	double                 strMeanAnomaly;                               /* 平近地点角                                     */                                

	float                  fOrbitPointLatitude[4];                       /* 轨道4个角点纬度                                */

	float                  fOrbitPointLongitude[4];                      /* 轨道4个角点经度                                */

	char                   strAdditionalAnotation[1024];                 /* 文件的附加说明(可以对文件的使用、创建人等说明) */


	int                    iIncompletedScans;                            /* 不完整的扫描数                                 */

	int                    iMissingPackets;                              /* 缺帧数                                         */

	int                    iDiscardedpackets;                            /* 抛帧包数                                       */

	short int              iCountCaliErrScans;                           /* 定标失败扫描数                                 */
	
	short int              iCountGeolErrScans;                           /* 定位失败扫描数                                 */

	short int              iBBCountContaminatedScans;                    /* 黑体观测数据受到污染的扫描线                   */

	short int              iSVCountContaminatedScans;                    /* 冷空观测数据受到污染的扫描线                   */

};

/*  FY3B中分辨率光谱成像仪L1级数据（1000M） */

struct FY3B_MERSI1000M_L1B_FILE_INFO

{

	char                   strSatelliteName[8];                          /* 卫星名称（如FY-3C等）                          */

	char                   strSensorName[128];                           /* 仪器名称  "Medium Resolution Spectral Imager"  */

	char                   strSensorIdentificationCode[12];              /* 传感器代码（如MERSI）                          */

	char                   strDatasetName[64];                           /* 数据集名称（如MPT）                            */

	char                   strFileName[256];                             /* 文件名称                                       */

	char                   strFileAliasName[256];                        /* 文件别名                                       */

	char                   strResponser[32];                             /* 产品生成地（NSMC）                             */

	char                   strVersionOfSoftware[32];                     /* 处理软件版本号(如V1.0.0)                       */

	char                   strDateOfSoftwareRevision[32];                /* 处理软件更新日期                               */

	char                   strVersionOfCoefficientIndex[32];             /* 定标系数版本号                                 */

	char                   strDateOfCoefficientIndexRevision[32];        /* 定标系数更新日期                               */

	char                   strDateOfObservingBeginning[32];              /* 数据观测开始日期(包括年月日)                   */

	char                   strTimeOfObservingBeginning[32];              /* 数据观测开始时间（包括时分秒毫秒）             */

	char                   strDateOfObservingEnding[32];                 /* 数据观测结束日期(包括年月日)                   */

	char                   strTimeOfObservingEnding[32];                 /* 数据观测结束时间（包括时分秒毫秒）             */

	char                   strDateOfDataCreating[32];                    /* 数据创建日期(包括年月日)                       */

	char                   strTimeOfDataCreating[32];                    /* 数据创建时间（包括时分秒毫秒）                 */

	char                   strDayOrNightFlag[8];                         /* 白天夜间标志                                   */

	unsigned int           dwOrbitNumber;                                /* 轨道号                                         */

	unsigned short int     wOrbitPeriod;                                 /* 轨道周期                                       */

	char                   strOrbitDirection[8];                         /* 轨道方向                                       */

	unsigned char          cDataQuality;                                 /* 数据质量标记(0-5级)                            */

	int                    iNumberOfScans;                               /* 总扫描数                                       */

	int                    iNumberOfDaymodescans;                        /* 白天模式扫描数                                 */

	int                    iNumberofNightmodescans;                      /* 晚上模式扫描数                                 */

	int                    iIncompleteScans;                             /* 不完整的扫描数                                 */

	unsigned char          cQAScanFlag;                             /* 扫描线质量检验码、按扫描线                     */

	unsigned short int     wQAPixelFlag;                            /* 象元质量检验码、按扫描线                       */

	unsigned short int     wBeginLineNumber;                             /* 起始行号                                       */

	unsigned short int     wEndLineNumber;                               /* 结束行号                                       */

	unsigned short int     wBeginPixelNumber;                            /* 起始象元号                                     */

	unsigned short int     wEndPixelNumber;                              /* 结束象元号                                     */

	char                   strReferenceEllipsoidModelID[12];             /* 地球椭球参考坐标系ID（WGS84）                  */

	double                 dEarthSunDistanceRatio;                       /* 日地距离比                                     */

	char                   strEpochTime[7];                                 /* 历元时间                                       */

	char                   strMeanMotion[10];                                /* 平均运动                                       */

	char                   strEccentricity[10];                              /* 偏心率                                         */

	char                   strOrbitalInclination[10];                        /* 轨道倾角                                       */

	char                   strAscendingNodeLongitude[10];                    /* 升交点赤经                                     */

	char                   strPerigeeArgument[10];                           /* 近地点俯角                                     */

	char                   strMeanAnomaly[10];                               /* 平近地点角                                     */                                

	float                  fOrbitPointLatitude[4];                       /* 轨道4个角点纬度                                */

	float                  fOrbitPointLongitude[4];                      /* 轨道4个角点经度                                */

	char                   strAdditionalAnotation[1024];                 /* 文件的附加说明(可以对文件的使用、创建人等说明) */

	
	int                    iIncompletedScans;                            /* 不完整的扫描数                                 */

	int                    iMissingPackets;                              /* 缺帧数                                         */

	int                    iDiscardedpackets;                            /* 抛帧包数                                       */

	short int              iCountCaliErrScans;                           /* 定标失败扫描数                                 */
	
	short int              iCountGeolErrScans;                           /* 定位失败扫描数                                 */

	short int              iBBCountContaminatedScans;                    /* 黑体观测数据受到污染的扫描线                   */

	short int              iSVCountContaminatedScans;                    /* 冷空观测数据受到污染的扫描线                   */

	float                  fIRCalCoeff[800];                   /* 定标系数                                  */
	float                  fVIRCalCoeff[57];                   /* 定标系数                                 */

	float                  fEffectCenterWaveLenth[20];                   /* 各通道中心波长                                 */
	float                  fBandResponseFunction[800];                   /* 各通道光谱影响                                 */
}; 


/*  FY3中分辨率光谱成像仪L1级数据（1000M） */

struct FY3_MERSI1000M_L1B_FILE_INFO

{

	char                   strSatelliteName[8];                          /* 卫星名称（如FY-3C等）                          */

	char                   strSensorName[128];                           /* 仪器名称  "Medium Resolution Spectral Imager"  */

	char                   strSensorIdentificationCode[12];              /* 传感器代码（如MERSI）                          */

	char                   strDatasetName[64];                           /* 数据集名称（如MPT）                            */

	char                   strFileName[256];                             /* 文件名称                                       */

	char                   strFileAliasName[256];                        /* 文件别名                                       */

	char                   strResponser[32];                             /* 产品生成地（NSMC）                             */

	char                   strVersionOfSoftware[32];                     /* 处理软件版本号(如V1.0.0)                       */

	char                   strDateOfSoftwareRevision[32];                /* 处理软件更新日期                               */

	char                   strVersionOfCoefficientIndex[32];             /* 定标系数版本号                                 */

	char                   strDateOfCoefficientIndexRevision[32];        /* 定标系数更新日期                               */

	char                   strDateOfObservingBeginning[32];              /* 数据观测开始日期(包括年月日)                   */

	char                   strTimeOfObservingBeginning[32];              /* 数据观测开始时间（包括时分秒毫秒）             */

	char                   strDateOfObservingEnding[32];                 /* 数据观测结束日期(包括年月日)                   */

	char                   strTimeOfObservingEnding[32];                 /* 数据观测结束时间（包括时分秒毫秒）             */

	char                   strDateOfDataCreating[32];                    /* 数据创建日期(包括年月日)                       */

	char                   strTimeOfDataCreating[32];                    /* 数据创建时间（包括时分秒毫秒）                 */

	char                   strDayOrNightFlag[8];                         /* 白天夜间标志                                   */

	unsigned int           dwOrbitNumber;                                /* 轨道号                                         */

	unsigned short int     wOrbitPeriod;                                 /* 轨道周期                                       */

	char                   strOrbitDirection[8];                         /* 轨道方向                                       */

	unsigned char          cDataQuality;                                 /* 数据质量标记(0-5级)                            */

	int                    iNumberOfScans;                               /* 总扫描数                                       */

	int                    iNumberOfDaymodescans;                        /* 白天模式扫描数                                 */

	int                    iNumberofNightmodescans;                      /* 晚上模式扫描数                                 */

	int                    iIncompleteScans;                             /* 不完整的扫描数                                 */

	unsigned char          cQAScanFlag;                                  /* 扫描线质量检验码、按扫描线                     */

	unsigned short int     wQAPixelFlag;                                 /* 象元质量检验码、按扫描线                       */

	unsigned short int     wBeginLineNumber;                             /* 起始行号                                       */

	unsigned short int     wEndLineNumber;                               /* 结束行号                                       */

	unsigned short int     wBeginPixelNumber;                            /* 起始象元号                                     */

	unsigned short int     wEndPixelNumber;                              /* 结束象元号                                     */

	char                   strReferenceEllipsoidModelID[12];             /* 地球椭球参考坐标系ID（WGS84）                  */

	double                 dEarthSunDistanceRatio;                       /* 日地距离比                                     */

	double                 strEpochTime;                                 /* 历元时间                                       */

	double                 strMeanMotion;                                /* 平均运动                                       */

	double                 strEccentricity;                              /* 偏心率                                         */

	double                 strOrbitalInclination;                        /* 轨道倾角                                       */

	double                 strAscendingNodeLongitude;                    /* 升交点赤经                                     */

	double                 strPerigeeArgument;                           /* 近地点俯角                                     */

	double                 strMeanAnomaly;                               /* 平近地点角                                     */                                

	float                  fOrbitPointLatitude[4];                       /* 轨道4个角点纬度                                */

	float                  fOrbitPointLongitude[4];                      /* 轨道4个角点经度                                */

	char                   strAdditionalAnotation[1024];                 /* 文件的附加说明(可以对文件的使用、创建人等说明) */

	
	int                    iIncompletedScans;                            /* 不完整的扫描数                                 */

	int                    iMissingPackets;                              /* 缺帧数                                         */

	int                    iDiscardedpackets;                            /* 抛帧包数                                       */

	short int              iCountCaliErrScans;                           /* 定标失败扫描数                                 */
	
	short int              iCountGeolErrScans;                           /* 定位失败扫描数                                 */

	short int              iBBCountContaminatedScans;                    /* 黑体观测数据受到污染的扫描线                   */

	short int              iSVCountContaminatedScans;                    /* 冷空观测数据受到污染的扫描线                   */

	float                  fEffectCenterWaveLenth[20];                   /* 各通道中心波长                                 */
	
	float                  fBandResponseFunction[800];                   /* 各通道光谱影响                                 */
};                                                                                                                                     

/* FY3中分辨率光谱成像仪L1级数据（OBC） */

struct FY3_MERSIOBC_L1B_FILE_INFO

{

	char                   strSatelliteName[8];                          /* 卫星名称（如FY-3C等）                          */

	char                   strSensorName[128];                           /* 仪器名称  "Medium Resolution Spectral Imager"  */

	char                   strSensorIdentificationCode[12];              /* 传感器代码（如MERSI）                          */

	char                   strDatasetName[64];                           /* 数据集名称（如MPT）                            */

	char                   strFileName[256];                             /* 文件名称                                       */

	char                   strFileAliasName[256];                        /* 文件别名                                       */

	char                   strResponser[32];                             /* 产品生成地（NSMC）                             */

	char                   strVersionOfSoftware[32];                     /* 处理软件版本号(如V1.0.0)                       */

	char                   strDateOfSoftwareRevision[32];                /* 处理软件更新日期                               */

	char                   strVersionOfCoefficientIndex[32];             /* 定标系数版本号                                 */

	char                   strDateOfCoefficientIndexRevision[32];        /* 定标系数更新日期                               */

	char                   strDateOfObservingBeginning[32];              /* 数据观测开始日期(包括年月日)                   */

	char                   strTimeOfObservingBeginning[32];              /* 数据观测开始时间（包括时分秒毫秒）             */

	char                   strDateOfObservingEnding[32];                 /* 数据观测结束日期(包括年月日)                   */

	char                   strTimeOfObservingEnding[32];                 /* 数据观测结束时间（包括时分秒毫秒）             */

	char                   strDateOfDataCreating[32];                    /* 数据创建日期(包括年月日)                       */

	char                   strTimeOfDataCreating[32];                    /* 数据创建时间（包括时分秒毫秒）                 */

	char                   strDayOrNightFlag[8];                         /* 白天夜间标志                                   */

	unsigned int           dwOrbitNumber;                                /* 轨道号                                         */

	unsigned short int     wOrbitPeriod;                                 /* 轨道周期                                       */

	char                   strOrbitDirection[8];                         /* 轨道方向                                       */

	unsigned char          cDataQuality;                                 /* 数据质量标记(1-5级)                            */

	int                    iNumberOfScans;                               /* 总扫描数                                       */

	int                    iNumberOfDaymodescans;                        /* 白天模式扫描数                                 */

	int                    iNumberofNightmodescans;                      /* 晚上模式扫描数                                 */

	int                    iIncompleteScans;                             /* 不完整的扫描数                                 */

	unsigned char          cQAScanFlag;                                  /* 扫描线质量检验码、按扫描线                     */

	unsigned short int     wQAPixelFlag;                                 /* 象元质量检验码、按扫描线                       */

	unsigned short int     wBeginLineNumber;                             /* 起始行号                                       */

	unsigned short int     wEndLineNumber;                               /* 结束行号                                       */

	unsigned short int     wBeginPixelNumber;                            /* 起始象元号                                     */

	unsigned short int     wEndPixelNumber;                              /* 结束象元号                                     */

	char                   strReferenceEllipsoidModelID[12];             /* 地球椭球参考坐标系ID（WGS84）                  */

	double                 dEarthSunDistanceRatio;                       /* 日地距离比                                     */

	double                 strEpochTime;                                 /* 历元时间                                       */

	double                 strMeanMotion;                                /* 平均运动                                       */

	double                 strEccentricity;                              /* 偏心率                                         */

	double                 strOrbitalInclination;                        /* 轨道倾角                                       */

	double                 strAscendingNodeLongitude;                    /* 升交点赤经                                     */

	double                 strPerigeeArgument;                           /* 近地点俯角                                     */

	double                 strMeanAnomaly;                               /* 平近地点角                                     */                                

	float                  fOrbitPointLatitude[4];                       /* 轨道4个角点纬度                                */

	float                  fOrbitPointLongitude[4];                      /* 轨道4个角点经度                                */

	char                   strAdditionalAnotation[1024];                 /* 文件的附加说明(可以对文件的使用、创建人等说明) */


	int                    iIncompletedScans;                            /* 不完整的扫描数                                 */

	int                    iMissingPackets;                              /* 缺帧数                                         */

	int                    iDiscardedpackets;                            /* 抛帧包数                                       */

	short int              iCountCaliErrScans;                           /* 定标失败扫描数                                 */
	
	short int              iCountGeolErrScans;                           /* 定位失败扫描数                                 */

	short int              iBBCountContaminatedScans;                    /* 黑体观测数据受到污染的扫描线                   */

	short int              iSVCountContaminatedScans;                    /* 冷空观测数据受到污染的扫描线                   */

};

/* FY3中分辨率光谱成像仪L1级数据（250MGEO） */

struct FY3_MERSI250MGEO_L1B_FILE_INFO

{

	char                   strSatelliteName[8];                          /* 卫星名称（如FY-3C等）                          */

	char                   strSensorName[128];                           /* 仪器名称  "Medium Resolution Spectral Imager"  */

	char                   strSensorIdentificationCode[12];              /* 传感器代码（如MERSI）                          */

	char                   strDatasetName[64];                           /* 数据集名称（如MPT）                            */

	char                   strFileName[256];                             /* 文件名称                                       */

	char                   strFileAliasName[256];                        /* 文件别名                                       */

	char                   strResponser[32];                             /* 产品生成地（NSMC）                             */

	char                   strVersionOfSoftware[32];                     /* 处理软件版本号(如V1.0.0)                       */

	char                   strDateOfSoftwareRevision[32];                /* 处理软件更新日期                               */

	char                   strVersionOfCoefficientIndex[32];             /* 定标系数版本号                                 */

	char                   strDateOfCoefficientIndexRevision[32];        /* 定标系数更新日期                               */

	char                   strDateOfObservingBeginning[32];              /* 数据观测开始日期(包括年月日)                   */

	char                   strTimeOfObservingBeginning[32];              /* 数据观测开始时间（包括时分秒毫秒）             */

	char                   strDateOfObservingEnding[32];                 /* 数据观测结束日期(包括年月日)                   */

	char                   strTimeOfObservingEnding[32];                 /* 数据观测结束时间（包括时分秒毫秒）             */

	char                   strDateOfDataCreating[32];                    /* 数据创建日期(包括年月日)                       */

	char                   strTimeOfDataCreating[32];                    /* 数据创建时间（包括时分秒毫秒）                 */

	char                   strDayOrNightFlag[8];                         /* 白天夜间标志                                   */

	unsigned int           dwOrbitNumber;                                /* 轨道号                                         */

	unsigned short int     wOrbitPeriod;                                 /* 轨道周期                                       */

	char                   strOrbitDirection[8];                         /* 轨道方向                                       */

	unsigned char          cDataQuality;                                 /* 数据质量标记(0-5级)                            */

	int                    iNumberOfScans;                               /* 总扫描数                                       */

	int                    iNumberOfDaymodescans;                        /* 白天模式扫描数                                 */

	int                    iNumberofNightmodescans;                      /* 晚上模式扫描数                                 */

	int                    iIncompleteScans;                             /* 不完整的扫描数                                 */

	unsigned char          cQAScanFlag;                                  /* 扫描线质量检验码、按扫描线                     */

	unsigned short int     wQAPixelFlag;                                 /* 象元质量检验码、按扫描线                       */

	unsigned short int     wBeginLineNumber;                             /* 起始行号                                       */

	unsigned short int     wEndLineNumber;                               /* 结束行号                                       */

	unsigned short int     wBeginPixelNumber;                            /* 起始象元号                                     */

	unsigned short int     wEndPixelNumber;                              /* 结束象元号                                     */

	char                   strReferenceEllipsoidModelID[12];             /* 地球椭球参考坐标系ID（WGS84）                  */

	double                 dEarthSunDistanceRatio;                       /* 日地距离比                                     */

	double                 strEpochTime;                                 /* 历元时间                                       */

	double                 strMeanMotion;                                /* 平均运动                                       */

	double                 strEccentricity;                              /* 偏心率                                         */

	double                 strOrbitalInclination;                        /* 轨道倾角                                       */

	double                 strAscendingNodeLongitude;                    /* 升交点赤经                                     */

	double                 strPerigeeArgument;                           /* 近地点俯角                                     */

	double                 strMeanAnomaly;                               /* 平近地点角                                     */                                

	float                  fOrbitPointLatitude[4];                       /* 轨道4个角点纬度                                */

	float                  fOrbitPointLongitude[4];                      /* 轨道4个角点经度                                */

	char                   strAdditionalAnotation[1024];                 /* 文件的附加说明(可以对文件的使用、创建人等说明) */

};

/* FY3中分辨率光谱成像仪L1级数据（1000MGEO） */

struct FY3_MERSI1000MGEO_L1B_FILE_INFO

{
	char                   strSatelliteName[8];                          /* 卫星名称（如FY-3C等）                          */

	char                   strSensorName[128];                           /* 仪器名称  "Medium Resolution Spectral Imager"  */

	char                   strSensorIdentificationCode[12];              /* 传感器代码（如MERSI）                          */

	char                   strDatasetName[64];                           /* 数据集名称（如MPT）                            */

	char                   strFileName[256];                             /* 文件名称                                       */

	char                   strFileAliasName[256];                        /* 文件别名                                       */

	char                   strResponser[32];                             /* 产品生成地（NSMC）                             */

	char                   strVersionOfSoftware[32];                     /* 处理软件版本号(如V1.0.0)                       */

	char                   strDateOfSoftwareRevision[32];                /* 处理软件更新日期                               */

	char                   strVersionOfCoefficientIndex[32];             /* 定标系数版本号                                 */

	char                   strDateOfCoefficientIndexRevision[32];        /* 定标系数更新日期                               */

	char                   strDateOfObservingBeginning[32];              /* 数据观测开始日期(包括年月日)                   */

	char                   strTimeOfObservingBeginning[32];              /* 数据观测开始时间（包括时分秒毫秒）             */

	char                   strDateOfObservingEnding[32];                 /* 数据观测结束日期(包括年月日)                   */

	char                   strTimeOfObservingEnding[32];                 /* 数据观测结束时间（包括时分秒毫秒）             */

	char                   strDateOfDataCreating[32];                    /* 数据创建日期(包括年月日)                       */

	char                   strTimeOfDataCreating[32];                    /* 数据创建时间（包括时分秒毫秒）                 */

	char                   strDayOrNightFlag[8];                         /* 白天夜间标志                                   */

	unsigned int           dwOrbitNumber;                                /* 轨道号                                         */

	unsigned short int     wOrbitPeriod;                                 /* 轨道周期                                       */

	char                   strOrbitDirection[8];                       /* 轨道方向                                       */

	unsigned char          cDataQuality;                                 /* 数据质量标记(1-5级)                            */

	int                    iNumberOfScans;                               /* 总扫描数                                       */

	int                    iNumberOfDaymodescans;                        /* 白天模式扫描数                                 */

	int                    iNumberofNightmodescans;                      /* 晚上模式扫描数                                 */

	int                    iIncompleteScans;                             /* 不完整的扫描数                                 */

	unsigned char          cQAScanFlag;                                  /* 扫描线质量检验码、按扫描线                     */

	unsigned short int     wQAPixelFlag;                                 /* 象元质量检验码、按扫描线                       */

	unsigned short int     wBeginLineNumber;                             /* 起始行号                                       */

	unsigned short int     wEndLineNumber;                               /* 结束行号                                       */

	unsigned short int     wBeginPixelNumber;                            /* 起始象元号                                     */

	unsigned short int     wEndPixelNumber;                              /* 结束象元号                                     */

	char                   strReferenceEllipsoidModelID[12];             /* 地球椭球参考坐标系ID（WGS84）                  */

	double                 dEarthSunDistanceRatio;                       /* 日地距离比                                     */

	double                 strEpochTime;                                 /* 历元时间                                       */

	double                 strMeanMotion;                                /* 平均运动                                       */

	double                 strEccentricity;                              /* 偏心率                                         */

	double                 strOrbitalInclination;                        /* 轨道倾角                                       */

	double                 strAscendingNodeLongitude;                    /* 升交点赤经                                     */

	double                 strPerigeeArgument;                           /* 近地点俯角                                     */

	double                 strMeanAnomaly;                               /* 平近地点角                                     */                                

	float                  fOrbitPointLatitude[4];                       /* 轨道4个角点纬度                                */

	float                  fOrbitPointLongitude[4];                      /* 轨道4个角点经度                                */

	char                   strAdditionalAnotation[1024];                 /* 文件的附加说明(可以对文件的使用、创建人等说明) */


	int                    iIncompletedScans;                            /* 不完整的扫描数                                 */

	int                    iMissingPackets;                              /* 缺帧数                                         */

	int                    iDiscardedpackets;                            /* 抛帧包数                                       */

	short int              iCountCaliErrScans;                           /* 定标失败扫描数                                 */
	
	short int              iCountGeolErrScans;                           /* 定位失败扫描数                                 */

	short int              iBBCountContaminatedScans;                    /* 黑体观测数据受到污染的扫描线                   */

	short int              iSVCountContaminatedScans;                    /* 冷空观测数据受到污染的扫描线                   */

};

/* FY3紫外臭氧垂直探测仪L1数据 */

struct FY3_SBUS_L1B_FILE_INFO

{

	char                   strSatelliteName[8];                          /* 卫星名称（如FY-3C等）                          */

	char                   strSensorName[128];                           /* 仪器名称"Solar Backscatter Ultraviolet Sounder"*/

	char                   strSensorIdentificationCode[12];              /* 传感器代码（如SUBS）                           */

	char                   strDatasetName[64];                           /* 数据集名称（如Global SBUS Data）               */

	char                   strFileName[256];                             /* 文件名称                                       */

	char                   strFileAliasName[256];                        /* 文件别名                                       */

	char                   strResponser[32];                             /* 产品生成地（NSMC）                             */

	char                   strVersionOfSoftware[32];                     /* 处理软件版本号(如V1.0.0)                       */

	char                   strDateOfSoftwareRevision[32];                /* 处理软件更新日期                               */

	char                   strVersionOfCoefficientIndex[32];             /* 定标系数版本号                                 */

	char                   strDateOfCoefficientIndexRevision[32];        /* 定标系数更新日期                               */

	char                   strDateOfObservingBeginning[32];              /* 数据观测开始日期(包括年月日)                   */

	char                   strTimeOfObservingBeginning[32];              /* 数据观测开始时间（包括时分秒毫秒）             */

	char                   strDateOfObservingEnding[32];                 /* 数据观测结束日期(包括年月日)                   */

	char                   strTimeOfObservingEnding[32];                 /* 数据观测结束时间（包括时分秒毫秒）             */

	char                   strDateOfDataCreating[32];                    /* 数据创建日期(包括年月日)                       */

	char                   strTimeOfDataCreating[32];                    /* 数据创建时间（包括时分秒毫秒）                 */

	char                   strDayOrNightFlag[8];                         /* 白天夜间标志                                   */

	unsigned int           dwOrbitNumber;                                /* 轨道号                                         */

	unsigned short int     wOrbitPeriod;                                 /* 轨道周期                                       */

	char                   strOrbitDirection[8];                         /* 轨道方向                                       */

	unsigned char          cDataQuality;                                 /* 数据质量标记(0-5级)                            */

	int                    iNumberOfScans;                               /* 总扫描线数                                     */

	int                    iNumberOfDaymodescans;                        /* 白天模式扫描线数                               */

	int                    iNumberofNightmodescans;                      /* 晚上模式扫描线数                               */

	int                    iIncompleteScans;                             /* 不完整的扫描线数                               */

	unsigned char          cQAScanFlag;                                  /* 扫描线质量检验码、按扫描线                     */

	unsigned short int     wQAPixelFlag;                                 /* 象元质量检验码、按扫描线                       */

	unsigned short int     wBeginLineNumber;                             /* 起始行号                                       */

	unsigned short int     wEndLineNumber;                               /* 结束行号                                       */

	unsigned short int     wBeginPixelNumber;                            /* 起始象元号                                     */

	unsigned short int     wEndPixelNumber;                              /* 结束象元号                                     */

	char                   strReferenceEllipsoidModelID;                 /* 地球椭球参考坐标系ID（WGS84）                  */

	double                 dEarthSunDistanceRatio;                       /* 日地距离比                                     */

	char                   strMeanAnomaly[12];                           /* 平近地点角（度）                               */

	char                   strMeanMotion[12];                            /* 平均运动                                       */

	char                   strEccentricity[12];                          /* 偏心率                                         */

	char                   strPerigeeArgument[12];                       /* 近地点俯角（度）                               */

	char                   strAscendingNodeLongitude[12];                /* 升交点赤经（度）                               */

	char                   strOrbitalInclination[12];                    /* 轨道倾角（度）                                 */

	char                   strEpochTime[12];                             /* 历元时间                                       */

	float                  fOrbitPointLatitude[4];                       /* 轨道4个角点纬度                                */

	float                  fOrbitPointLongitude[4];                      /* 轨道4个角点经度                                */

	char                   strAdditionalAnotation[1024];                 /* 文件的附加说明(可以对文件的使用、创建人等说明) */
	

	unsigned short int     iCountOfFrames;                               /* 整圈数据帧数                                                                                                          */

	unsigned short int     iCountOfPackets;                              /* 整圈数据包数                                                                                                          */

	unsigned short int     iBeginningPacketNumber;                       /* 整圈起始包序号                                                                                                        */

	unsigned short int     iEndingPacketNumber;                          /* 整圈结束包序号                                                                                                        */

	unsigned int           iBeginningTimeInSecond;                       /* 整圈开始时间                                                                                                          */

	unsigned int           iEndingTimeInSecond;                          /* 整圈结束时间                                                                                                          */

	int                    iBeginningTimeForSolarMode;                   /* 太阳模式（包括连续太阳模式、标准灯模式下连续太阳模式或太阳分立模式）观测开始时间（无太阳模式为－999）                 */

	int                    iEndingTimeForSolarMode;                      /* 太阳模式（包括连续太阳模式、标准灯模式下连续太阳模式或太阳分立模式）观测结束时间（无太阳模式为－999）                 */

	unsigned short int     iCountForMissingPackets;                      /* 丢失数据包数                                                                                                          */

	unsigned short int     iCountForTimeSequenceError;                   /* 时序出错包数                                                                                                          */

	short int              iStatusOfSweepModeReferenceDiffuser;          /* 太阳连续模式观测情况（0＝无，1＝有，－1＝观测失败）                                                                   */

	short int              iStatusOfSweepModeStandardDiffuser;           /* 标准灯模式下太阳连续模式观测情况（0＝无，1＝有，－1＝观测失败）                                                       */

	short int              iStatusOfLampModeReferenceDiffuser;           /* 标准灯模式下汞灯观测情况（参考板）（0＝无，1＝有，－1＝观测失败）                                                     */

	short int              iStatusOfLampModeStandardDiffuser;            /* 标准灯模式下汞灯观测情况（标准板）观测情况（0＝无，1＝有，－1＝观测失败）                                             */

	short int              iStatusOfLampModeDarkCurent;                  /* 标准灯模式下暗电流观测情况（标准板）观测情况（0＝无，1＝有，－1＝观测失败）                                           */

	short int              iStatusOfDiscreteSolarMode;                   /* 太阳分立模式观测情况（0＝无，1＝有，－1＝观测失败）                                                                   */

	unsigned short int     iCountForErrorsOfAtmosphericMeasurements;     /* 大气模式失败次数                                                                                                      */

	short int              iStatusOfDarkCurrentFile;                     /* 暗电流文件更新情况（0＝没更新，1＝更新成功，－1＝更新失败）                                                           */

	short int              iStatusOfSolarIrradianceFittingCoeffients;    /* 太阳辐照度拟和系数更新情况（0＝没更新，1＝更新成功，－1＝更新失败）                                                   */


};      

/* FY3紫外臭氧垂直探测仪L1_OBC数据 */

struct FY3_SBUSOBC_L1B_FILE_INFO

{

	char                   strSatelliteName[8];                          /* 卫星名称（如FY-3C等）                          */

	char                   strSensorName[128];                           /* 仪器名称"Solar Backscatter Ultraviolet Sounder"*/

	char                   strSensorIdentificationCode[12];              /* 传感器代码（如SUBS）                           */

	char                   strDatasetName[64];                           /* 数据集名称（如Global SBUS Data）               */

	char                   strFileName[256];                             /* 文件名称                                       */

	char                   strFileAliasName[256];                        /* 文件别名                                       */

	char                   strResponser[32];                             /* 产品生成地（NSMC）                             */

	char                   strVersionOfSoftware[32];                     /* 处理软件版本号(如V1.0.0)                       */

	char                   strDateOfSoftwareRevision[32];                /* 处理软件更新日期                               */

	char                   strVersionOfCoefficientIndex[32];             /* 定标系数版本号                                 */

	char                   strDateOfCoefficientIndexRevision[32];        /* 定标系数更新日期                               */

	char                   strDateOfObservingBeginning[32];              /* 数据观测开始日期(包括年月日)                   */

	char                   strTimeOfObservingBeginning[32];              /* 数据观测开始时间（包括时分秒毫秒）             */

	char                   strDateOfObservingEnding[32];                 /* 数据观测结束日期(包括年月日)                   */

	char                   strTimeOfObservingEnding[32];                 /* 数据观测结束时间（包括时分秒毫秒）             */

	char                   strDateOfDataCreating[32];                    /* 数据创建日期(包括年月日)                       */

	char                   strTimeOfDataCreating[32];                    /* 数据创建时间（包括时分秒毫秒）                 */

	char                   strDayOrNightFlag[8];                         /* 白天夜间标志                                   */

	unsigned int           dwOrbitNumber;                                /* 轨道号                                         */

	unsigned short int     wOrbitPeriod;                                 /* 轨道周期                                       */

	char                   strOrbitDirection[8];                         /* 轨道方向                                       */

	unsigned char          cDataQuality;                                 /* 数据质量标记(0-5级)                            */

	int                    iNumberOfScans;                               /* 总扫描线数                                     */

	int                    iNumberOfDaymodescans;                        /* 白天模式扫描线数                               */

	int                    iNumberofNightmodescans;                      /* 晚上模式扫描线数                               */

	int                    iIncompleteScans;                             /* 不完整的扫描线数                               */

	unsigned char          cQAScanFlag;                                  /* 扫描线质量检验码、按扫描线                     */

	unsigned short int     wQAPixelFlag;                                 /* 象元质量检验码、按扫描线                       */

	unsigned short int     wBeginLineNumber;                             /* 起始行号                                       */

	unsigned short int     wEndLineNumber;                               /* 结束行号                                       */

	unsigned short int     wBeginPixelNumber;                            /* 起始象元号                                     */

	unsigned short int     wEndPixelNumber;                              /* 结束象元号                                     */

	char                   strReferenceEllipsoidModelID;                 /* 地球椭球参考坐标系ID（WGS84）                  */

	double                 dEarthSunDistanceRatio;                       /* 日地距离比                                     */

	char                   strMeanAnomaly[12];                           /* 平近地点角（度）                               */

	char                   strMeanMotion[12];                            /* 平均运动                                       */

	char                   strEccentricity[12];                          /* 偏心率                                         */

	char                   strPerigeeArgument[12];                       /* 近地点俯角（度）                               */

	char                   strAscendingNodeLongitude[12];                /* 升交点赤经（度）                               */

	char                   strOrbitalInclination[12];                    /* 轨道倾角（度）                                 */

	char                   strEpochTime[12];                             /* 历元时间                                       */

	float                  fOrbitPointLatitude[4];                       /* 轨道4个角点纬度                                */

	float                  fOrbitPointLongitude[4];                      /* 轨道4个角点经度                                */

	char                   strAdditionalAnotation[1024];                 /* 文件的附加说明(可以对文件的使用、创建人等说明) */
	

	unsigned short int     iCountOfFrames;                               /* 整圈数据帧数                                                                                                          */

	unsigned short int     iCountOfPackets;                              /* 整圈数据包数                                                                                                          */

	unsigned short int     iBeginningPacketNumber;                       /* 整圈起始包序号                                                                                                        */

	unsigned short int     iEndingPacketNumber;                          /* 整圈结束包序号                                                                                                        */

	unsigned int           iBeginningTimeInSecond;                       /* 整圈开始时间                                                                                                          */

	unsigned int           iEndingTimeInSecond;                          /* 整圈结束时间                                                                                                          */

	int                    iBeginningTimeForSolarMode;                   /* 太阳模式（包括连续太阳模式、标准灯模式下连续太阳模式或太阳分立模式）观测开始时间（无太阳模式为－999）                 */

	int                    iEndingTimeForSolarMode;                      /* 太阳模式（包括连续太阳模式、标准灯模式下连续太阳模式或太阳分立模式）观测结束时间（无太阳模式为－999）                 */

	unsigned short int     iCountForMissingPackets;                      /* 丢失数据包数                                                                                                          */

	unsigned short int     iCountForTimeSequenceError;                   /* 时序出错包数                                                                                                          */

	short int              iStatusOfSweepModeReferenceDiffuser;          /* 太阳连续模式观测情况（0＝无，1＝有，－1＝观测失败）                                                                   */

	short int              iStatusOfSweepModeStandardDiffuser;           /* 标准灯模式下太阳连续模式观测情况（0＝无，1＝有，－1＝观测失败）                                                       */

	short int              iStatusOfLampModeReferenceDiffuser;           /* 标准灯模式下汞灯观测情况（参考板）（0＝无，1＝有，－1＝观测失败）                                                     */

	short int              iStatusOfLampModeStandardDiffuser;            /* 标准灯模式下汞灯观测情况（标准板）观测情况（0＝无，1＝有，－1＝观测失败）                                             */

	short int              iStatusOfLampModeDarkCurent;                  /* 标准灯模式下暗电流观测情况（标准板）观测情况（0＝无，1＝有，－1＝观测失败）                                           */

	short int              iStatusOfDiscreteSolarMode;                   /* 太阳分立模式观测情况（0＝无，1＝有，－1＝观测失败）                                                                   */

	unsigned short int     iCountForErrorsOfAtmosphericMeasurements;     /* 大气模式失败次数                                                                                                      */

	short int              iStatusOfDarkCurrentFile;                     /* 暗电流文件更新情况（0＝没更新，1＝更新成功，－1＝更新失败）                                                           */

	short int              iStatusOfSolarIrradianceFittingCoeffients;    /* 太阳辐照度拟和系数更新情况（0＝没更新，1＝更新成功，－1＝更新失败）                                                   */


};
        

/* FY3紫外臭氧总量探测仪L1数据 */

struct FY3_TOU_L1B_FILE_INFO

{       

	char                   strSatelliteName[8];                          /* 卫星名称（如FY-3C等）                          */

	char                   strSensorName[128];                           /* 仪器名称  "Total Ozone Unit"                   */

	char                   strSensorIdentificationCode[12];              /* 传感器代码（如TOU）                            */

	char                   strDatasetName[64];                           /* 数据集名称（如Global TOU Data）                */

	char                   strFileName[256];                             /* 文件名称                                       */

	char                   strFileAliasName[256];                        /* 文件别名                                       */

	char                   strResponser[32];                             /* 产品生成地（NSMC）                             */

	char                   strVersionOfSoftware[32];                     /* 处理软件版本号(如V1.0.0)                       */

	char                   strDateOfSoftwareRevision[32];                /* 处理软件更新日期                               */

	char                   strVersionOfCoefficientIndex[32];             /* 定标系数版本号                                 */

	char                   strDateOfCoefficientIndexRevision[32];        /* 定标系数更新日期                               */

	char                   strDateOfObservingBeginning[32];              /* 数据观测开始日期(包括年月日)                   */

	char                   strTimeOfObservingBeginning[32];              /* 数据观测开始时间（包括时分秒毫秒）             */

	char                   strDateOfObservingEnding[32];                 /* 数据观测结束日期(包括年月日)                   */

	char                   strTimeOfObservingEnding[32];                 /* 数据观测结束时间（包括时分秒毫秒）             */

	char                   strDateOfDataCreating[32];                    /* 数据创建日期(包括年月日)                       */

	char                   strTimeOfDataCreating[32];                    /* 数据创建时间（包括时分秒毫秒）                 */

	char                   strDayOrNightFlag[8];                         /* 白天夜间标志                                   */

	unsigned int           dwOrbitNumber;                                /* 轨道号                                         */

	unsigned short int     wOrbitPeriod;                                 /* 轨道周期                                       */

	char                   strOrbitDirection[8];                         /* 轨道方向                                       */

	unsigned char          cDataQuality;                                 /* 数据质量标记(0-5级)                            */

	int                    iNumberOfScans;                               /* 总扫描线数                                     */

	int                    iNumberOfDaymodescans;                        /* 白天模式扫描线数                               */

	int                    iNumberofNightmodescans;                      /* 晚上模式扫描线数                               */

	int                    iIncompleteScans;                             /* 不完整的扫描线数                               */

	unsigned char          cQAScanFlag;                                  /* 扫描线质量检验码、按扫描线                     */

	unsigned short int     wQAPixelFlag;                                 /* 象元质量检验码、按扫描线                       */

	unsigned short int     wBeginLineNumber;                             /* 起始行号                                       */

	unsigned short int     wEndLineNumber;                               /* 结束行号                                       */

	unsigned short int     wBeginPixelNumber;                            /* 起始象元号                                     */

	unsigned short int     wEndPixelNumber;                              /* 结束象元号                                     */

	char                   strReferenceEllipsoidModelID[32];             /* 地球椭球参考坐标系ID（WGS84）                  */

	double                 dEarthSunDistanceRatio;                       /* 日地距离比                                     */

	char                   strMeanAnomaly[12];                           /* 平近地点角（度）                               */

	char                   strMeanMotion[12];                            /* 平均运动                                       */

	char                   strEccentricity[12];                          /* 偏心率                                         */

	char                   strPerigeeArgument[12];                       /* 近地点俯角（度）                               */

	char                   strAscendingNodeLongitude[12];                /* 升交点赤经（度）                               */

	char                   strOrbitalInclination[12];                    /* 轨道倾角（度）                                 */

	char                   strEpochTime[12];                             /* 历元时间                                       */

	float                  fOrbitPointLatitude[4];                       /* 轨道4个角点纬度                                */

	float                  fOrbitPointLongitude[4];                      /* 轨道4个角点经度                                */

	char                   strAdditionalAnotation[1024];                 /* 文件的附加说明(可以对文件的使用、创建人等说明) */

	

	unsigned short int     iCountOfFrames;                               /* 整圈数据帧数                                                        */

	unsigned short int     iBeginningPacketNumber;                       /* 整圈起始包序号                                                      */

	unsigned short int     iEndingPacketNumber;                          /* 整圈结束包序号                                                      */

	unsigned int           iBeginningTimeInSecond;                       /* 整圈开始时间                                                        */

	unsigned int           iEndingTimeInSecond;                          /* 整圈开始时间                                                        */

	int                    iBeginningTimeForSolarModeA1;                 /* 辐射定标模式观测开始时间（盖板，没有＝－999）                       */

	int                    iBeginningTimeForSolarModeA2;                 /* 辐射定标模式观测开始时间（工作板，没有＝－999）                     */

	int                    iBeginningTimeForSolarModeA3;                 /* 辐射定标模式观测开始时间（参考板，没有＝－999）                     */

	int                    iEndingTimeForSolarModeA1;                    /* 辐射定标模式观测结束时间（盖板，没有＝－999）                       */

	int                    iEndingTimeForSolarModeA2;                    /* 辐射定标模式观测结束时间（工作板，没有＝－999）                     */

	int                    iEndingTimeForSolarModeA3;                    /* 辐射定标模式观测结束时间（参考板，没有＝－999）                     */

	short int              iStatusOfWavelengthCalibrationMode;           /* 波长定标模式观测情况（0＝无，1＝有，－1＝观测失败）                 */

	unsigned int           iCountForMissingPackets;                      /* 丢失数据包数                                                        */

	unsigned int           iCountForTimeSequenceError;                   /* 时序出错包数                                                        */

	unsigned int           iCountForErrorsOfAtmosphericMeasurements;     /* 对地模式失败次数                                                    */

	short int              iStatusOfSolarIrradianceFittingCoeffients;    /* 太阳辐照度拟和系数更新情况（0＝没更新，1＝更新成功，－1＝更新失败） */

};


/* FY3紫外臭氧总量探测仪L1_OBC数据 */

struct FY3_TOUOBC_L1B_FILE_INFO

{       

	char                   strSatelliteName[8];                          /* 卫星名称（如FY-3C等）                          */

	char                   strSensorName[128];                           /* 仪器名称  "Total Ozone Unit"                   */

	char                   strSensorIdentificationCode[12];              /* 传感器代码（如TOU）                            */

	char                   strDatasetName[64];                           /* 数据集名称（如Global TOU Data）                */

	char                   strFileName[256];                             /* 文件名称                                       */

	char                   strFileAliasName[256];                        /* 文件别名                                       */

	char                   strResponser[32];                             /* 产品生成地（NSMC）                             */

	char                   strVersionOfSoftware[32];                     /* 处理软件版本号(如V1.0.0)                       */

	char                   strDateOfSoftwareRevision[32];                /* 处理软件更新日期                               */

	char                   strVersionOfCoefficientIndex[32];             /* 定标系数版本号                                 */

	char                   strDateOfCoefficientIndexRevision[32];        /* 定标系数更新日期                               */

	char                   strDateOfObservingBeginning[32];              /* 数据观测开始日期(包括年月日)                   */

	char                   strTimeOfObservingBeginning[32];              /* 数据观测开始时间（包括时分秒毫秒）             */

	char                   strDateOfObservingEnding[32];                 /* 数据观测结束日期(包括年月日)                   */

	char                   strTimeOfObservingEnding[32];                 /* 数据观测结束时间（包括时分秒毫秒）             */

	char                   strDateOfDataCreating[32];                    /* 数据创建日期(包括年月日)                       */

	char                   strTimeOfDataCreating[32];                    /* 数据创建时间（包括时分秒毫秒）                 */

	char                   strDayOrNightFlag[8];                         /* 白天夜间标志                                   */

	unsigned int           dwOrbitNumber;                                /* 轨道号                                         */

	unsigned short int     wOrbitPeriod;                                 /* 轨道周期                                       */

	char                   strOrbitDirection[8];                         /* 轨道方向                                       */

	unsigned char          cDataQuality;                                 /* 数据质量标记(0-5级)                            */

	int                    iNumberOfScans;                               /* 总扫描线数                                     */

	int                    iNumberOfDaymodescans;                        /* 白天模式扫描线数                               */

	int                    iNumberofNightmodescans;                      /* 晚上模式扫描线数                               */

	int                    iIncompleteScans;                             /* 不完整的扫描线数                               */

	unsigned char          cQAScanFlag;                                  /* 扫描线质量检验码、按扫描线                     */

	unsigned short int     wQAPixelFlag;                                 /* 象元质量检验码、按扫描线                       */

	unsigned short int     wBeginLineNumber;                             /* 起始行号                                       */

	unsigned short int     wEndLineNumber;                               /* 结束行号                                       */

	unsigned short int     wBeginPixelNumber;                            /* 起始象元号                                     */

	unsigned short int     wEndPixelNumber;                              /* 结束象元号                                     */

	char                   strReferenceEllipsoidModelID[32];             /* 地球椭球参考坐标系ID（WGS84）                  */

	double                 dEarthSunDistanceRatio;                       /* 日地距离比                                     */

	char                   strMeanAnomaly[12];                           /* 平近地点角（度）                               */

	char                   strMeanMotion[12];                            /* 平均运动                                       */

	char                   strEccentricity[12];                          /* 偏心率                                         */

	char                   strPerigeeArgument[12];                       /* 近地点俯角（度）                               */

	char                   strAscendingNodeLongitude[12];                /* 升交点赤经（度）                               */

	char                   strOrbitalInclination[12];                    /* 轨道倾角（度）                                 */

	char                   strEpochTime[12];                             /* 历元时间                                       */

	float                  fOrbitPointLatitude[4];                       /* 轨道4个角点纬度                                */

	float                  fOrbitPointLongitude[4];                      /* 轨道4个角点经度                                */

	char                   strAdditionalAnotation[1024];                 /* 文件的附加说明(可以对文件的使用、创建人等说明) */

	

	unsigned short int     iCountOfFrames;                               /* 整圈数据帧数                                                        */

	unsigned short int     iBeginningPacketNumber;                       /* 整圈起始包序号                                                      */

	unsigned short int     iEndingPacketNumber;                          /* 整圈结束包序号                                                      */

	unsigned int           iBeginningTimeInSecond;                       /* 整圈开始时间                                                        */

	unsigned int           iEndingTimeInSecond;                          /* 整圈开始时间                                                        */

	int                    iBeginningTimeForSolarModeA1;                 /* 辐射定标模式观测开始时间（盖板，没有＝－999）                       */

	int                    iBeginningTimeForSolarModeA2;                 /* 辐射定标模式观测开始时间（工作板，没有＝－999）                     */

	int                    iBeginningTimeForSolarModeA3;                 /* 辐射定标模式观测开始时间（参考板，没有＝－999）                     */

	int                    iEndingTimeForSolarModeA1;                    /* 辐射定标模式观测结束时间（盖板，没有＝－999）                       */

	int                    iEndingTimeForSolarModeA2;                    /* 辐射定标模式观测结束时间（工作板，没有＝－999）                     */

	int                    iEndingTimeForSolarModeA3;                    /* 辐射定标模式观测结束时间（参考板，没有＝－999）                     */

	short int              iStatusOfWavelengthCalibrationMode;           /* 波长定标模式观测情况（0＝无，1＝有，－1＝观测失败）                 */

	unsigned int           iCountForMissingPackets;                      /* 丢失数据包数                                                        */

	unsigned int           iCountForTimeSequenceError;                   /* 时序出错包数                                                        */

	unsigned int           iCountForErrorsOfAtmosphericMeasurements;     /* 对地模式失败次数                                                    */

	short int              iStatusOfSolarIrradianceFittingCoeffients;    /* 太阳辐照度拟和系数更新情况（0＝没更新，1＝更新成功，－1＝更新失败） */

};

/* 单字节整型FY-3A SDS属性信息*/

struct FY3_L1B_SDS_INFO_CHAR

{

        char                   strUnits[12];                                 /*科学数据对象数据的单位  			       */

        int                    iValidRange[2];                               /*科学数据对象数据的有效值范围，包括最大最小范围  */

        int                    iFillValue;                                   /*科学数据对象数据的无效填充值		       */

        float                  fIntercept;                                   /*科学数据对象数据变换的截距		       */

        float                  fSlope;                                       /*科学数据对象数据变换的斜率		       */

        char                   strLongName[128];                             /*科学数据对象的完整名称  			       */

        char                   strBandName[128];                             /*科学数据对象的包含波段名称  		       */

};

/* 双字节整型FY-3A SDS属性信息*/

struct FY3_L1B_SDS_INFO_SHORT

{

        char                   strUnits[12];                                 /*科学数据对象数据的单位  			       */

        int                    iValidRange[2];                               /*科学数据对象数据的有效值范围，包括最大最小范围  */

        int                    iFillValue;                                   /*科学数据对象数据的无效填充值		       */

        float                  fIntercept;                                   /*科学数据对象数据变换的截距		       */

        float                  fSlope;                                       /*科学数据对象数据变换的斜率		       */

        char                   strLongName[128];                             /*科学数据对象的完整名称  			       */

        char                   strBandName[128];                             /*科学数据对象的包含波段名称  		       */

};

/* 四字节整型FY-3A SDS属性信息*/

struct FY3_L1B_SDS_INFO_INT

{

        char                   strUnits[12];                                 /*科学数据对象数据的单位  			       */

        int                    iValidRange[2];                               /*科学数据对象数据的有效值范围，包括最大最小范围  */

        int                    iFillValue;                                   /*科学数据对象数据的无效填充值		       */

        float                  fIntercept;                                   /*科学数据对象数据变换的截距		       */

        float                  fSlope;                                       /*科学数据对象数据变换的斜率		       */

        char                   strLongName[128];                             /*科学数据对象的完整名称  			       */

        char                   strBandName[128];                             /*科学数据对象的包含波段名称  		       */

};

/* 八字节整型FY-3A SDS属性信息*/

struct FY3_L1B_SDS_INFO_LONG

{

        char                   strUnits[12];                                 /*科学数据对象数据的单位  			       */

        long                   lValidRange[2];                               /*科学数据对象数据的有效值范围，包括最大最小范围  */

        long                   lFillValue;                                   /*科学数据对象数据的无效填充值		       */

        float                  fIntercept;                                   /*科学数据对象数据变换的截距		       */

        float                  fSlope;                                       /*科学数据对象数据变换的斜率		       */

        char                   strLongName[128];                             /*科学数据对象的完整名称  			       */

	char                   strBandName[128];                             /*科学数据对象的包含波段名称  		       */

};

/* 浮点型FY-3A SDS属性信息*/

struct FY3_L1B_SDS_INFO_FLOAT

{

        char                   strUnits[12];                                 /*科学数据对象数据的单位  			       */

        double                 dValidRange[2];                               /*科学数据对象数据的有效值范围，包括最大最小范围  */

        double                 dFillValue;                                   /*科学数据对象数据的无效填充值		       */

        double                 dIntercept;                                   /*科学数据对象数据变换的截距		       */

        double                 dSlope;                                       /*科学数据对象数据变换的斜率		       */

        char                   strLongName[128];                             /*科学数据对象的完整名称  			       */

        char                   strBandName[128];                             /*科学数据对象的包含波段名称  		       */

};

/* 双精度型FY-3A SDS属性信息*/

struct FY3_L1B_SDS_INFO_DOUBLE

{

        char                   strUnits[12];                                 /*科学数据对象数据的单位  			       */

        double                 dValidRange[2];                               /*科学数据对象数据的有效值范围，包括最大最小范围  */

        double                 dFillValue;                                   /*科学数据对象数据的无效填充值		       */

        double                 dIntercept;                                   /*科学数据对象数据变换的截距		       */

        double                 dSlope;                                       /*科学数据对象数据变换的斜率		       */

        char                   strLongName[128];                             /*科学数据对象的完整名称  			       */

        char                   strBandName[128];                             /*科学数据对象的包含波段名称  		       */

};

/* 扫描辐射计L1级数据EV_RefSB SDS属性信息*/

struct FY3_L1B_SDS_INFO_VIRR_EV_RefSB

{

        char                   strUnits[12];                                 /*科学数据对象数据的单位  			       */

        double                 dValidRange[2];                               /*科学数据对象数据的有效值范围，包括最大最小范围  */

        double                 dFillValue;                                   /*科学数据对象数据的无效填充值		       */

        double                 dIntercept[7];                                /*科学数据对象数据变换的截距		       */

        double                 dSlope[7];                                    /*科学数据对象数据变换的斜率		       */

        char                   strLongName[128];                             /*科学数据对象的完整名称  			       */

        char                   strBandName[128];                             /*科学数据对象的包含波段名称  		       */        

};

/* 扫描辐射计L1级数据EV_Emissive SDS属性信息*/

struct FY3_L1B_SDS_INFO_VIRR_EV_Emissive

{

        char                   strUnits[12];                                 /*科学数据对象数据的单位  			       */

        double                 dValidRange[2];                               /*科学数据对象数据的有效值范围，包括最大最小范围  */

        double                 dFillValue;                                   /*科学数据对象数据的无效填充值		       */

        double                 dIntercept[3];                                /*科学数据对象数据变换的截距		       */

        double                 dSlope[3];                                    /*科学数据对象数据变换的斜率		       */

        char                   strLongName[128];                             /*科学数据对象的完整名称  			       */

        char                   strBandName[128];                             /*科学数据对象的包含波段名称  		       */        

};

/* MERSI 250M L1级数据EV_RefSB SDS属性信息*/

struct FY3_L1B_SDS_INFO_MERSI250M_EV_RefSB

{

        char                   strUnits[12];                                 /*科学数据对象数据的单位  			       */

        double                 dValidRange[2];                               /*科学数据对象数据的有效值范围，包括最大最小范围  */

        double                 dFillValue;                                   /*科学数据对象数据的无效填充值		       */

        double                 dIntercept[4];                                /*科学数据对象数据变换的截距		       */

        double                 dSlope[4];                                    /*科学数据对象数据变换的斜率		       */

        char                   strLongName[128];                             /*科学数据对象的完整名称  			       */

        char                   strBandName[128];                             /*科学数据对象的包含波段名称  		       */        

};

/* MERSI 250M L1级数据EV_Emissive SDS属性信息*/

struct FY3_L1B_SDS_INFO_MERSI250M_EV_Emissive

{

        char                   strUnits[12];                                 /*科学数据对象数据的单位  			       */

        double                 dValidRange[2];                               /*科学数据对象数据的有效值范围，包括最大最小范围  */

        double                 dFillValue;                                   /*科学数据对象数据的无效填充值		       */

        double                 dIntercept[4];                                /*科学数据对象数据变换的截距		       */

        double                 dSlope[4];                                    /*科学数据对象数据变换的斜率		       */

        char                   strLongName[128];                             /*科学数据对象的完整名称  			       */

        char                   strBandName[128];                             /*科学数据对象的包含波段名称  		       */        

};

/* MERSI 1000M L1级数据EV_250_Aggr1km_RefSB SDS属性信息*/

struct FY3_L1B_SDS_INFO_MERSI1000M_EV_RefSB

{

        char                   strUnits[12];                                 /*科学数据对象数据的单位  			       */

        double                 dValidRange[2];                               /*科学数据对象数据的有效值范围，包括最大最小范围  */

        double                 dFillValue;                                   /*科学数据对象数据的无效填充值		       */

        double                 dIntercept[4];                                /*科学数据对象数据变换的截距		       */

        double                 dSlope[4];                                    /*科学数据对象数据变换的斜率		       */

        char                   strLongName[128];                             /*科学数据对象的完整名称  			       */

        char                   strBandName[128];                             /*科学数据对象的包含波段名称  		       */             

};

/* MERSI 1000M L1级数据EV_Emissive SDS属性信息*/

struct FY3_L1B_SDS_INFO_MERSI1000M_EV_Emissive

{

        char                   strUnits[12];                                 /*科学数据对象数据的单位  			       */

        double                 dValidRange[2];                               /*科学数据对象数据的有效值范围，包括最大最小范围  */

        double                 dFillValue;                                   /*科学数据对象数据的无效填充值		       */

        double                 dIntercept[15];                               /*科学数据对象数据变换的截距		       */

        double                 dSlope[15];                                   /*科学数据对象数据变换的斜率		       */

        char                   strLongName[128];                             /*科学数据对象的完整名称  			       */

        char                   strBandName[128];                             /*科学数据对象的包含波段名称  		       */        

};

/* FY-3A VASS L1级数据 */

struct FY3_VASS_L1B_FILE_INFO

{

	char                   strSatelliteName[8];                          /* 卫星名称（如FY-3A等）                          */

	char                   strSensorName[128];                           /* 仪器名称  "Earth Radiation Measurement"        */

	char                   strSensorIdentificationCode[12];              /* 传感器代码（如ERM）                           */

	char                   strDatasetName[64];                           /* 数据集名称（如Global ERM Data）                            */

	char                   strFileName[256];                             /* 文件名称                                       */

	char                   strFileAliasName[256];                        /* 文件别名                                       */

	char                   strResponser[32];                             /* 产品生成地（NSMC）                             */

	char                   strVersionOfSoftware[32];                     /* 处理软件版本号(如V1.0.0)                       */

	char                   strDateOfSoftwareRevision[32];                /* 处理软件更新日期                               */

	char                   strVersionOfCoefficientIndex[32];             /* 定标系数版本号                                 */

	char                   strDateOfCoefficientIndexRevision[32];        /* 定标系数更新日期                               */

	char                   strDateOfObservingBeginning[32];              /* 数据观测开始日期(包括年月日)                   */

	char                   strTimeOfObservingBeginning[32];              /* 数据观测开始时间（包括时分秒毫秒）             */

	char                   strDateOfObservingEnding[32];                 /* 数据观测结束日期(包括年月日)                   */

	char                   strTimeOfObservingEnding[32];                 /* 数据观测结束时间（包括时分秒毫秒）             */

	char                   strDateOfDataCreating[32];                    /* 数据创建日期(包括年月日)                       */

	char                   strTimeOfDataCreating[32];                    /* 数据创建时间（包括时分秒毫秒）                 */

	char                   strDayOrNightFlag[8];                         /* 白天夜间标志                                   */

	unsigned int           dwOrbitNumber;                                /* 轨道号                                         */

	unsigned short int     wOrbitPeriod;                                 /* 轨道周期                                       */

	char                   strOrbitDirection[8];                         /* 轨道方向                                       */

	unsigned char          cDataQuality;                                 /* 数据质量标记(1-5级)                            */

	unsigned int           iNumberOfScans;                               /* 总扫描数                                       */

	unsigned int           iNumberOfDaymodescans;                        /* 白天模式扫描数                                 */

	unsigned int           iNumberofNightmodescans;                      /* 晚上模式扫描数                                 */

	unsigned int           iIncompleteScans;                             /* 不完整的扫描数                                 */

	unsigned char          cQAScanFlag[2000];                            /* 扫描线质量检验码、按扫描线                     */

	unsigned short int     wQAPixelFlag[2000];                           /* 象元质量检验码、按扫描线                       */

	unsigned short int     wBeginLineNumber;                             /* 起始行号                                       */

	unsigned short int     wEndLineNumber;                               /* 结束行号                                       */

	unsigned short int     wBeginPixelNumber;                            /* 起始象元号                                     */

	unsigned short int     wEndPixelNumber;                              /* 结束象元号                                     */

	char                   strReferenceEllipsoidModelID[12];             /* 地球椭球参考坐标系ID（WGS84）                  */

	double                 dEarthSunDistanceRatio;                       /* 日地距离比                                     */

	

	double                 dWGS84a;                                      /* 地球长半轴                                     */

	double                 dWGS84b;                                      /* 地球短半轴                                     */

	double                 dWGS84Oblateness;                             /* 地球扁平率                                     */

	char                   strSatID[12];                                 /* 星标                                           */

	char                   strOrbit[12];                                 /* 轨道号                                         */

	char                   strMeanAnomaly[12];                           /* 平近点角                                       */

	char                   strMeanMotion[12];                            /* 轨道周期                                       */

	char                   strDecay[12];                                 /* 衰减                                           */

	char                   strEccentricity[12];                          /* 偏心率                                         */

	char                   strPerigeeArgument[12];                       /* 近地点俯角                                     */

	char                   strAscendingNodeLongitude[12];                /* 升交点赤经                                     */

	char                   strOrbitalInclination[12];                    /* 轨道倾角                                       */

	char                   strEpochTime[12];                             /* 历元时间                                       */

	                                 

	float                  fOrbitPointLatitude[4];                       /* 轨道4个角点纬度                                */

	float                  fOrbitPointLongitude[4];                      /* 轨道4个角点经度                                */

	char                   strAdditionalAnotation[1024];                 /* 文件的附加说明(可以对文件的使用、创建人等说明) */

	

	unsigned short int     wPackageID;                                   /* 数据包标识                                                                                    */

	unsigned short int     wClockUpdateIndicator;                        /* 时钟更新指示(0 = none during this orbit; otherwise the record number of the first occurrence) */

	unsigned short int     wTimeSequenceErrors;                          /* 时序出错线数                                                                                  */

	unsigned short int     wMissingScanLines;                            /* 丢线数                                                                                        */

	unsigned short int     wCalibratedEarthLocatedScanLines;             /* 完成数据预处理的扫描线数                                                                      */

	unsigned short int     wRealTimeCaliScans;                           /* 完成在轨定标线数                                                                              */

	unsigned short int     wUsingReferenceCaliCoefScans;                 /* 使用参考定标系数线数                                                                          */

	char                   strVersionofReferencedCoefficient[32];        /* 参考定标系数版本号                                                                            */

	char                   strDateOfReferencedCoefficientVersion[32];    /* 参考定标系数更新日期                                                                          */

	char                   strVersionOfBandCorrection[32];               /* 带宽订正数据版本号                                                                            */

	char                   strDateOfBandCorrectionVersion[32];           /* 带宽订正数据更新日期                                                                          */

	char                   strVersionOfBasefile[32];                     /* 定标基础参数数据版本号                                                                        */

	char                   strDateOfBaseFileVersion[32];                 /* 定标基础参数数据更新日期                                                                      */

	float                  fIraCentralWn[26];                            /* 通道中心波数                                                                                  */

	float                  fIraBdCorCoef[40];                            /* 热红外通道带宽订正系数                                                                        */

	float                  fIraRefCalCoef[3];                            /* 参考定标系数二次项,斜率,截距                                                                  */

	float                  fCalCoefSlopeAve;                             /* 数据覆盖时段定标系数斜率平均值                                                                */

	float                  fCalCoefSlopeStd;                             /* 数据覆盖时段定标系数斜率标准差                                                                */

	float                  fCalCoefInterAve;                             /* 数据覆盖时段定标系数截距平均值                                                                */

	float                  fCalCoefInterStd;                             /* 数据覆盖时段定标系数截距标准差                                                                */

	float                  fIraPrtNb;                                    /* PRT数量                                                                                       */

	float                  fIraDisconNb;                                 /* 受到月亮污染的外空测点数                                                                      */

	float                  fIraPrtConvCoef[8];                           /* PRT温度转换系数                                                                               */

	float                  fIraMuduConvCoef[10];                         /* 调制盘温度转换系数                                                                            */

	float                  fIraWheelConvCoef[10];                        /* 滤光轮温度转换系数                                                                            */

	float                  fIraMirrorConvCoef;                           /* 扫描镜温度转换系数                                                                            */

	float                  fIraMainOpticConvCoef;                        /* 主光学温度转换系数                                                                            */

	float                  fIraRelayOpticConvCoef;                       /* 中继光学温度转换系数                                                                          */

	float                  fIraBoardConvCoef;                            /* 头部基板温度转换系数                                                                          */

	float                  fIraBoxConvCoef;                              /* 信息处理器温度转换系数                                                                        */

	float                  fIraColder2TempAve;                           /* 数据覆盖时段二级冷块温度平均值                                                                */

	float                  fIraColder2TempStd;                           /* 数据覆盖时段二级冷块温度标准差                                                                */

	float                  fIraWheelTempAve;                             /* 数据覆盖时段滤光轮温度平均值                                                                  */

	float                  fIraWheelTempStd;                             /* 数据覆盖时段滤光轮温度标准差                                                                  */

	float                  fIraModulatorTempAve;                         /* 数据覆盖时段调制盘温度平均值                                                                  */

	float                  fIraModulatorTempStd;                         /* 数据覆盖时段调制盘温度标准差                                                                  */

	float                  fIraBBTtempAve;                               /* 数据覆盖时段黑体温度平均值                                                                    */

	float                  fIraBBTempStd;                                /* 数据覆盖时段黑体温度标准差                                                                    */

	float                  fIraMirrorTempAve;                            /* 数据覆盖时段扫描镜温度平均值                                                                  */

	float                  fIraMainOpticalTempAve;                       /* 数据覆盖时段主光学温度平均值                                                                  */

	float                  fIraRelayOpticTempAve;                        /* 数据覆盖时段中继光学温度平均值                                                                */

	float                  fIraBoardTempAve;                             /* 数据覆盖时段头部基板温度平均值                                                                */

	float                  fIraBoxTempAve;                               /* 数据覆盖时段信息处理器温度平均值                                                              */

};                                                                         

/* FY-3C L2L3产品数据 */

struct FY3_L2L3_FILE_INFO

{

	char                   strSatelliteName[8];                          /* 卫星名称（如FY-3C等）                          */

	char                   strDatasetName[64];                           /* 数据集名称（如Cloud Mask）                     */

	char                   strFileName[256];                             /* 文件名称                                       */

	char                   strFileAliasName[256];                        /* 文件别名                                       */

	char                   strSensorName[128];                           /* 仪器名称  "Earth Radiation Measurement"        */

	char		               strDatasetArea[12];			                     /* 数据集区域 （如Global、Orbit等）               */	

	char                   strDataLevel[8];                              /* 数据级别(Level_2、Lever_3)                     */	               

	char                   strVersionOfSoftware[32];                     /* 处理软件版本号(如V1.0.0)                       */

	char                   strDateOfSoftwareRevision[32];                /* 处理软件更新日期                               */

	char                   strDateOfObservingBeginning[32];              /* 数据观测开始日期(包括年月日)                   */

	char                   strTimeOfObservingBeginning[32];              /* 数据观测开始时间（包括时分秒毫秒）             */

	char                   strDateOfObservingEnding[32];                 /* 数据观测结束日期(包括年月日)                   */

	char                   strTimeOfObservingEnding[32];                 /* 数据观测结束时间（包括时分秒毫秒）             */

	char                   strDateOfDataCreating[32];                    /* 数据创建日期(包括年月日)                       */

	char                   strTimeOfDataCreating[32];                    /* 数据创建时间（包括时分秒毫秒）                 */

	char                   strTimeOfDataComposed[12];                    /* 按照时、日、侯、旬、月合成的标志(如Hour、Day等)*/
//Modified By Fanbo , 20130802 , Begin (unsigned int -> unsigned short int)
	unsigned short int     iNumberOfDataLevel;                           /* 数据层数(表示数据有几个通道或几块等)           */
//Modified By Fanbo , 20130802 , End
	char                   strProjectionType[128];                       /* 投影类型                                       */

	float                  fLatitudeOfLeftTop;                           /* 左上角纬度                                     */ 

	float                  fLongitudeLeftTop;                            /* 左上角经度                                     */

	float                  fLatitudeRightTop;                            /* 右上角纬度                                     */

	float                  fLongitudeRightTop;                           /* 右上角经度                                     */

	float                  fLatitudeLeftBottom;                          /* 左下角纬度                                     */

	float                  fLongitudeLeftBottom;                         /* 左下角经度                                     */

	float                  fLatitudeRightBottom;                         /* 右下角纬度                                     */

	float                  fLongitudeRightBottom;                        /* 右下角经度                                     */
//Modified By Fanbo , 20130802 , Begin
	char                   strCoordinateUnit[12];                        /* 坐标单位                                       */
//Modified By Fanbo , 20130802 , End
	float                  fProjectionCenterLatitude;                    /* 投影中心纬度                                   */

	float                  fProjectionCenterLongitude;                   /* 投影中心经度                                   */

	float                  fStandardProjectionLatitude1;                 /* 标准投影纬度1                                  */

	float                  fStandardProjectionLatitude2;                 /* 标准投影纬度2                                  */

	float                  fStandardProjectionLongitude;                 /* 标准投影经度                                   */

	char                   strResolutionUnit[12];                        /* 分辨率单位(如meter,degree)                     */

	float                  fLongitudeResolution;                         /* 经向分辨率                                     */

	float                  fLatitudeResolution;                          /* 纬向分辨率                                     */

	unsigned int           iDataLines;                                   /* 数据行数                                       */

	unsigned int           iDataPixels;                                  /* 数据列数                                       */
//Modified By Fanbo , 20130802 , Begin
	char                   strProjectionAnnotation[1024];                /* 投影附加说明                                   */

	unsigned char          cL1DataQuality;                               /* L1数据质量标记                                 */
	
	unsigned char          cDataQuality;                                 /* 数据质量标记                                   */
	
	char                   strDataQualityAnnotation[1024];               /* 数据质量标记说明                               */
//Modified By Fanbo , 20130802 , End
	char                   strProductCreator[128];                       /* 产品责任人                                     */

	char                   strProgrammer[128];                           /* 程序编制者                                     */

	char                   strAdditionalAnotation[1024];                 /* 文件的附加说明(可以对文件的使用、创建人等说明) */																							

};


struct FY3_PrjLut_FILE_INFO

{

	char                   strSatelliteName[8];                          /* 卫星名称（如FY-3C等）                          */
//Modified By Fanbo , 20130807 , Begin
//	char                   strSensorIdentificationCode[12];              /* 传感器代码（如VIRR）                           */
//Modified By Fanbo , 20130807 , End
	char                   strDatasetName[64];                           /* 数据集名称（如MPT）                            */

	char                   strFileName[256];                             /* 文件名称                                       */

	char                   strFileAliasName[256];                        /* 文件别名                                       */

	char                   strSensorName[128];                           /* 仪器名称  "Earth Radiation Measurement"        */

	char                   strDatasetArea[12];                           /* 数据集区域 （如Global、Orbit等）               */	

	char                   strDataLevel[8];                              /* 数据级别(Level_2、Lever_3)                     */	               

	char                   strVersionOfSoftware[32];                     /* 处理软件版本号(如V1.0.0)                       */

	char                   strDateOfSoftwareRevision[32];                /* 处理软件更新日期                               */

	char                   strDateOfObservingBeginning[32];              /* 数据观测开始日期(包括年月日)                   */

	char                   strTimeOfObservingBeginning[32];              /* 数据观测开始时间（包括时分秒毫秒）             */

	char                   strDateOfObservingEnding[32];                 /* 数据观测结束日期(包括年月日)                   */

	char                   strTimeOfObservingEnding[32];                 /* 数据观测结束时间（包括时分秒毫秒）             */

	char                   strDateOfDataCreating[32];                    /* 数据创建日期(包括年月日)                       */

	char                   strTimeOfDataCreating[32];                    /* 数据创建时间（包括时分秒毫秒）                 */

	char                   strTimeOfDataComposed[12];                    /* 按照时、日、侯、旬、月合成的标志(如Hour、Day等)*/

	unsigned int           iNumberOfDataLevel;                           /* 数据层数(表示数据有几个通道或几块等)           */

	char                   strProjectionType[128];                       /* 投影类型                                       */

	float                  fLatitudeOfLeftTop;                           /* 左上角纬度                                     */ 

	float                  fLongitudeLeftTop;                            /* 左上角经度                                     */

	float                  fLatitudeRightTop;                            /* 右上角纬度                                     */

	float                  fLongitudeRightTop;                           /* 右上角经度                                     */

	float                  fLatitudeLeftBottom;                          /* 左下角纬度                                     */

	float                  fLongitudeLeftBottom;                         /* 左下角经度                                     */

	float                  fLatitudeRightBottom;                         /* 右下角纬度                                     */

	float                  fLongitudeRightBottom;                        /* 右下角经度                                     */

	float                  fProjectionCenterLatitude;                    /* 投影中心纬度                                   */

	float                  fProjectionCenterLongitude;                   /* 投影中心经度                                   */

	float                  fStandardProjectionLatitude1;                 /* 标准投影纬度1                                  */

	float                  fStandardProjectionLatitude2;                 /* 标准投影纬度2                                  */

	float                  fStandardProjectionLongitude;                 /* 标准投影经度                                   */

	char                   strResolutionUnit[12];                        /* 分辨率单位(如meter,degree)                     */

	float                  fLongitudeResolution;                         /* 投影水平分辨率                                 */

	float                  fLatitudeResolution;                          /* 投影垂直分辨率                                 */

	unsigned int           iTopLeftOffsetX;                              /* 左上角点在全球图中的列号                       */

	unsigned int           iTopLeftOffsetY;                              /* 左上角点在全球图中的行号                       */

	unsigned int           iDataLines;                                   /* 数据行数                                       */

	unsigned int           iDataPixels;                                  /* 数据列数                                       */

	char                   strProductCreator[128];                       /* 产品责任人                                     */

	char                   strProgrammer[128];                           /* 程序编制者                                     */

	char                   strAdditionalAnotation[1024];                 /* 文件的附加说明(可以对文件的使用、创建人等说明) */

};


#pragma pack (pop)


#endif /*FY3L1BHEADER_H*/





