#ifndef __AS__TYPE_
#define __AS__TYPE_
typedef struct {
	unsigned char bit0  : 1;
	unsigned char bit1  : 1;
	unsigned char bit2  : 1;
	unsigned char bit3  : 1;
	unsigned char bit4  : 1;
	unsigned char bit5  : 1;
	unsigned char bit6  : 1;
	unsigned char bit7  : 1;
} _1byte_bit_field_;

typedef struct {
	unsigned short bit0  : 1;
	unsigned short bit1  : 1;
	unsigned short bit2  : 1;
	unsigned short bit3  : 1;
	unsigned short bit4  : 1;
	unsigned short bit5  : 1;
	unsigned short bit6  : 1;
	unsigned short bit7  : 1;
	unsigned short bit8  : 1;
	unsigned short bit9  : 1;
	unsigned short bit10 : 1;
	unsigned short bit11 : 1;
	unsigned short bit12 : 1;
	unsigned short bit13 : 1;
	unsigned short bit14 : 1;
	unsigned short bit15 : 1;
} _2byte_bit_field_;

typedef struct {
	unsigned long bit0  : 1;
	unsigned long bit1  : 1;
	unsigned long bit2  : 1;
	unsigned long bit3  : 1;
	unsigned long bit4  : 1;
	unsigned long bit5  : 1;
	unsigned long bit6  : 1;
	unsigned long bit7  : 1;
	unsigned long bit8  : 1;
	unsigned long bit9  : 1;
	unsigned long bit10 : 1;
	unsigned long bit11 : 1;
	unsigned long bit12 : 1;
	unsigned long bit13 : 1;
	unsigned long bit14 : 1;
	unsigned long bit15 : 1;
	unsigned long bit16 : 1;
	unsigned long bit17 : 1;
	unsigned long bit18 : 1;
	unsigned long bit19 : 1;
	unsigned long bit20 : 1;
	unsigned long bit21 : 1;
	unsigned long bit22 : 1;
	unsigned long bit23 : 1;
	unsigned long bit24 : 1;
	unsigned long bit25 : 1;
	unsigned long bit26 : 1;
	unsigned long bit27 : 1;
	unsigned long bit28 : 1;
	unsigned long bit29 : 1;
	unsigned long bit30 : 1;
	unsigned long bit31 : 1;
} _4byte_bit_field_;
#endif

#ifndef __AS__TYPE_CommStateEnum
#define __AS__TYPE_CommStateEnum
typedef enum CommStateEnum
{	PATLITE_STATE_STANDBY = 0,
	PATLITE_STATE_WRITE_REGISTER = 1,
	PATLITE_STATE_ERROR = 2,
} CommStateEnum;
#endif

#ifndef __AS__TYPE_GroupEnum
#define __AS__TYPE_GroupEnum
typedef enum GroupEnum
{	GROUP_1_POWER_ON = 0,
	GROUP_2_HEATING = 1,
	GROUP_3_HEAT_AIR_OK = 2,
	GROUP_4_RUN = 3,
	GROUP_5_SAFETY = 4,
} GroupEnum;
#endif

#ifndef __AS__TYPE_MpComIdentType
#define __AS__TYPE_MpComIdentType
typedef struct MpComIdentType
{	unsigned long Internal[2];
} MpComIdentType;
#endif

#ifndef __AS__TYPE_AdhesCtrlInterface_Commands_typ
#define __AS__TYPE_AdhesCtrlInterface_Commands_typ
typedef struct AdhesCtrlInterface_Commands_typ
{	plcbit MelterOn;
	plcbit MelterStandbyOff;
	plcbit MelterStandbyOn;
	plcbit PumpsOn;
	plcbit PurgeChannel1;
	plcbit PurgeChannel2;
	plcbit PurgeChannel3;
	plcbit PurgeChannel4;
	plcbit WriteChannelTemp;
} AdhesCtrlInterface_Commands_typ;
#endif

#ifndef __AS__TYPE_AdhesivePattern_typ
#define __AS__TYPE_AdhesivePattern_typ
typedef struct AdhesivePattern_typ
{	float DelayDistance[4];
	float GlueOnDistance[4];
} AdhesivePattern_typ;
#endif

