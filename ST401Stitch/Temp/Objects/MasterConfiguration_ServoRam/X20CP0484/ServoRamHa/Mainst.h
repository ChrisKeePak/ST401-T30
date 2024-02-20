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

#ifndef __AS__TYPE_ServoRamState_enum
#define __AS__TYPE_ServoRamState_enum
typedef enum ServoRamState_enum
{	SERVORAM_WAIT_FOR_HOME = 0,
	SERVORAM_IDLE = 10,
	SERVORAM_WAITING_ON_BOX = 15,
	SERVORAM_MOVE_TO_END = 20,
	SERVORAM_DWELL_AT_END = 40,
	SERVORAM_MOVE_TO_START = 60,
	SERVORAM_DWELL_AT_START = 80,
	SERVORAM_ERROR = 999,
} ServoRamState_enum;
#endif

#ifndef __AS__TYPE_MpAxisMoveDirectionEnum
#define __AS__TYPE_MpAxisMoveDirectionEnum
typedef enum MpAxisMoveDirectionEnum
{	mpAXIS_DIR_POSITIVE = 0,
	mpAXIS_DIR_NEGATIVE = 1,
	mpAXIS_DIR_CURRENT = 2,
	mpAXIS_DIR_SHORTEST_WAY = 3,
	mpAXIS_DIR_EXCEED_PERIOD = 8,
} MpAxisMoveDirectionEnum;
#endif

#ifndef __AS__TYPE_MpAxisHomeModeEnum
#define __AS__TYPE_MpAxisHomeModeEnum
typedef enum MpAxisHomeModeEnum
{	mpAXIS_HOME_MODE_DEFAULT = 0,
	mpAXIS_HOME_MODE_ABS_SWITCH = 2,
	mpAXIS_HOME_MODE_SWITCH_GATE = 8,
	mpAXIS_HOME_MODE_LIMIT_SWITCH = 3,
	mpAXIS_HOME_MODE_REF_PULSE = 5,
	mpAXIS_HOME_MODE_DIRECT = 1,
	mpAXIS_HOME_MODE_ABSOLUTE = 4,
	mpAXIS_HOME_MODE_ABSOLUTE_CORR = 6,
	mpAXIS_HOME_MODE_DCM = 9,
	mpAXIS_HOME_MODE_DCM_CORR = 10,
	mpAXIS_HOME_MODE_RESTORE_POS = 11,
	mpAXIS_HOME_MODE_AXIS_REF = 12,
	mpAXIS_HOME_MODE_BLOCK_TORQUE = 13,
	mpAXIS_HOME_MODE_BLOCK_DS = 14,
} MpAxisHomeModeEnum;
#endif

#ifndef __AS__TYPE_MpAxisHomeMoveDirectionEnum
#define __AS__TYPE_MpAxisHomeMoveDirectionEnum
typedef enum MpAxisHomeMoveDirectionEnum
{	mpAXIS_HOME_DIR_POSITIVE = 0,
	mpAXIS_HOME_DIR_NEGATIVE = 1,
} MpAxisHomeMoveDirectionEnum;
#endif

#ifndef __AS__TYPE_MpAxisHomeOptionEnum
#define __AS__TYPE_MpAxisHomeOptionEnum
typedef enum MpAxisHomeOptionEnum
{	mpAXIS_HOME_OPTION_OFF = 0,
	mpAXIS_HOME_OPTION_ON = 1,
} MpAxisHomeOptionEnum;
#endif

#ifndef __AS__TYPE_MpAxisHomingType
#define __AS__TYPE_MpAxisHomingType
typedef struct MpAxisHomingType
{	MpAxisHomeModeEnum Mode;
	double Position;
	float StartVelocity;
	float HomingVelocity;
	double SensorOffset;
	float Acceleration;
	MpAxisHomeMoveDirectionEnum StartDirection;
	MpAxisHomeMoveDirectionEnum HomingDirection;
	MpAxisHomeOptionEnum NoDirectionChange;
	MpAxisHomeMoveDirectionEnum SwitchEdge;
	MpAxisHomeOptionEnum ReferencePulse;
	double ReferencePulseBlockingDistance;
	float TorqueLimit;
	double BlockDetectionPositionError;
	double PositionErrorStopLimit;
	unsigned long EndlessPositionDataRef;
} MpAxisHomingType;
#endif

#ifndef __AS__TYPE_MpAxisJogType
#define __AS__TYPE_MpAxisJogType
typedef struct MpAxisJogType
{	float Acceleration;
	float Deceleration;
	float Velocity;
	double LowerLimit;
	double UpperLimit;
} MpAxisJogType;
#endif

#ifndef __AS__TYPE_MpAxisStopType
#define __AS__TYPE_MpAxisStopType
typedef struct MpAxisStopType
{	float Deceleration;
	plcbit StopInPhase;
	double Phase;
} MpAxisStopType;
#endif

