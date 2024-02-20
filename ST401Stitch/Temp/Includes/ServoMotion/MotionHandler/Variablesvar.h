/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1706739231_39_
#define _BUR_1706739231_39_

#include <bur/plctypes.h>

/* Constants */
#ifdef _REPLACE_CONST
#else
#endif


/* Variables */
_BUR_LOCAL float OldTorqueLimitRam;
_BUR_LOCAL float OldTorqueLimitFeed;
_BUR_LOCAL float OldTorqueLimitHopper;
_BUR_LOCAL struct AxisHandler ServoRamHandler;
_BUR_LOCAL struct AxisHandler ServoHopperHandler;
_BUR_LOCAL struct AxisHandler ServoFeedHandler;





__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/ServoMotion/MotionHandler/Variables.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AxisFUBs/AxisFUBs.fun\\\" scope \\\"global\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1706739231_39_ */