#ifndef __AS__TYPE_AdhesivePatternCollections_typ
#define __AS__TYPE_AdhesivePatternCollections_typ
typedef struct AdhesivePatternCollections_typ
{	struct AdhesivePattern_typ AdhesivePatterns[4];
} AdhesivePatternCollections_typ;
#endif

#ifndef __AS__TYPE_NordsonData_typ
#define __AS__TYPE_NordsonData_typ
typedef struct NordsonData_typ
{	unsigned long AdhesiveUsePerHour;
	plcbit Alert;
	plcbit ByPassFeedback;
	unsigned short ChannelActTemp[6];
	signed long ChannelDataCmpResult;
	unsigned long ChannelDataSize;
	unsigned short ChannelSetTempActual[6];
	unsigned short ChannelSetTempRequested[6];
	plcbit CommFault;
	plcbit CommFaultInDataValue;
	unsigned char ConsecutiveErrorCount;
	plctime FeedbackTime;
	plcbit HeatUpPhaseActive;
	unsigned short HoseSetTemp;
	plcbit MelterIsOn;
	unsigned short MelterStatus;
	plcbit PumpStartUpProtectionOn;
	plcbit ShutDown;
	plctime StandbyTimeoutTime;
	unsigned char TempUnit;
	plcbit UnitFaulted;
	plcbit UnitReady;
} NordsonData_typ;
#endif

#ifndef __AS__TYPE_NordsonFeedbackSelection_enum
#define __AS__TYPE_NordsonFeedbackSelection_enum
typedef enum NordsonFeedbackSelection_enum
{	NORDSON_HARDWIRE = 0,
	NORDSON_MODBUSTCP = 1,
} NordsonFeedbackSelection_enum;
#endif

#ifndef __AS__TYPE_AdhesCtrlInterface_Pars_typ
#define __AS__TYPE_AdhesCtrlInterface_Pars_typ
typedef struct AdhesCtrlInterface_Pars_typ
{	struct AdhesivePatternCollections_typ SavedPatterns[4];
	struct AdhesivePattern_typ AdhesivePatterns[4];
	float StitchPercentage;
	signed short ChannelModulationCtrl[4];
	float BeadLengths[4];
	plcbit FeedbackIsHardwire;
	plcbit FeedbackIsModbusTCP;
	NordsonData_typ NordsonComms;
	NordsonFeedbackSelection_enum NordsonFeedbackSelection;
	unsigned char NumAdhesiveChannels;
	unsigned char PatternSelection;
} AdhesCtrlInterface_Pars_typ;
#endif

#ifndef __AS__TYPE_AdhesCtrlInterface_Status_typ
#define __AS__TYPE_AdhesCtrlInterface_Status_typ
typedef struct AdhesCtrlInterface_Status_typ
{	plcbit AlarmActive;
	plcbit ATS_AddOnOverLimit;
	plcbit ATS_AddOnUnderLimit;
	plcbit FeederFault;
	plcbit GlueApplicationAllowed;
	float GlueCyclePos;
	float LatchedEncoderPos;
	plcbit LowLevel;
	plcbit NordsonInStandby;
	plcbit ServiceNeeded;
	plcbit UnitFault;
	plcbit UnitReady;
} AdhesCtrlInterface_Status_typ;
#endif

#ifndef __AS__TYPE_AdhesiveChannelColormaps_typ
#define __AS__TYPE_AdhesiveChannelColormaps_typ
typedef struct AdhesiveChannelColormaps_typ
{	unsigned char Delay[4];
	unsigned char Glue[4];
} AdhesiveChannelColormaps_typ;
#endif

#ifndef __AS__TYPE_AdhesiveChannelDatapoints_typ
#define __AS__TYPE_AdhesiveChannelDatapoints_typ
typedef struct AdhesiveChannelDatapoints_typ
{	unsigned short Delay[4];
	unsigned short Glue[4];
	unsigned short RowLabel;
} AdhesiveChannelDatapoints_typ;
#endif

#ifndef __AS__TYPE_AdhesiveCtrlInterface_typ
#define __AS__TYPE_AdhesiveCtrlInterface_typ
typedef struct AdhesiveCtrlInterface_typ
{	AdhesCtrlInterface_Commands_typ Commands;
	AdhesCtrlInterface_Pars_typ Parameters;
	AdhesCtrlInterface_Status_typ Status;
} AdhesiveCtrlInterface_typ;
#endif