#ifndef __AS__TYPE_MpAxisTriggerSourceEnum
#define __AS__TYPE_MpAxisTriggerSourceEnum
typedef enum MpAxisTriggerSourceEnum
{	mpAXIS_TRIGGER1 = 20,
	mpAXIS_TRIGGER2 = 22,
} MpAxisTriggerSourceEnum;
#endif

#ifndef __AS__TYPE_MpAxisTriggerEdgeEnum
#define __AS__TYPE_MpAxisTriggerEdgeEnum
typedef enum MpAxisTriggerEdgeEnum
{	mpAXIS_TRIGGER_EDGE_POS = 0,
	mpAXIS_TRIGGER_EDGE_NEG = 1,
} MpAxisTriggerEdgeEnum;
#endif

#ifndef __AS__TYPE_MpAxisStopAfterTriggerType
#define __AS__TYPE_MpAxisStopAfterTriggerType
typedef struct MpAxisStopAfterTriggerType
{	plcbit Enable;
	double TriggerDistance;
	plcbit ForceTriggerDistance;
	MpAxisTriggerSourceEnum Source;
	MpAxisTriggerEdgeEnum Edge;
} MpAxisStopAfterTriggerType;
#endif

#ifndef __AS__TYPE_MpAxisTorqueLimitType
#define __AS__TYPE_MpAxisTorqueLimitType
typedef struct MpAxisTorqueLimitType
{	float Limit;
	float Window;
} MpAxisTorqueLimitType;
#endif

#ifndef __AS__TYPE_MpAxisReadInfoModeEnum
#define __AS__TYPE_MpAxisReadInfoModeEnum
typedef enum MpAxisReadInfoModeEnum
{	mpAXIS_READ_OFF = 0,
	mpAXIS_READ_CYCLIC = 1,
	mpAXIS_READ_MULTIPLEXED = 2,
	mpAXIS_READ_POLLING_1s = 3,
	mpAXIS_READ_POLLING_5s = 4,
} MpAxisReadInfoModeEnum;
#endif

#ifndef __AS__TYPE_MpAxisCyclicReadSetupType
#define __AS__TYPE_MpAxisCyclicReadSetupType
typedef struct MpAxisCyclicReadSetupType
{	MpAxisReadInfoModeEnum TorqueMode;
	MpAxisReadInfoModeEnum LagErrorMode;
	MpAxisReadInfoModeEnum MotorTempMode;
	MpAxisReadInfoModeEnum UserChannelMode;
} MpAxisCyclicReadSetupType;
#endif

#ifndef __AS__TYPE_MpAxisAutotuneModeEnum
#define __AS__TYPE_MpAxisAutotuneModeEnum
typedef enum MpAxisAutotuneModeEnum
{	mpAXIS_TUNE_AUTOMATIC = 0,
	mpAXIS_TUNE_SPEED = 2,
	mpAXIS_TUNE_POSITION = 1,
	mpAXIS_TUNE_TEST = 31,
	mpAXIS_TUNE_SPEED_ISQ_F1 = 130,
	mpAXIS_TUNE_SPEED_T_FLTR = 66,
	mpAXIS_TUNE_SPEED_T_FLTR_ISQ_F1 = 194,
	mpAXIS_TUNE_SPEED_FLTR = 6,
	mpAXIS_TUNE_ISQ_F1 = 128,
	mpAXIS_TUNE_ISQ_F1_F2 = 384,
	mpAXIS_TUNE_ISQ_F1_F2_F3 = 896,
	mpAXIS_TUNE_FF = 32,
	mpAXIS_TUNE_FF_ONLY_POS = 33,
	mpAXIS_TUNE_FF_ONLY_NEG = 34,
} MpAxisAutotuneModeEnum;
#endif

#ifndef __AS__TYPE_MpAxisFeedForwardModeEnum
#define __AS__TYPE_MpAxisFeedForwardModeEnum
typedef enum MpAxisFeedForwardModeEnum
{	mpAXIS_FF_DISABLED = 0,
	mpAXIS_FF_BOTH = 1,
	mpAXIS_FF_ONLY_POS = 2,
	mpAXIS_FF_ONLY_NEG = 3,
} MpAxisFeedForwardModeEnum;
#endif

#ifndef __AS__TYPE_MpAxisAutotuneType
#define __AS__TYPE_MpAxisAutotuneType
typedef struct MpAxisAutotuneType
{	MpAxisAutotuneModeEnum Mode;
	MpAxisFeedForwardModeEnum FeedForward;
	plcbit Vertical;
	float MaxCurrentPercent;
	float MaxSpeedPercent;
	double MaxDistance;
	float ProportionalAmplification;
} MpAxisAutotuneType;
#endif

