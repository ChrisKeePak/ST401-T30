#ifndef __AS__TYPE_State_enum
#define __AS__TYPE_State_enum
typedef enum State_enum
{	PICKANDPLACE_ERROR = 99,
	PICKANDPLACE_RETURN = 4,
	PICKANDPLACE_BLOWOFF = 3,
	PICKANDPLACE_DWELL = 2,
	PICKANDPLACE_MOVE_FORWARD = 1,
	PICKANDPLACE_START = 0,
} State_enum;
#endif

struct CTU
{	unsigned short PV;
	unsigned short CV;
	plcbit CU;
	plcbit RESET;
	plcbit Q;
	plcbit M;
};
_BUR_PUBLIC void CTU(struct CTU* inst);
struct F_TRIG
{	plcbit CLK;
	plcbit Q;
	plcbit M;
};
_BUR_PUBLIC void F_TRIG(struct F_TRIG* inst);
struct R_TRIG
{	plcbit CLK;
	plcbit Q;
	plcbit M;
};
_BUR_PUBLIC void R_TRIG(struct R_TRIG* inst);
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
struct TP
{	plctime PT;
	plctime ET;
	plctime StartTime;
	unsigned long Restart;
	plcbit IN;
	plcbit Q;
};
_BUR_PUBLIC void TP(struct TP* inst);
_BUR_LOCAL plcbit AirPressureAlarmActive;
_BUR_LOCAL plcbit AirPressureNotOK;
_BUR_LOCAL struct TON AirPressureNotOKTimer;
_BUR_LOCAL struct TP BlowOff_Pulse;
_BUR_LOCAL plcbit BlowOff_Trigger;
_BUR_LOCAL plcbit BodyCheckError;
_BUR_LOCAL plcbit BodyCheckErrorActive;
_BUR_LOCAL struct TON BodyPanelTimeout;
_BUR_LOCAL struct TON BoxPickTMR;
_BUR_LOCAL plcbit CountReset;
_BUR_LOCAL float DistanceFromStopPosition;
_BUR_LOCAL plcbit DownstreamBlocked;
_BUR_LOCAL struct TON DownstreamSensorONTimer;
_BUR_LOCAL struct TON DownstreamSensorTimer;
_BUR_LOCAL plcbit Dummy;
_BUR_LOCAL struct TON DwellTimer;
_BUR_LOCAL struct TON EuchnerSafeResetTimer;
_BUR_LOCAL double FeedPosFinal;
_BUR_LOCAL double FeedPositionCapture;
_BUR_LOCAL double FeedServoPosSP;
_BUR_LOCAL plcbit FeedServoTimeout;
_BUR_LOCAL struct TON FeedServoTMR;
_BUR_LOCAL struct TON FeedStopTimer;
_BUR_LOCAL plcbit ForceBodyPanellError;
_BUR_LOCAL plcbit FrontEStopNotOKActive;
_BUR_LOCAL struct TON VaccumStopTimer;
_BUR_LOCAL struct F_TRIG Ftrig_BlowOffOnManual;
_BUR_LOCAL struct F_TRIG Ftrig_DownstreamBlocked;
_BUR_LOCAL plcbit GluePhotoEyeAlarmActive;
_BUR_LOCAL plcbit GuardDoorNotOKActive;
_BUR_LOCAL plcbit HopperLowAlarm;
_BUR_LOCAL plcbit InBlissSidePanelCheckWindow;
_BUR_LOCAL plcbit LubeReset;
_BUR_LOCAL struct CTU LubricationCounter;
_BUR_LOCAL plcbit MoveVelocityRequest;
_BUR_LOCAL float OldEncoderPos;
_BUR_LOCAL plcbit PhotoEyeCheckErrorActive;
_BUR_LOCAL struct TON PhotoEyeTimeout;
_BUR_LOCAL plcbit PickAndPlaceDwelling;
_BUR_LOCAL struct TON PickAndPlaceDwellTimer;
_BUR_LOCAL plcbit PickAndPlaceHasBox;
_BUR_LOCAL plctime PickDwellTime;
_BUR_LOCAL plcbit RamAtStopPosition;
_BUR_LOCAL unsigned long RamCycleCount;
_BUR_LOCAL plcbit RearEStopNotOKActive;
_BUR_LOCAL plcbit Return_Trigger;
_BUR_LOCAL struct R_TRIG Rtrig_AlarmActive;
_BUR_LOCAL struct R_TRIG Rtrig_BlowOffManual;
_BUR_LOCAL struct R_TRIG Rtrig_BlowOffTrigger;
_BUR_LOCAL struct R_TRIG Rtrig_DownstreamBlocked;
_BUR_LOCAL struct R_TRIG Rtrig_FeedServoTMR;
_BUR_LOCAL struct R_TRIG Rtrig_HopperLow;
_BUR_LOCAL struct R_TRIG Rtrig_InfeedBoxPresent;
_BUR_LOCAL struct R_TRIG Rtrig_LubricationCounter;
_BUR_LOCAL struct R_TRIG Rtrig_PhotoEyeSeen;
_BUR_LOCAL struct R_TRIG Rtrig_RequestStop;
_BUR_LOCAL struct R_TRIG Rtrig_RequestVFDRun;
_BUR_LOCAL plcbit SafetyNotOKActive;
_BUR_LOCAL struct TON SafetyResetRequestTimer;
_BUR_LOCAL struct TON ShowModeTimer;
_BUR_LOCAL plcbit SideCheckError;
_BUR_LOCAL plcbit SideCheckErrorActive;
_BUR_LOCAL State_enum state;
_BUR_LOCAL unsigned long status;
_BUR_LOCAL plcbit StopFeedServo;
_BUR_LOCAL plcbit StopPositionDwellExpire;
_BUR_LOCAL plcbit StopTriggerByDownstream;
_BUR_LOCAL struct TON TON_BlowOff;
_BUR_LOCAL struct TON TON_RamDelay;
_BUR_LOCAL plctime VacuumOffTime;
_BUR_LOCAL struct TON VacuumTimer;
_BUR_LOCAL plcbit Vacuum_ON;
_BUR_LOCAL struct TON Y_Delay;
_BUR_LOCAL struct TP Y_Down_Pulse;
_BUR_LOCAL plcbit Y_Trigger;