#ifndef __AS__TYPE_BitmapSelectDatapoints_typ
#define __AS__TYPE_BitmapSelectDatapoints_typ
typedef struct BitmapSelectDatapoints_typ
{	unsigned char AlarmActive;
	plcbit ResetPress;
	plcbit RunPress;
	plcbit StopPress;
	plcbit VacuumPress;
} BitmapSelectDatapoints_typ;
#endif

#ifndef __AS__TYPE_ColorMapDatapoints_typ
#define __AS__TYPE_ColorMapDatapoints_typ
typedef struct ColorMapDatapoints_typ
{	struct AdhesiveChannelColormaps_typ AdhesiveChannelsColormaps[4];
	unsigned char AdhesiveSystemOK;
	unsigned char AdhesiveUnitFault;
	unsigned char AdhesiveUnitFeederFault;
	unsigned char AdhesiveUnitLevelLow;
	unsigned char AdhesiveUnitReady;
	unsigned char AdhesiveUnitServiceNeeded;
	unsigned char AdhesiveUseageLow;
	unsigned char AirPressureOK;
	unsigned char ATSAddOnOver;
	unsigned char ATSAddOnUnder;
	unsigned char AutoModeSelected;
	unsigned char DownstreamSensorOK;
	unsigned char DriveFaultOK;
	unsigned char GlueSystemOK;
	unsigned char JogModeSelected;
	unsigned char NordsonEditTemps;
	unsigned char RecipeLoaded;
	unsigned char RecipeSystemBusy;
	unsigned char SafetyOK;
	unsigned char VacuumOK;
	unsigned char VacuumPressureOK;
	unsigned char VacuumPumpOn;
	unsigned char Valve1OK;
	unsigned char Valve2OK;
	unsigned char Valve3OK;
	unsigned char Valve4OK;
} ColorMapDatapoints_typ;
#endif

#ifndef __AS__TYPE_SSI_Paraller_typ
#define __AS__TYPE_SSI_Paraller_typ
typedef struct SSI_Paraller_typ
{	plcbit Bits[16];
	plcbit FeedBits[16];
	plcbit RamBits[16];
} SSI_Paraller_typ;
#endif

#ifndef __AS__TYPE_DigitalInputs_typ
#define __AS__TYPE_DigitalInputs_typ
typedef struct DigitalInputs_typ
{	plcbit AdhesiveLevelLow;
	plcbit AdhesivePhotoEye;
	plcbit AdhesivePhotoEye_2;
	plcbit AdhesiveUnitNotFaulted;
	plcbit AdhesiveUnitReady;
	plcbit AirPressureOK;
	plcbit BodyDetect;
	plcbit DownstreamSensor;
	plcbit DownstreamSensorRaw;
	plcbit LeftEndDetect;
	plcbit LowAdhesiveUseage;
	unsigned short Pneumatics580StatusWord3;
	plcbit PnuematicsHWStatusV0;
	plcbit PnuematicsHWStatusV2;
	plcbit PnuematicsHWStatusV4;
	plcbit PnuematicsHWStatusV6;
	plcbit RightEndDetect;
	plcbit SafetyOK;
	SSI_Paraller_typ SSI_Parallel;
	plcbit VacHigh;
	plcbit VacLow;
	plcbit VacuumPressureOK;
	plcbit VacuumTempOK;
	plcbit X_PickRetracted;
	plcbit X_PickExtended;
	plcbit Y_PickRetract;
	plcbit X_BlowOff;
	plcbit BodyHopperLow;
	plcbit HopperMotor_RUN;
	plcbit LubricationCounter;
	plcbit HopperMotor_OFF;
	plcbit DownstreamSensorON;
} DigitalInputs_typ;
#endif