#ifndef __AS__TYPE_MpAxisBasicParType
#define __AS__TYPE_MpAxisBasicParType
typedef struct MpAxisBasicParType
{	float Acceleration;
	float Deceleration;
	float Velocity;
	double Position;
	double Distance;
	MpAxisMoveDirectionEnum Direction;
	MpAxisHomingType Home;
	MpAxisJogType Jog;
	MpAxisStopType Stop;
	MpAxisStopAfterTriggerType StopAfterTrigger;
	MpAxisTorqueLimitType Torque;
	MpAxisCyclicReadSetupType CyclicRead;
	MpAxisAutotuneType Autotune;
} MpAxisBasicParType;
#endif

#ifndef __AS__TYPE_MpAxisInputSourceEnum
#define __AS__TYPE_MpAxisInputSourceEnum
typedef enum MpAxisInputSourceEnum
{	mpAXIS_INPUT_NONE = 0,
	mpAXIS_INPUT_TRIGGER1 = 1,
	mpAXIS_INPUT_TRIGGER2 = 2,
	mpAXIS_INPUT_POS_LIMIT_SWITCH = 3,
	mpAXIS_INPUT_NEG_LIMIT_SWITCH = 4,
	mpAXIS_INPUT_HOMING_SWITCH = 5,
} MpAxisInputSourceEnum;
#endif

#ifndef __AS__TYPE_MpAxisBaseTypeEnum
#define __AS__TYPE_MpAxisBaseTypeEnum
typedef enum MpAxisBaseTypeEnum
{	mpAXIS_LIMITED_LINEAR = 0,
	mpAXIS_LIMITED_ROTARY = 1,
	mpAXIS_PERIODIC_LINEAR = 2,
	mpAXIS_PERIODIC_ROTARY = 3,
	mpAXIS_LINEAR = 4,
	mpAXIS_ROTARY = 5,
} MpAxisBaseTypeEnum;
#endif

#ifndef __AS__TYPE_MpAxisMeasurementUnitEnum
#define __AS__TYPE_MpAxisMeasurementUnitEnum
typedef enum MpAxisMeasurementUnitEnum
{	mpAXIS_UNIT_DEGREES = 0,
	mpAXIS_UNIT_MM = 1,
	mpAXIS_UNIT_GENERIC = 2,
	mpAXIS_UNIT_GENERIC_NOT_SCALED = 3,
} MpAxisMeasurementUnitEnum;
#endif

#ifndef __AS__TYPE_MpAxisSoftwareLimitType
#define __AS__TYPE_MpAxisSoftwareLimitType
typedef struct MpAxisSoftwareLimitType
{	double LowerLimit;
	double UpperLimit;
} MpAxisSoftwareLimitType;
#endif

#ifndef __AS__TYPE_MpAxisPeriodType
#define __AS__TYPE_MpAxisPeriodType
typedef struct MpAxisPeriodType
{	double Period;
} MpAxisPeriodType;
#endif

#ifndef __AS__TYPE_MpAxisVelocityLimitModeEnum
#define __AS__TYPE_MpAxisVelocityLimitModeEnum
typedef enum MpAxisVelocityLimitModeEnum
{	mpAXIS_VEL_MODE_OFF = 0,
	mpAXIS_VEL_MODE_STOP_INIT = 1,
	mpAXIS_VEL_MODE_STOP_AUTO1 = 2,
	mpAXIS_VEL_MODE_STOP_AUTO2 = 3,
} MpAxisVelocityLimitModeEnum;
#endif

#ifndef __AS__TYPE_MpAxisMovementLimitsType
#define __AS__TYPE_MpAxisMovementLimitsType
typedef struct MpAxisMovementLimitsType
{	float VelocityPositive;
	float VelocityNegative;
	float Acceleration;
	float Deceleration;
	float JerkTime;
	double PositionErrorStopLimit;
	float VelocityErrorStopLimit;
	MpAxisVelocityLimitModeEnum VelocityErrorStopLimitMode;
} MpAxisMovementLimitsType;
#endif

#ifndef __AS__TYPE_MpAxisCyclicReadChannelsType
#define __AS__TYPE_MpAxisCyclicReadChannelsType
typedef struct MpAxisCyclicReadChannelsType
{	unsigned short UserChannelParameterID;
} MpAxisCyclicReadChannelsType;
#endif

#ifndef __AS__TYPE_MpAxisBasicConfigAxisType
#define __AS__TYPE_MpAxisBasicConfigAxisType
typedef struct MpAxisBasicConfigAxisType
{	MpAxisBaseTypeEnum BaseType;
	MpAxisMeasurementUnitEnum MeasurementUnit;
	double MeasurementResolution;
	MpAxisSoftwareLimitType SoftwareLimitPositions;
	MpAxisPeriodType PeriodSettings;
	MpAxisMovementLimitsType MovementLimits;
	MpAxisCyclicReadChannelsType CyclicReadChannels;
} MpAxisBasicConfigAxisType;
#endif

