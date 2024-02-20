/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1706739231_4_
#define _BUR_1706739231_4_

#include <bur/plctypes.h>

/* Datatypes and datatypes of function blocks */
typedef enum BlissSideCheckStates_enum
{	SIDE_CHECK_IDLE,
	SIDE_CHECK_FIRST_CYCLE,
	SIDE_CHECK_LOOK_FOR_EYE,
	SIDE_CHECK_EYE_FOUND,
	SIDE_CHECK_EYE_MISSED
} BlissSideCheckStates_enum;

typedef enum BlissBodyCheckStates_enum
{	BODY_CHECK_IDLE,
	BODY_CHECK_FIRST_CYCLE,
	BODY_CHECK_LOOK_FOR_EYE,
	BODY_CHECK_EYE_FOUND,
	BODY_CHECK_EYE_MISSED
} BlissBodyCheckStates_enum;

typedef enum State_enum
{	PICKANDPLACE_ERROR = 99,
	PICKANDPLACE_RETURN = 4,
	PICKANDPLACE_BLOWOFF = 3,
	PICKANDPLACE_DWELL = 2,
	PICKANDPLACE_MOVE_FORWARD = 1,
	PICKANDPLACE_START = 0
} State_enum;






__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/ModeControl/ModeControl_ST/Types.typ\\\" scope \\\"local\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1706739231_4_ */

