#define _DEFAULT_INCLUDE
#include <bur\plctypes.h>
#include "C:/Users/Crims/OneDrive/Desktop/Programs/ST401Stitch/Temp/Objects/MasterConfiguration_ServoRam/X20CP0484/ModeContro/Cyclic1st.h"
#line 1 "C:/Users/Crims/OneDrive/Desktop/Programs/ST401Stitch/Logical/ModeControl/ModeControl_ST/Cyclic1.nodebug"
#line 2 "C:/Users/Crims/OneDrive/Desktop/Programs/ST401Stitch/Logical/ModeControl/ModeControl_ST/Cyclic1.st"
void _CYCLIC __BUR__ENTRY_CYCLIC_FUNCT__(void){{



if((gAlarmSystemActive^1)){
return;
}



(AirPressureNotOKTimer.PT=20000);
(AirPressureNotOKTimer.IN=((gIO.DIs.AirPressureOK^1)&(gIsSimulated^1)));
TON(&AirPressureNotOKTimer);
(AirPressureNotOK=AirPressureNotOKTimer.Q);


(AirPressureAlarmActive=MpAlarmXCheckState(&gAlarmXCore,ALARM_AIR_PRESSURE_LOW,1));



if((AirPressureNotOK&(AirPressureAlarmActive^1))){
(status=MpAlarmXSet(&gAlarmXCore,ALARM_AIR_PRESSURE_LOW));
}else if(((AirPressureNotOK^1)&AirPressureAlarmActive)){
(status=MpAlarmXReset(&gAlarmXCore,ALARM_AIR_PRESSURE_LOW));
}


(SafetyNotOKActive=MpAlarmXCheckState(&gAlarmXCore,ALARM_SAFETY_NOTOK,1));



if(((gIO.DIs.SafetyOK^1)&(SafetyNotOKActive^1)&gIO.SafetyStatus.SafetyProgramRunning)){
(status=MpAlarmXSet(&gAlarmXCore,ALARM_SAFETY_NOTOK));
}else if((gIO.DIs.SafetyOK&SafetyNotOKActive&gIO.SafetyStatus.SafetyProgramRunning)){
(status=MpAlarmXReset(&gAlarmXCore,ALARM_SAFETY_NOTOK));
}


(GuardDoorNotOKActive=MpAlarmXCheckState(&gAlarmXCore,ALARM_SAFETY_GUARD_DOOR,1));



if(((gIO.SafetyStatus.GuardDoorsOK^1)&(GuardDoorNotOKActive^1)&gIO.SafetyStatus.SafetyProgramRunning)){
(status=MpAlarmXSet(&gAlarmXCore,ALARM_SAFETY_GUARD_DOOR));
}else if((gIO.SafetyStatus.GuardDoorsOK&GuardDoorNotOKActive&gIO.SafetyStatus.SafetyProgramRunning)){
(status=MpAlarmXReset(&gAlarmXCore,ALARM_SAFETY_GUARD_DOOR));
}


(FrontEStopNotOKActive=MpAlarmXCheckState(&gAlarmXCore,ALARM_SAFETY_FRONT_ESTOP,1));



if(((gIO.SafetyStatus.FrontEStopOK^1)&(FrontEStopNotOKActive^1)&gIO.SafetyStatus.SafetyProgramRunning)){
(status=MpAlarmXSet(&gAlarmXCore,ALARM_SAFETY_FRONT_ESTOP));
}else if((gIO.SafetyStatus.FrontEStopOK&FrontEStopNotOKActive&gIO.SafetyStatus.SafetyProgramRunning)){
(status=MpAlarmXReset(&gAlarmXCore,ALARM_SAFETY_FRONT_ESTOP));
}


(RearEStopNotOKActive=MpAlarmXCheckState(&gAlarmXCore,ALARM_SAFETY_REAR_ESTOP,1));



if(((gIO.SafetyStatus.BackEstopOK^1)&(RearEStopNotOKActive^1)&gIO.SafetyStatus.SafetyProgramRunning)){
(status=MpAlarmXSet(&gAlarmXCore,ALARM_SAFETY_REAR_ESTOP));
}else if((gIO.SafetyStatus.BackEstopOK&RearEStopNotOKActive&gIO.SafetyStatus.SafetyProgramRunning)){
(status=MpAlarmXReset(&gAlarmXCore,ALARM_SAFETY_REAR_ESTOP));
}



(gIO.DOs.AirOn=gIO.DIs.SafetyOK);
(gIO.DOs.RedLightStack=((gIO.DIs.SafetyOK&(gModeControlInterface.Status.BlissPanelAlarmActive^1))^1));



(gIO.DOs.GreenLightStack=(gAlarmActive^1));



(gIO.DOs.AmberLightStack=(gAlarmActive|gIO.DIs.BodyHopperLow));



(DownstreamSensorTimer.PT=gModeControlInterface.Parameters.DownstreamTimeout);
(DownstreamSensorTimer.IN=(gIO.DIs.DownstreamSensorRaw&(gModeControlInterface.Parameters.DownstreamIgnored^1)));
TON(&DownstreamSensorTimer);
(gIO.DIs.DownstreamSensor=DownstreamSensorTimer.Q);
























(Rtrig_AlarmActive.CLK=gAlarmActive);;R_TRIG(&Rtrig_AlarmActive);
(Rtrig_HopperLow.CLK=HoperLowStop);;R_TRIG(&Rtrig_HopperLow);
(Rtrig_RequestStop.CLK=gHMI.Commands.RequestStop);;R_TRIG(&Rtrig_RequestStop);
(Rtrig_DownstreamBlocked.CLK=DownstreamBlocked);;R_TRIG(&Rtrig_DownstreamBlocked);
(Ftrig_DownstreamBlocked.CLK=gIO.DIs.DownstreamSensor);;F_TRIG(&Ftrig_DownstreamBlocked);
(Rtrig_RequestVFDRun.CLK=gHMI.Commands.RequestVFDRun);;R_TRIG(&Rtrig_RequestVFDRun);
if(((Rtrig_AlarmActive.Q|Rtrig_HopperLow.Q|Rtrig_RequestStop.Q)&gHMI.Commands.SelectAutoMode&(gHMI.Commands.RequestVFDRun|StopTriggerByDownstream))){
(gModeControlInterface.Commands.FinishCycle=1);
}
if((Rtrig_DownstreamBlocked.Q&(gHMI.Commands.RequestStop^1))){
(gHMI.Commands.RequestStop=1);

(StopTriggerByDownstream=1);
}
if((Ftrig_DownstreamBlocked.Q&StopTriggerByDownstream)){
(gHMI.Commands.RequestVFDRun=1);
(gHMI.Commands.RequestStop=0);
(StopTriggerByDownstream=0);
}
if((Rtrig_RequestVFDRun.Q&StopTriggerByDownstream)){
(StopTriggerByDownstream=0);
}





if((gServoFeedInterface.Status.Error|gServoHopperInterface.Status.Error|gServoRamInterface.Status.Error|gFoldPushCtrlInterface.Parameters.LinMotBotFolder.Status.Error|gFoldPushCtrlInterface.Parameters.LinMotTopFolder.Status.Error|(gIO.DIs.SafetyOK^1)|gHMI.Commands.SelectJogMode|gHighSeverityAlarmActive|BodyCheckError)){
(gModeControlInterface.Commands.FinishCycle=0);
(PickAndPlaceHasBox=0);
(PickAndPlaceDwelling=0);
(PhotoEyeSeen=0);
(Vacuum_ON=0);
(gIO.DOs.X_PickSolenoid=0);
(gIO.DOs.BlowOffOn=0);
(state=99);
}





if((gAdhesiveCtrlInterface.Status.AlarmActive|gFoldPushCtrlInterface.Parameters.LinMotBotFolder.Status.Error|gFoldPushCtrlInterface.Parameters.LinMotTopFolder.Status.Error|gServoFeedInterface.Status.Error|gServoHopperInterface.Status.Error|gServoRamInterface.Status.Error|gLowSeverityAlarmActive|gHighSeverityAlarmActive)){
(gHMI.Commands.RequestVFDRun=0);
}



(MoveVelocityRequest=(gHMI.Commands.SelectAutoMode&(gHMI.Commands.RequestVFDRun|gModeControlInterface.Commands.FinishCycle)));


(DistanceFromStopPosition=DetermineDistanceToStopPos(gIO.Encoders.FeedEncoderPos,gModeControlInterface.Parameters.StopPosition));



(DownstreamBlocked=(gIO.DIs.DownstreamSensor&gRamAtStopPosition));



(gModeControlInterface.Status.WaitingOnDownstream=(MoveVelocityRequest&DownstreamBlocked));



(gHMI.Commands.StartServoHopper=(gHMI.Commands.RequestVFDRun|gModeControlInterface.Commands.FinishCycle));
(gHMI.Commands.StartServoFeed=((gHMI.Commands.RequestVFDRun|gModeControlInterface.Commands.FinishCycle)&(StopFeedServo^1)));
(gHMI.Commands.CycleServoRam=(gHMI.Commands.RequestVFDRun|gModeControlInterface.Commands.FinishCycle));


(Rtrig_FeedServoTMR.CLK=FeedServoTMR.Q);;R_TRIG(&Rtrig_FeedServoTMR);
(StopFeed=Rtrig_FeedServoTMR.Q);




(FeedServoTMR.IN=gIO.DIs.BodyHopperLow);
(FeedServoTMR.PT=gHMI.Parameters.LowHopperTime);
TON(&FeedServoTMR);
if(FeedServoTMR.Q){
(HopperLowAlarm=1);
}



(FeedStopTimer.IN=gIO.DIs.BodyHopperLow);
(FeedStopTimer.PT=gHMI.Parameters.LowHopperTime);
TON(&FeedStopTimer);
(HoperLowStop=FeedStopTimer.Q);


if((gIO.DIs.BodyHopperLow^1)){
(HopperLowAlarm=0);
}


(Rtrig_InfeedBoxPresent.CLK=InfeedBoxPresent);;R_TRIG(&Rtrig_InfeedBoxPresent);
if(Rtrig_InfeedBoxPresent.Q){
(FeedPositionCapture=gServoFeedInterface.Status.ActualPosition);
(FeedPosFinal=(FeedPositionCapture+FeedServoPosSP));
}







(gIO.DOs.VacuumOn=((Vacuum_ON|gVacCtrlInterface.Commands.VenturiOnManual)&gIO.DIs.SafetyOK));
















if(gVacCtrlInterface.Commands.BlowOffOnManual){
(gIO.DOs.BlowOffOn=gVacCtrlInterface.Commands.BlowOffOnManual);
}











(TON_BlowOff.PT=gHMI.Parameters.BlowOffTime);
(TON_BlowOff.IN=gVacCtrlInterface.Commands.BlowOffOnManual);
TON(&TON_BlowOff);

if(TON_BlowOff.Q){
(gVacCtrlInterface.Commands.BlowOffOnManual=0);
(gIO.DOs.BlowOffOn=0);
}




if((gIO.DIs.AdhesivePhotoEye&gIO.DIs.AdhesivePhotoEye_2)){
(PhotoEyeSeen=1);

}


if(gIO.DIs.BodyDetect){
(PhotoEyeSeen=0);
}



(Rtrig_PhotoEyeSeen.CLK=PhotoEyeSeen);;R_TRIG(&Rtrig_PhotoEyeSeen);
if((Rtrig_PhotoEyeSeen.Q&gHMI.Commands.SelectAutoMode&(gHMI.Commands.RequestVFDRun|gModeControlInterface.Commands.FinishCycle))){
(gAdhesiveCtrlInterface.Status.LatchedEncoderPos=(float)gServoFeedInterface.Status.ActualPosition);
(DistanceAfterLatch=0);
(OldEncoderPos=(float)gServoFeedInterface.Status.ActualPosition);
}



(DistanceAfterLatch=(ComputeDistanceMoved((float)gServoFeedInterface.Status.ActualPosition,OldEncoderPos)+DistanceAfterLatch));


(OldEncoderPos=(float)gServoFeedInterface.Status.ActualPosition);










(BodyPanelTimeout.PT=gHMI.Parameters.LowFeedJamTime);
(BodyPanelTimeout.IN=((gHMI.Commands.RequestVFDRun|gModeControlInterface.Commands.FinishCycle)&(gIO.DIs.BodyDetect^1)));
TON(&BodyPanelTimeout);
if(BodyPanelTimeout.Q){
(BodyCheckError=1);
}else if(gHMI.Commands.RequestReset){
(BodyCheckError=0);
}


(LubricationOK=(((unsigned long)LubeCount<(unsigned long)gHMI.Parameters.SetCycleCount)));

(Rtrig_LubricationCounter.CLK=gIO.DIs.LubricationCounter);;R_TRIG(&Rtrig_LubricationCounter);
(LubricationCounter.CU=Rtrig_LubricationCounter.Q);
(LubricationCounter.RESET=LubeReset);
(LubricationCounter.PV=(unsigned short)gHMI.Parameters.LubeCycleCount);
CTU(&LubricationCounter);
(CountReset=LubricationCounter.Q);


(LubeReset=CountReset);
if(CountReset){
(LubeCount=0);
}


(PickAndPlaceDwellTimer.IN=0);


switch(state){

case 0:{



if((gHMI.Commands.RequestVFDRun&(gModeControlInterface.Commands.FinishCycle^1)&(InfeedBoxPresent^1)&gIO.DIs.X_PickRetracted&gServoFeedInterface.Commands.RequestMoveVelocity&(gIO.DIs.X_PickExtended^1)&(PickAndPlaceHasBox^1)&(PickAndPlaceDwelling^1))){
(state=1);
}

}break;case 1:{

(gIO.DOs.X_PickSolenoid=1);
(FeedInCycle=1);
(Return_Trigger=0);
(Vacuum_ON=1);

if(gIO.DIs.X_PickExtended){
(PickAndPlaceHasBox=1);
(state=2);
}

}break;case 2:{

(PickAndPlaceDwelling=1);
(PickAndPlaceDwellTimer.IN=1);
(PickAndPlaceDwellTimer.PT=gHMI.Parameters.PickAndPlaceDwell);
if(PickAndPlaceDwellTimer.Q){
(PickAndPlaceDwelling=0);
(gIO.DOs.X_PickSolenoid=0);
(Return_Trigger=1);
(state=3);
}

}break;case 3:{

if(gIO.DIs.X_BlowOff){
(Vacuum_ON=0);
(gIO.DOs.BlowOffOn=1);
(state=4);
}

}break;case 4:{

if(gIO.DIs.X_PickRetracted){
(gIO.DOs.BlowOffOn=0);
(PickAndPlaceHasBox=0);
if(gHMI.Commands.RequestVFDRun){
(state=1);
}else{
(state=0);
}
}

}break;case 99:{
if((((unsigned long)gNumActiveAlarms==(unsigned long)0))){
(state=0);
}
}break;}

TON(&PickAndPlaceDwellTimer);

}}
#line 390 "C:/Users/Crims/OneDrive/Desktop/Programs/ST401Stitch/Logical/ModeControl/ModeControl_ST/Cyclic1.nodebug"