#ifndef __AS__TYPE_DigitalOutputs_typ
#define __AS__TYPE_DigitalOutputs_typ
typedef struct DigitalOutputs_typ
{	plcbit AirOn;
	plcbit AmberLightStack;
	plcbit BlowOffOn;
	plcbit BottomFolder;
	plcbit CompressionAirOn;
	plcbit GlueChannel1;
	plcbit GlueChannel2;
	plcbit GlueChannel3;
	plcbit GlueChannel4;
	plcbit GreenLightStack;
	plcbit HighCompression;
	plcbit LowCompression;
	plcbit PickAndPlace_X;
	unsigned short Pneumatics580ControlWord1;
	plcbit PnuematicsValve0;
	plcbit PnuematicsValve2;
	plcbit PnuematicsValve4;
	plcbit PnuematicsValve6;
	plcbit PushOn;
	plcbit RedLightStack;
	plcbit ResetEuchner;
	plcbit ResetSafety;
	plcbit TopFolder;
	plcbit VacuumOn;
	plcbit ZeroEncoder;
	plcbit SidePanelVacOn;
	plcbit SidePanelVacBlowOff;
	plcbit X_PickSolenoid;
	plcbit Y_PickSolenoid;
} DigitalOutputs_typ;
#endif

#ifndef __AS__TYPE_Encoders_typ
#define __AS__TYPE_Encoders_typ
typedef struct Encoders_typ
{	unsigned long SickSSIPos;
	float SickSSIPosDegrees;
	unsigned long FeedEncoderPos;
	float FeedEncoderPosDegrees;
	unsigned long RamEncoderPos;
	float RamEncoderPosDegrees;
} Encoders_typ;
#endif

#ifndef __AS__TYPE_HMIControl_Commands_typ
#define __AS__TYPE_HMIControl_Commands_typ
typedef struct HMIControl_Commands_typ
{	plcbit CancelBoxChange;
	plcbit ConfirmBoxChange;
	plcbit CycleServoHopper;
	plcbit CycleServoRam;
	plcbit HomeServoFeed;
	plcbit HomeServoHopper;
	plcbit HomeServoRam;
	plcbit JogForward;
	plcbit JogReverse;
	plcbit JogServoFeedNeg;
	plcbit JogServoFeedPos;
	plcbit JogServoHopperNeg;
	plcbit JogServoHopperPos;
	plcbit JogServoRamNeg;
	plcbit JogServoRamPos;
	plcbit LoadRecipe;
	plcbit LoadRecipeType1;
	plcbit LoadRecipeType2;
	plcbit RequestBoxType1;
	plcbit RequestBoxType2;
	plcbit RequestReset;
	plcbit RequestStop;
	plcbit RequestVacuumOn;
	plcbit RequestVFDRun;
	plcbit SaveRecipe;
	plcbit SelectAutoMode;
	plcbit SelectJogMode;
	plcbit StartServoFeed;
	plcbit StartServoHopper;
	plcbit ZeroEncoder;
	plcbit EnableShowMode;
} HMIControl_Commands_typ;
#endif

#ifndef __AS__TYPE_HMIControl_Parameters_typ
#define __AS__TYPE_HMIControl_Parameters_typ
typedef struct HMIControl_Parameters_typ
{	float ServoFeedAccel;
	float ServoFeedJogVelocity;
	float ServoFeedTorqueLimit;
	float ServoFeedVelocity;
	float ServoHopperAccel;
	unsigned long ServoHopperEndDwellTime;
	float ServoHopperEndPosition;
	float ServoHopperJogVelocity;
	unsigned long ServoHopperStartDwellTime;
	float ServoHopperStartPosition;
	float ServoHopperTorqueLimit;
	float ServoHopperVelocity;
	float ServoRamAccel;
	unsigned long ServoRamEndDwellTime;
	float ServoRamEndPosition;
	float ServoRamJogVelocity;
	unsigned long ServoRamStartDwellTime;
	float ServoRamStartPosition;
	float ServoRamTorqueLimit;
	float ServoRamNegativeVelocity;
	float ServoRamPositiveVelocity;
	float ServoRamClearPosition;
	unsigned long PickAndPlaceDwell;
	unsigned long ServoHopperDwellTime;
	unsigned long AtTorqueTime;
	unsigned long PickDwellTime;
	unsigned long TopFeedJamTime;
	unsigned long VacuumOffTime;
	unsigned long DownPulseTime;
	unsigned long Y_DelayTime;
	unsigned long BlowOffTime;
	unsigned long SetCycleCount;
	unsigned long LubeCycleCount;
	unsigned long LowFeedJamTime;
	unsigned long LowHopperTime;
} HMIControl_Parameters_typ;
#endif