#ifndef __AS__TYPE_MpAxisMotorDirectionEnum
#define __AS__TYPE_MpAxisMotorDirectionEnum
typedef enum MpAxisMotorDirectionEnum
{	mpAXIS_DIR_CLOCKWISE = 0,
	mpAXIS_DIR_COUNTERCLOCKWISE = 255,
} MpAxisMotorDirectionEnum;
#endif

#ifndef __AS__TYPE_MpAxisGearboxType
#define __AS__TYPE_MpAxisGearboxType
typedef struct MpAxisGearboxType
{	unsigned long Input;
	unsigned long Output;
	MpAxisMotorDirectionEnum Direction;
	float MaximumTorque;
} MpAxisGearboxType;
#endif

#ifndef __AS__TYPE_MpAxisTransformationType
#define __AS__TYPE_MpAxisTransformationType
typedef struct MpAxisTransformationType
{	double ReferenceDistance;
} MpAxisTransformationType;
#endif

#ifndef __AS__TYPE_MpAxisControllerModeEnum
#define __AS__TYPE_MpAxisControllerModeEnum
typedef enum MpAxisControllerModeEnum
{	mpAXIS_CTRL_MODE_POSITION = 1,
	mpAXIS_CTRL_MODE_POSITION_FF = 33,
	mpAXIS_CTRL_MODE_UF = 7,
} MpAxisControllerModeEnum;
#endif

#ifndef __AS__TYPE_MpAxisControllerPositionType
#define __AS__TYPE_MpAxisControllerPositionType
typedef struct MpAxisControllerPositionType
{	float ProportionalGain;
	float IntegralTime;
	float PredictionTime;
	float TotalDelayTime;
} MpAxisControllerPositionType;
#endif

#ifndef __AS__TYPE_MpAxisControllerSpeedType
#define __AS__TYPE_MpAxisControllerSpeedType
typedef struct MpAxisControllerSpeedType
{	float ProportionalGain;
	float IntegralTime;
	float FilterTime;
} MpAxisControllerSpeedType;
#endif

#ifndef __AS__TYPE_MpAxisControllerFeedForwardType
#define __AS__TYPE_MpAxisControllerFeedForwardType
typedef struct MpAxisControllerFeedForwardType
{	float TorqueLoad;
	float TorquePositive;
	float TorqueNegative;
	float SpeedTorqueFactor;
	float Inertia;
	float AccelerationFilterTime;
} MpAxisControllerFeedForwardType;
#endif

#ifndef __AS__TYPE_MpAxisControllerUFTypeEnum
#define __AS__TYPE_MpAxisControllerUFTypeEnum
typedef enum MpAxisControllerUFTypeEnum
{	mpAXIS_CTRL_UF_LINEAR = 1,
	mpAXIS_CTRL_UF_QUADRATIC = 2,
	mpAXIS_CTRL_UF_LINEAR2 = 3,
} MpAxisControllerUFTypeEnum;
#endif

#ifndef __AS__TYPE_MpAxisControllerUFAutoConfigEnum
#define __AS__TYPE_MpAxisControllerUFAutoConfigEnum
typedef enum MpAxisControllerUFAutoConfigEnum
{	mpAXIS_UF_CONFIG_OFF = 0,
	mpAXIS_UF_CONFIG_MOT_PAR = 1,
} MpAxisControllerUFAutoConfigEnum;
#endif

#ifndef __AS__TYPE_MpAxisControllerVoltageFreqType
#define __AS__TYPE_MpAxisControllerVoltageFreqType
typedef struct MpAxisControllerVoltageFreqType
{	MpAxisControllerUFTypeEnum Type;
	MpAxisControllerUFAutoConfigEnum AutoConfig;
	float BoostVoltage;
	float RatedVoltage;
	float RatedFrequency;
	float SlipCompensation;
} MpAxisControllerVoltageFreqType;
#endif

#ifndef __AS__TYPE_MpAxisControllerFilterTypeEnum
#define __AS__TYPE_MpAxisControllerFilterTypeEnum
typedef enum MpAxisControllerFilterTypeEnum
{	mpAXIS_LOOP_FILTER_NO_TRANSFERED = 0,
	mpAXIS_LOOP_FILTER_OFF = 1,
	mpAXIS_LOOP_FILTER_LOW_PASS = 2,
	mpAXIS_LOOP_FILTER_NOTCH = 3,
	mpAXIS_LOOP_FILTER_ZTRANSFER_FUN = 4,
	mpAXIS_LOOP_FILTER_COMPENSATION = 5,
	mpAXIS_LOOP_FILTER_BIQUADRATIC = 6,
	mpAXIS_LOOP_FILTER_LIMITER = 7,
	mpAXIS_LOOP_FILTER_LIMITER_LIN = 8,
	mpAXIS_LOOP_FILTER_LIMITER_RTIME = 9,
} MpAxisControllerFilterTypeEnum;
#endif