void __AS__ImplInitCyclic1_st(void){}

__asm__(".section \".plc\"");
__asm__(".ascii \"iecfile \\\"Logical/Global.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/operator/operator.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/runtime/runtime.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/astime/astime.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsIecCon/AsIecCon.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/standard/standard.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/brsystem/brsystem.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/sys_lib/sys_lib.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/Vacuum/Types.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/FoldPush/Types.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/GluePatt/Types.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/SetRamPars/Types.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/GrayToBin/Types.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsBrStr/AsBrStr.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/InvErrTxt/InvErrTxt.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/DistCalc/Types.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsSafety/AsSafety.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/FileIO/FileIO.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsXml/AsXml.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsMbTcp/AsMbTCP.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/asstring/asstring.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsIOAcc/AsIOAcc.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsBrMath/AsBrMath.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsEPL/AsEPL.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/DataObj/DataObj.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsIODiag/AsIODiag.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/Acp10man/Acp10man.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/NcGlobal/NcGlobal.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/Acp10sdc/acp10sdc.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/Acp10sim/acp10sim.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/Acp10_MC/acp10_mc.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/MpAxis/MpAxis.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/MpAxis/MpAxisError.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/MpAxis/MpAxisAlarm.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/MpBase/MpBase.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/MpAlarmX/MpAlarmX.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/MpAlarmX/MpAlarmXError.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/MpCom/MpCom.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/MpCom/MpComError.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/MpRecipe/MpRecipe.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/MpRecipe/MpRecipeAlarm.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/MpRecipe/MpRecipeError.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/MappCall/Types.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/Types/Types.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AxisFUBs/Types.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/Lib_PBFlx/Types.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/operator/operator.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/runtime/runtime.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/astime/astime.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsIecCon/AsIecCon.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/standard/standard.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/brsystem/brsystem.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/sys_lib/sys_lib.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/Vacuum/Vacuum.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/FoldPush/FoldPush.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/GluePatt/GluePatt.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/SetRamPars/SetRamPars.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/GrayToBin/GrayToBin.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsBrStr/AsBrStr.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/InvErrTxt/InvErrTxt.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/DistCalc/DistCalc.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsSafety/AsSafety.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/FileIO/FileIO.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsXml/AsXml.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsMbTcp/AsMbTCP.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/asstring/asstring.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsIOAcc/AsIOAcc.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsBrMath/AsBrMath.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsEPL/AsEPL.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/DataObj/DataObj.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsIODiag/AsIODiag.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/NcGlobal/NcGlobal.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/Acp10_MC/acp10_mc.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/MpAxis/MpAxis.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/MpBase/MpBase.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/MpAlarmX/MpAlarmX.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/MpCom/MpCom.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/MpRecipe/MpRecipe.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/MappCall/MappCall.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AxisFUBs/AxisFUBs.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/Lib_PBFlx/Lib_PBFlx.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Global.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Temp/Includes/AS_TempDecl/MasterConfiguration_ServoRam/GlobalComponents/MpComponents.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/operator/operator.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/runtime/runtime.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/astime/astime.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsIecCon/AsIecCon.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/standard/standard.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/brsystem/brsystem.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/sys_lib/sys_lib.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/Constants/Constants.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/Constants/AlarmNames.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/Vacuum/Constants.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/FoldPush/Constants.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/GluePatt/Constants.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/SetRamPars/Constants.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/GrayToBin/Constants.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsBrStr/AsBrStr.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/InvErrTxt/InvErrTxt.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/DistCalc/Constants.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsSafety/AsSafety.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/FileIO/FileIO.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsXml/AsXml.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsMbTcp/AsMbTCP.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/asstring/asstring.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsIOAcc/AsIOAcc.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsBrMath/AsBrMath.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsEPL/AsEPL.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/DataObj/DataObj.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsIODiag/AsIODiag.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/Acp10par/Acp10par.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/NcGlobal/NcGlobal.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/Acp10sdc/acp10sdc.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/Acp10sim/acp10sim.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/Acp10_MC/acp10_mc.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/MpBase/MpBase.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/MpCom/MpCom.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/MappCall/Constants.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AxisFUBs/Constants.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/Lib_PBFlx/Constants.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/ModeControl/ModeControl_ST/Types.typ\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/ModeControl/ModeControl_ST/Variables.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/ModeControl/ModeControl_ST/LocalFunctions.fun\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"C:/Users/Crims/OneDrive/Desktop/Programs/ST401Stitch/Temp/Objects/MasterConfiguration_ServoRam/X20CP0484/ModeContro/Cyclic1.st.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"plcreplace \\\"C:/Users/Crims/OneDrive/Desktop/Programs/ST401Stitch/Temp/Objects/MasterConfiguration_ServoRam/X20CP0484/ModeContro/Cyclic1.st.c\\\" \\\"C:/Users/Crims/OneDrive/Desktop/Programs/ST401Stitch/Logical/ModeControl/ModeControl_ST/Cyclic1.st\\\"\\n\"");
__asm__(".previous");