#ifndef __AS__TYPE_StatusDatapoints_typ
#define __AS__TYPE_StatusDatapoints_typ
typedef struct StatusDatapoints_typ
{	struct AdhesiveChannelDatapoints_typ AdhesiveChannelSDPs[4];
	unsigned short AdhesivePatternDialogSDP;
	unsigned short AdhesivePatternConfirmDialogSDP;
	unsigned short AdhesivePatternConfirmedSDP;
	unsigned short AdhesiveUnitFaultSDP;
	unsigned short AdhesiveUnitLevelLowSDP;
	unsigned short AdhesiveUnitNotReadySDP;
	unsigned short AdhesiveUseageLowSDP;
	unsigned short AutoModeSDP;
	unsigned short BlissSDP;
	unsigned char HardwireValveSDP;
	unsigned short JogStatusDatapoint;
	unsigned short LinMotBotHomeSDP;
	unsigned short LinMotSDP;
	unsigned short LinMotTopHomeSDP;
	unsigned short LinMotTuningSDP;
	unsigned short MaintenanceSDP;
	unsigned short MotorVacuumSDP;
	unsigned short NordsonModbusSDP;
	unsigned short NordsonStandbyOffSDP;
	unsigned short PnuematicFolderSDP;
	unsigned short RecipeDialogSDP;
	unsigned short RecipeIndexSDP;
	unsigned short RecipeReq1SDP;
	unsigned short RecipeReq2SDP;
	unsigned short RestartInhibitSDP;
	unsigned short SafetyStartingSDP;
	unsigned short ServoLayerSDP;
	unsigned short ServoRamHomeSDP;
	unsigned short SmartVacuumLayerSDP;
	unsigned short TraySDP;
	unsigned short VacuumPressureFaultSDP;
	unsigned short VenturiVacuumSDP;
	unsigned short ZeroEncoderSDP;
	unsigned short HopperLowSDP;
	unsigned short HomeServoRamSDP;
	unsigned short LubeSDP;
} StatusDatapoints_typ;
#endif

#ifndef __AS__TYPE_HMIControl_typ
#define __AS__TYPE_HMIControl_typ
typedef struct HMIControl_typ
{	BitmapSelectDatapoints_typ BitmapSelectDatapoints;
	ColorMapDatapoints_typ ColorMapDatapoints;
	HMIControl_Commands_typ Commands;
	HMIControl_Parameters_typ Parameters;
	StatusDatapoints_typ StatusDatapoints;
} HMIControl_typ;
#endif

#ifndef __AS__TYPE_SafetyStatus_typ
#define __AS__TYPE_SafetyStatus_typ
typedef struct SafetyStatus_typ
{	plcbit BackEstopOK;
	unsigned short CabinetEStopStatus;
	plcbit FrontEStopOK;
	plcbit GuardDoorsOK;
	plcbit SafetyProgramRunning;
} SafetyStatus_typ;
#endif

#ifndef __AS__TYPE_IO_typ
#define __AS__TYPE_IO_typ
typedef struct IO_typ
{	DigitalInputs_typ DIs;
	DigitalOutputs_typ DOs;
	Encoders_typ Encoders;
	plcbit ModuleOKs[100];
	SafetyStatus_typ SafetyStatus;
} IO_typ;
#endif

#ifndef __AS__TYPE_LightStack_typ
#define __AS__TYPE_LightStack_typ
typedef enum LightStack_typ
{	LIGHTSTACK_PATLITE = 1,
	LIGHTSTACK_TRI = 0,
} LightStack_typ;
#endif

#ifndef __AS__TYPE_ModeCtrlInterface_Commands_typ
#define __AS__TYPE_ModeCtrlInterface_Commands_typ
typedef struct ModeCtrlInterface_Commands_typ
{	plcbit FinishCycle;
	plcbit ForceSafetyReset;
	plcbit Reset;
	plcbit Run;
	plcbit SetAutoMode;
	plcbit SetJogMode;
	plcbit Stop;
	plcbit SetShowMode;
} ModeCtrlInterface_Commands_typ;
#endif