#ifndef __AS__TYPE_MpAxisLoopFilterLowPassType
#define __AS__TYPE_MpAxisLoopFilterLowPassType
typedef struct MpAxisLoopFilterLowPassType
{	float CutOffFrequency;
} MpAxisLoopFilterLowPassType;
#endif

#ifndef __AS__TYPE_MpAxisLoopFilterNotchType
#define __AS__TYPE_MpAxisLoopFilterNotchType
typedef struct MpAxisLoopFilterNotchType
{	float CenterFrequency;
	float Bandwidth;
} MpAxisLoopFilterNotchType;
#endif

#ifndef __AS__TYPE_MpAxisLoopFilterZTransferFunType
#define __AS__TYPE_MpAxisLoopFilterZTransferFunType
typedef struct MpAxisLoopFilterZTransferFunType
{	float A0;
	float A1;
	float B0;
	float B1;
	float B2;
} MpAxisLoopFilterZTransferFunType;
#endif

#ifndef __AS__TYPE_MpAxisLoopFilterCompensationType
#define __AS__TYPE_MpAxisLoopFilterCompensationType
typedef struct MpAxisLoopFilterCompensationType
{	unsigned short MultiplicationFactorParID;
	unsigned short AdditiveValueParID;
} MpAxisLoopFilterCompensationType;
#endif

#ifndef __AS__TYPE_MpAxisLoopFilterBiquadraticType
#define __AS__TYPE_MpAxisLoopFilterBiquadraticType
typedef struct MpAxisLoopFilterBiquadraticType
{	float FrequencyNumerator;
	float DampingNumerator;
	float FrequencyDenominator;
	float DampingDenominator;
} MpAxisLoopFilterBiquadraticType;
#endif

#ifndef __AS__TYPE_MpAxisLoopFilterLimiterType
#define __AS__TYPE_MpAxisLoopFilterLimiterType
typedef struct MpAxisLoopFilterLimiterType
{	float PositiveLimit;
	float NegativeLimit;
	unsigned short PositiveLimitParID;
	unsigned short NegativeLimitParID;
} MpAxisLoopFilterLimiterType;
#endif

#ifndef __AS__TYPE_MpAxisLoopFilterLimiterLinType
#define __AS__TYPE_MpAxisLoopFilterLimiterLinType
typedef struct MpAxisLoopFilterLimiterLinType
{	unsigned short InputParID;
	float InputLimit;
	float Gradient;
} MpAxisLoopFilterLimiterLinType;
#endif

#ifndef __AS__TYPE_MpAxisLoopFilterLimiterRTimeType
#define __AS__TYPE_MpAxisLoopFilterLimiterRTimeType
typedef struct MpAxisLoopFilterLimiterRTimeType
{	float RiseTime;
	float NormalizedLimit;
} MpAxisLoopFilterLimiterRTimeType;
#endif

#ifndef __AS__TYPE_MpAxisControllerLoopFiltersType
#define __AS__TYPE_MpAxisControllerLoopFiltersType
typedef struct MpAxisControllerLoopFiltersType
{	MpAxisControllerFilterTypeEnum FilterType;
	MpAxisLoopFilterLowPassType LowPass;
	MpAxisLoopFilterNotchType Notch;
	MpAxisLoopFilterZTransferFunType ZTransferFunction;
	MpAxisLoopFilterCompensationType Compensation;
	MpAxisLoopFilterBiquadraticType Biquadratic;
	MpAxisLoopFilterLimiterType Limiter;
	MpAxisLoopFilterLimiterLinType LimiterLinear;
	MpAxisLoopFilterLimiterRTimeType LimiterRiseTime;
} MpAxisControllerLoopFiltersType;
#endif

#ifndef __AS__TYPE_MpAxisControllerType
#define __AS__TYPE_MpAxisControllerType
typedef struct MpAxisControllerType
{	MpAxisControllerModeEnum Mode;
	MpAxisControllerPositionType Position;
	MpAxisControllerSpeedType Speed;
	MpAxisControllerFeedForwardType FeedForward;
	MpAxisControllerVoltageFreqType VoltageFrequency;
	struct MpAxisControllerLoopFiltersType LoopFilters[3];
} MpAxisControllerType;
#endif

#ifndef __AS__TYPE_MpAxisQuickStopEnum
#define __AS__TYPE_MpAxisQuickStopEnum
typedef enum MpAxisQuickStopEnum
{	mpAXIS_QUICK_STOP_DEC_LIMIT = 20,
	mpAXIS_QUICK_STOP_TORQUE_LIMIT = 30,
	mpAXIS_QUICK_STOP_INDUCTION = 40,
} MpAxisQuickStopEnum;
#endif

