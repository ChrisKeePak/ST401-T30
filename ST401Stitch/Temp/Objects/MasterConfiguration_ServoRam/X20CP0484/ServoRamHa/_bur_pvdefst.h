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