__asm__(".section \".plciec\"");
__asm__(".ascii \"plcdata_const 'MAX_NUM_GLUE_CHANNELS'\\n\"");
__asm__(".ascii \"plcdata_const 'MAX_NUM_GLUE_CHANNELS_M1'\\n\"");
__asm__(".ascii \"plcdata_const 'MAX_NUM_ONOFF_PATTERNS'\\n\"");
__asm__(".ascii \"plcdata_const 'MAX_NUM_ONOFF_PATTERNS_M1'\\n\"");
__asm__(".ascii \"plcdata_const 'NUM_NORDSON_TEMP_ZONES'\\n\"");
__asm__(".ascii \"plcdata_const 'NUM_NORDSON_TEMP_ZONES_M1'\\n\"");
__asm__(".ascii \"plcdata_const 'ALARM_AIR_PRESSURE_LOW'\\n\"");
__asm__(".ascii \"plcdata_const 'ALARM_SAFETY_NOTOK'\\n\"");
__asm__(".ascii \"plcdata_const 'ALARM_SAFETY_FRONT_ESTOP'\\n\"");
__asm__(".ascii \"plcdata_const 'ALARM_SAFETY_REAR_ESTOP'\\n\"");
__asm__(".ascii \"plcdata_const 'ALARM_SAFETY_GUARD_DOOR'\\n\"");
__asm__(".previous");