#ifndef __AS__TYPE_MpAxisErrorStopEnum
#define __AS__TYPE_MpAxisErrorStopEnum
typedef enum MpAxisErrorStopEnum
{	mpAXIS_ERROR_STOP_DEC_LIMIT = 20,
	mpAXIS_ERROR_STOP_INDUCTION = 40,
	mpAXIS_ERROR_STOP_CONTROL_OFF = 50,
} MpAxisErrorStopEnum;
#endif

#ifndef __AS__TYPE_MpAxisStopReactionType
#define __AS__TYPE_MpAxisStopReactionType
typedef struct MpAxisStopReactionType
{	MpAxisQuickStopEnum Quickstop;
	MpAxisErrorStopEnum DriveError;
} MpAxisStopReactionType;
#endif

#ifndef __AS__TYPE_MpAxisLevelIOEnum
#define __AS__TYPE_MpAxisLevelIOEnum
typedef enum MpAxisLevelIOEnum
{	mpAXIS_IO_ACTIVE_LO = 0,
	mpAXIS_IO_ACTIVE_HI = 1,
	mpAXIS_IO_ACTIVE_LO_EXTERNAL = 288,
	mpAXIS_IO_ACTIVE_HI_EXTERNAL = 289,
} MpAxisLevelIOEnum;
#endif

#ifndef __AS__TYPE_MpAxisDigitalIOLevelType
#define __AS__TYPE_MpAxisDigitalIOLevelType
typedef struct MpAxisDigitalIOLevelType
{	MpAxisLevelIOEnum HomingSwitch;
	MpAxisLevelIOEnum PositiveLimitSwitch;
	MpAxisLevelIOEnum NegativeLimitSwitch;
	MpAxisLevelIOEnum Trigger1;
	MpAxisLevelIOEnum Trigger2;
} MpAxisDigitalIOLevelType;
#endif

#ifndef __AS__TYPE_MpAxisDigitalIOType
#define __AS__TYPE_MpAxisDigitalIOType
typedef struct MpAxisDigitalIOType
{	MpAxisDigitalIOLevelType Level;
	MpAxisInputSourceEnum Quickstop;
} MpAxisDigitalIOType;
#endif

#ifndef __AS__TYPE_MpAxisBasicConfigDriveType
#define __AS__TYPE_MpAxisBasicConfigDriveType
typedef struct MpAxisBasicConfigDriveType
{	MpAxisGearboxType Gearbox;
	MpAxisTransformationType Transformation;
	MpAxisControllerType Controller;
	MpAxisStopReactionType StopReaction;
	MpAxisDigitalIOType DigitalInputs;
} MpAxisBasicConfigDriveType;
#endif

#ifndef __AS__TYPE_MpAxisPosVelOutputTypeEnum
#define __AS__TYPE_MpAxisPosVelOutputTypeEnum
typedef enum MpAxisPosVelOutputTypeEnum
{	mpAXIS_OUTPUT_SET = 0,
	mpAXIS_OUTPUT_ACTUAL = 1,
} MpAxisPosVelOutputTypeEnum;
#endif

#ifndef __AS__TYPE_MpAxisBasicConfigType
#define __AS__TYPE_MpAxisBasicConfigType
typedef struct MpAxisBasicConfigType
{	plcstring AxisName[21];
	MpAxisBasicConfigAxisType Axis;
	MpAxisBasicConfigDriveType Drive;
	MpAxisPosVelOutputTypeEnum PositionOutput;
	MpAxisPosVelOutputTypeEnum VelocityOutput;
} MpAxisBasicConfigType;
#endif

#ifndef __AS__TYPE_MpAxisGearType
#define __AS__TYPE_MpAxisGearType
typedef struct MpAxisGearType
{	float Acceleration;
	float Deceleration;
} MpAxisGearType;
#endif

#ifndef __AS__TYPE_MpAxisCamLeadType
#define __AS__TYPE_MpAxisCamLeadType
typedef struct MpAxisCamLeadType
{	double MasterOffset;
	double MasterDistance;
	double SlaveDistance;
	plcbit CamEnable;
	unsigned char CamTableID;
	double MasterScaling;
	double SlaveScaling;
} MpAxisCamLeadType;
#endif

#ifndef __AS__TYPE_MpAxisCamType
#define __AS__TYPE_MpAxisCamType
typedef struct MpAxisCamType
{	unsigned char CamTableID;
	double MasterStartPosition;
	MpAxisCamLeadType LeadIn;
	MpAxisCamLeadType LeadOut;
	plcstring CamTable[5][13];
} MpAxisCamType;
#endif