#ifndef __AS__TYPE_ModeCtrlInterface_Parameters_typ
#define __AS__TYPE_ModeCtrlInterface_Parameters_typ
typedef struct ModeCtrlInterface_Parameters_typ
{	plcbit BottomSensor;
	unsigned long DownstreamClear;
	plcbit DownstreamIgnored;
	unsigned long DownstreamTimeout;
	unsigned long DwellTime;
	float InPositionTolerance;
	LightStack_typ LightStackSelection;
	unsigned char MachineType;
	unsigned short MaxPPM;
	unsigned short MinPPM;
	unsigned short PiecesPerMinute;
	plcbit SideSensors;
	float StopPosition;
	unsigned long VaccumStopTime;
} ModeCtrlInterface_Parameters_typ;
#endif

#ifndef __AS__TYPE_ModeCtrlInterface_Status_typ
#define __AS__TYPE_ModeCtrlInterface_Status_typ
typedef struct ModeCtrlInterface_Status_typ
{	plcbit AtStopPosition;
	plcbit BlissPanelAlarmActive;
	plcbit Dwelling;
	plcbit DwellModeEnabled;
	plcbit InAutoMode;
	plcbit InBlissPanelWindow;
	plcbit Jogging;
	plcbit MachineIsBliss;
	plcbit Running;
	plcbit WaitingOnDownstream;
} ModeCtrlInterface_Status_typ;
#endif

#ifndef __AS__TYPE_ModeCtrlInterface_typ
#define __AS__TYPE_ModeCtrlInterface_typ
typedef struct ModeCtrlInterface_typ
{	ModeCtrlInterface_Commands_typ Commands;
	ModeCtrlInterface_Parameters_typ Parameters;
	ModeCtrlInterface_Status_typ Status;
} ModeCtrlInterface_typ;
#endif

struct mbWriteSingleRegister
{	unsigned long pStation;
	unsigned short startAddress;
	unsigned short value;
	unsigned short status;
	unsigned long i_queryID;
	unsigned long i_hInstance;
	unsigned long i_hMbCons;
	unsigned short i_state;
	plcbit enable;
};
_BUR_PUBLIC void mbWriteSingleRegister(struct mbWriteSingleRegister* inst);
_BUR_PUBLIC unsigned long MpAlarmXSet(struct MpComIdentType(* MpLink), plcstring Name[256]);
_BUR_PUBLIC signed long MpAlarmXReset(struct MpComIdentType(* MpLink), plcstring Name[256]);
_BUR_LOCAL unsigned short GROUP_OFFSET;
_BUR_LOCAL CommStateEnum CommState;
_BUR_LOCAL GroupEnum NextLightGroup;
_BUR_LOCAL GroupEnum CurrentLightGroup;
_BUR_LOCAL struct mbWriteSingleRegister mbWriteSingleRegister_0;
_BUR_LOCAL unsigned short GROUP_REG_ADR;
_BUR_LOCAL plcstring mb_station[21];
_BUR_LOCAL unsigned short ErrorCount;
_BUR_LOCAL unsigned short ERROR_COUNT_THRESH;
_BUR_LOCAL plcbit CommError;
_GLOBAL ModeCtrlInterface_typ gModeControlInterface;
_GLOBAL plcbit gIsSimulated;
_GLOBAL IO_typ gIO;
_GLOBAL HMIControl_typ gHMI;
_GLOBAL AdhesiveCtrlInterface_typ gAdhesiveCtrlInterface;
_GLOBAL MpComIdentType gAlarmXCore;
_GLOBAL unsigned short ERR_FUB_BUSY;
_GLOBAL unsigned char MAX_NUM_GLUE_CHANNELS;
_GLOBAL unsigned char MAX_NUM_GLUE_CHANNELS_M1;
_GLOBAL unsigned char MAX_NUM_ONOFF_PATTERNS;
_GLOBAL unsigned char MAX_NUM_ONOFF_PATTERNS_M1;
_GLOBAL unsigned char NUM_NORDSON_TEMP_ZONES;
_GLOBAL unsigned char NUM_NORDSON_TEMP_ZONES_M1;
_GLOBAL plcstring ALARM_PATLITE_COMMS[256];
_LOCAL plcbit Edge0000100000;
_LOCAL plcbit Edge0000100001;
