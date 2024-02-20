/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1706739231_2_
#define _BUR_1706739231_2_

#include <bur/plctypes.h>

/* Constants */
#ifdef _REPLACE_CONST
#else
#endif


/* Variables */
_GLOBAL plcbit b_ModuleStatus;
_GLOBAL_RETAIN unsigned long CycleCount;
_GLOBAL float DistanceAfterLatch;
_GLOBAL plcbit FeedInCycle;
_GLOBAL double FeedPosFinal;
_GLOBAL double FeedPositionCapture;
_GLOBAL plcbit FeedServoBusy;
_GLOBAL unsigned char gActivePage;
_GLOBAL struct AdhesiveCtrlInterface_typ gAdhesiveCtrlInterface;
_GLOBAL plcbit gAirPressureAlarmActive;
_GLOBAL plcbit gAlarmActive;
_GLOBAL plcbit gAlarmSystemActive;
_GLOBAL plcbit gAutoTune;
_GLOBAL struct ACP10AXIS_typ gBotLinAxis;
_GLOBAL struct ACP10AXIS_typ gBotLinAxis_1;
_GLOBAL unsigned char gChangePage;
_GLOBAL plcbit gCurrentLimitHit;
_GLOBAL plcbit gDownstreamBlocked;
_GLOBAL_RETAIN struct MC_ENDLESS_POSITION gEndlessPosBot;
_GLOBAL_RETAIN struct MC_ENDLESS_POSITION gEndlessPosTop;
_GLOBAL struct FoldPushCtrlInterface_typ gFoldPushCtrlInterface;
_GLOBAL plcbit gHighSeverityAlarmActive;
_GLOBAL struct HMIControl_typ gHMI;
_GLOBAL struct Home_Parameters_typ gHomingParameters;
_GLOBAL struct IO_typ gIO;
_GLOBAL plcbit gIsSimulated;
_GLOBAL plcbit gLowSeverityAlarmActive;
_GLOBAL struct ModeCtrlInterface_typ gModeControlInterface;
_GLOBAL unsigned long gNumActiveAlarms;
_GLOBAL unsigned long gNumAlarms;
_GLOBAL float gOffDelayCompensation;
_GLOBAL float gOnDelayCompensation;
_GLOBAL plcstring gPassword[3][81];
_GLOBAL plcbit gPusherOn;
_GLOBAL plcbit gRamAtStopPosition;
_GLOBAL struct RamControlInterface_typ gRamCtrlInterface;
_GLOBAL_RETAIN struct RecipeCtrlInterface_typ gRecipeInterface;
_GLOBAL plcbit gSafetyNotOKAlarmActive;
_GLOBAL struct ACP10AXIS_typ gServoFeed;
_GLOBAL struct Axis_Interface_typ gServoFeedInterface;
_GLOBAL struct ACP10AXIS_typ gServoHopper;
_GLOBAL struct Axis_Interface_typ gServoHopperInterface;
_GLOBAL struct ACP10AXIS_typ gServoRam;
_GLOBAL struct Axis_Interface_typ gServoRamInterface;
_GLOBAL plcbit gSoftwareReset;
_GLOBAL struct ACP10AXIS_typ gTopLinAxis;
_GLOBAL struct ACP10AXIS_typ gTopLinAxis_1;
_GLOBAL unsigned char gUserLevel;
_GLOBAL struct VacCtrlInterface_typ gVacCtrlInterface;
_GLOBAL plcbit HoperLowStop;
_GLOBAL plctime HopperLowTime;
_GLOBAL plcbit InfeedBoxPresent;
_GLOBAL_RETAIN unsigned long LubeCount;
_GLOBAL plcbit LubricationOK;
_GLOBAL struct DUT_NDSN_Flex Melter;
_GLOBAL plcbit PhotoEyeSeen;
_GLOBAL plctime RamDelay;
_GLOBAL_RETAIN plcbit ServoFeedFirstHomeExecuted;
_GLOBAL_RETAIN struct MC_ENDLESS_POSITION ServoFeed_EPD;
_GLOBAL_RETAIN plcbit ServoHopperFirstHomeExecuted;
_GLOBAL_RETAIN struct MC_ENDLESS_POSITION ServoHopper_EPD;
_GLOBAL plcbit ServoRamAutoHome;
_GLOBAL plcbit ServoRamBusy;
_GLOBAL plcbit ServoRamClear;
_GLOBAL_RETAIN plcbit ServoRamFirstHomeExecuted;
_GLOBAL plcbit ServoRamTrigger;
_GLOBAL_RETAIN struct MC_ENDLESS_POSITION ServoRam_EPD;
_GLOBAL plcbit StopFeed;
_GLOBAL struct TON TON_RamDelay;





__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/Global.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/standard/standard.fun\\\" scope \\\"global\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1706739231_2_ */