#ifndef __AS__TYPE_MpAxisRecoveryModeEnum
#define __AS__TYPE_MpAxisRecoveryModeEnum
typedef enum MpAxisRecoveryModeEnum
{	mpAXIS_RECOVERY_FORWARD = 0,
	mpAXIS_RECOVERY_BACKWARD = 2,
	mpAXIS_RECOVERY_SHORTEST_WAY = 3,
	mpAXIS_RECOVERY_FORWARD_WINDOW = 100,
	mpAXIS_RECOVERY_BACKWARD_WINDOW = 101,
	mpAXIS_RECOVERY_GET_POSITION = 102,
} MpAxisRecoveryModeEnum;
#endif

#ifndef __AS__TYPE_MpAxisRecoveryType
#define __AS__TYPE_MpAxisRecoveryType
typedef struct MpAxisRecoveryType
{	MpAxisRecoveryModeEnum Mode;
	float Velocity;
	float Acceleration;
	double ToleranceWindow;
	double PhaseShift;
	double OffsetShift;
} MpAxisRecoveryType;
#endif

#ifndef __AS__TYPE_MpAxisShiftModeEnum
#define __AS__TYPE_MpAxisShiftModeEnum
typedef enum MpAxisShiftModeEnum
{	mpAXIS_SHIFT_MODE_ABS = 0,
	mpAXIS_SHIFT_MODE_REL = 1,
	mpAXIS_SHIFT_MODE_ABS_NO_RESET = 2,
	mpAXIS_SHIFT_MODE_REL_NO_RESET = 3,
} MpAxisShiftModeEnum;
#endif

#ifndef __AS__TYPE_MpAxisApplyModeEnum
#define __AS__TYPE_MpAxisApplyModeEnum
typedef enum MpAxisApplyModeEnum
{	mpAXIS_SHIFT_TIME_BASE = 1,
	mpAXIS_SHIFT_MSTR_POS_BASE = 2,
	mpAXIS_SHIFT_MSTR_DIST_BASE = 3,
	mpAXIS_SHIFT_VEL_CTRL = 4,
	mpAXIS_OFFS_TIME_MSTR = 257,
	mpAXIS_OFFS_MSTR_POS_BASE_MSTR = 258,
	mpAXIS_OFFS_MSTR_DIS_BASE_MSTR = 259,
	mpAXIS_OFFS_VEL_CTRL_MSTR = 260,
} MpAxisApplyModeEnum;
#endif

#ifndef __AS__TYPE_MpAxisProfileBasisEnum
#define __AS__TYPE_MpAxisProfileBasisEnum
typedef enum MpAxisProfileBasisEnum
{	mpAXIS_PROFILE_BASIS_SLAVE = 0,
	mpAXIS_PROFILE_BASIS_MASTER = 256,
} MpAxisProfileBasisEnum;
#endif

#ifndef __AS__TYPE_MpAxisOffsetInZoneType
#define __AS__TYPE_MpAxisOffsetInZoneType
typedef struct MpAxisOffsetInZoneType
{	plcbit Enable;
	double ZoneStartPosition;
	double ZoneEndPosition;
	double Period;
	MpAxisProfileBasisEnum ProfileBasis;
} MpAxisOffsetInZoneType;
#endif

#ifndef __AS__TYPE_MpAxisOffsetType
#define __AS__TYPE_MpAxisOffsetType
typedef struct MpAxisOffsetType
{	MpAxisShiftModeEnum Mode;
	double Distance;
	float Velocity;
	float Acceleration;
	MpAxisApplyModeEnum ApplicationMode;
	plcbit EnableVelocityControl;
	double ApplicationDistance;
	unsigned short CyclicParID;
	MpAxisOffsetInZoneType WithinZone;
} MpAxisOffsetType;
#endif

#ifndef __AS__TYPE_MpAxisPhasingType
#define __AS__TYPE_MpAxisPhasingType
typedef struct MpAxisPhasingType
{	MpAxisShiftModeEnum Mode;
	double Distance;
	float Velocity;
	float Acceleration;
	MpAxisApplyModeEnum ApplicationMode;
	plcbit EnableVelocityControl;
	double ApplicationDistance;
	unsigned short CyclicParID;
} MpAxisPhasingType;
#endif

#ifndef __AS__TYPE_MpAxisCouplingParType
#define __AS__TYPE_MpAxisCouplingParType
typedef struct MpAxisCouplingParType
{	float RatioNumerator;
	float RatioDenominator;
	unsigned short MasterParID;
	MpAxisGearType Gear;
	MpAxisCamType Cam;
	MpAxisRecoveryType Recovery;
	MpAxisOffsetType OffsetShift;
	MpAxisPhasingType PhaseShift;
} MpAxisCouplingParType;
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

