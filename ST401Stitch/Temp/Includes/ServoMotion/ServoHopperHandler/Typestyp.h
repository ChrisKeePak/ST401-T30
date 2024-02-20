/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1706739231_34_
#define _BUR_1706739231_34_

#include <bur/plctypes.h>

/* Datatypes and datatypes of function blocks */
typedef enum ServoHopperState_enum
{	SERVOHOPPER_WAIT_FOR_HOME = 0,
	SERVOHOPPER_IDLE = 5,
	SERVOHOPPER_MOVE_VELOCITY = 10,
	SERVOHOPPER_COOLDOWN = 15,
	SERVOHOPPER_ERROR = 999,
	SERVOHOPPER_MOVE_TO_END = 20,
	SERVOHOPPER_DWELL_AT_END = 40,
	SERVOHOPPER_MOVE_TO_START = 60,
	SERVOHOPPER_DWELL_AT_START = 80
} ServoHopperState_enum;






__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/ServoMotion/ServoHopperHandler/Types.typ\\\" scope \\\"local\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1706739231_34_ */

