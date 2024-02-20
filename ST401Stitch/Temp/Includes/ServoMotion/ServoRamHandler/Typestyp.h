/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1706739231_30_
#define _BUR_1706739231_30_

#include <bur/plctypes.h>

/* Datatypes and datatypes of function blocks */
typedef enum ServoRamState_enum
{	SERVORAM_WAIT_FOR_HOME = 0,
	SERVORAM_IDLE = 10,
	SERVORAM_WAITING_ON_BOX = 15,
	SERVORAM_MOVE_TO_END = 20,
	SERVORAM_DWELL_AT_END = 40,
	SERVORAM_MOVE_TO_START = 60,
	SERVORAM_DWELL_AT_START = 80,
	SERVORAM_ERROR = 999
} ServoRamState_enum;






__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/ServoMotion/ServoRamHandler/Types.typ\\\" scope \\\"local\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1706739231_30_ */