#ifndef __AS__TYPE_Axis_Interface_Comds_ToMapp_typ
#define __AS__TYPE_Axis_Interface_Comds_ToMapp_typ
typedef struct Axis_Interface_Comds_ToMapp_typ
{	plcbit CoupleToMaster;
	plcbit Home;
	plcbit JogNeg;
	plcbit JogPos;
	plcbit LoadConfig;
	plcbit MoveAbs;
	plcbit MoveAdditive;
	plcbit MoveVelocity;
	plcbit Power;
	plcbit SaveConfig;
	plcbit Stop;
	plcbit TorqueLimitingOn;
	plcbit Update;
} Axis_Interface_Comds_ToMapp_typ;
#endif

#ifndef __AS__TYPE_Axis_Interface_Commands_typ
#define __AS__TYPE_Axis_Interface_Commands_typ
typedef struct Axis_Interface_Commands_typ
{	plcbit Init;
	plcbit MoveVelocityTrigStop;
	plcbit RequestCoupleToMaster;
	plcbit RequestHome;
	plcbit RequestJogNeg;
	plcbit RequestJogPos;
	plcbit RequestMoveAbs;
	plcbit RequestMoveAdditive;
	plcbit RequestMoveVelocity;
	unsigned char Stop;
	Axis_Interface_Comds_ToMapp_typ ToMapp;
} Axis_Interface_Commands_typ;
#endif

#ifndef __AS__TYPE_Axis_Interface_Parameters_typ
#define __AS__TYPE_Axis_Interface_Parameters_typ
typedef struct Axis_Interface_Parameters_typ
{	MpAxisBasicConfigType AxisAndDrivePars;
	unsigned long CouplingMaster;
	MpAxisCouplingParType CouplingParameters;
	MpAxisBasicParType MovementParameters;
	float TriggerDistance;
} Axis_Interface_Parameters_typ;
#endif

#ifndef __AS__TYPE_Axis_Interface_Status_typ
#define __AS__TYPE_Axis_Interface_Status_typ
typedef struct Axis_Interface_Status_typ
{	double ActualTorque;
	double ActualPosition;
	float ActualSpeed;
	plcbit AxisInitialized;
	plcstring AxisState[51];
	plcbit ConfigCommandDone;
	plcbit DefaultRecipeLoaded;
	plcbit Error;
	plcbit Homed;
	plcbit InMotion;
	plcbit InPosition;
	plcbit InSync;
	plcbit MappCommandBusy;
	plcbit MoveComplete;
	plcbit PoweredOn;
	plcbit ReadyToPowerOn;
	plcbit TriggerMoveDone;
	plcbit AxisBasicActive;
} Axis_Interface_Status_typ;
#endif

#ifndef __AS__TYPE_Axis_Interface_typ
#define __AS__TYPE_Axis_Interface_typ
typedef struct Axis_Interface_typ
{	Axis_Interface_Commands_typ Commands;
	Axis_Interface_Parameters_typ Parameters;
	Axis_Interface_Status_typ Status;
} Axis_Interface_typ;
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

struct TON
{	plctime PT;
	plctime ET;
	plctime StartTime;
	unsigned long Restart;
	plcbit IN;
	plcbit Q;
	plcbit M;
};
_BUR_PUBLIC void TON(struct TON* inst);
_BUR_LOCAL struct TON StartDwellTimer;
_BUR_LOCAL struct TON EndDwellTimer;
_BUR_LOCAL ServoRamState_enum state;
_GLOBAL struct TON TON_RamDelay;
_GLOBAL_RETAIN plcbit ServoRamFirstHomeExecuted;
_GLOBAL plcbit ServoRamClear;
_GLOBAL plcbit ServoRamBusy;
_GLOBAL plcbit ServoRamAutoHome;
_GLOBAL plctime RamDelay;
_GLOBAL_RETAIN unsigned long LubeCount;
_GLOBAL Axis_Interface_typ gServoRamInterface;
_GLOBAL plcbit gRamAtStopPosition;
_GLOBAL plcbit gPusherOn;
_GLOBAL plcstring gPassword[3][81];
_GLOBAL unsigned long gNumActiveAlarms;
_GLOBAL ModeCtrlInterface_typ gModeControlInterface;
_GLOBAL IO_typ gIO;
_GLOBAL HMIControl_typ gHMI;
_GLOBAL plcbit gHighSeverityAlarmActive;
_GLOBAL plcbit FeedInCycle;
_GLOBAL_RETAIN unsigned long CycleCount;
_GLOBAL unsigned char MAX_NUM_GLUE_CHANNELS;
_GLOBAL unsigned char MAX_NUM_GLUE_CHANNELS_M1;
_GLOBAL unsigned char MAX_NUM_ONOFF_PATTERNS;
_GLOBAL unsigned char MAX_NUM_ONOFF_PATTERNS_M1;
