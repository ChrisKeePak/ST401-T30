/* Automation Studio generated header file */
/* Do not edit ! */
/* MappCall  */

#ifndef _MAPPCALL_
#define _MAPPCALL_
#ifdef __cplusplus
extern "C" 
{
#endif

#include <bur/plctypes.h>

#ifndef _BUR_PUBLIC
#define _BUR_PUBLIC
#endif
#ifdef _SG3
		#include "Types.h"
#endif
#ifdef _SG4
		#include "Types.h"
#endif
#ifdef _SGC
		#include "Types.h"
#endif


/* Constants */
#ifdef _REPLACE_CONST
 #define HOME_SEARCH_SPEED 20.0f
 #define SENSOR_OFFSET 2.0f
#else
 _GLOBAL_CONST float HOME_SEARCH_SPEED;
 _GLOBAL_CONST float SENSOR_OFFSET;
#endif




/* Datatypes and datatypes of function blocks */
typedef struct AxisBasic
{
	/* VAR_INPUT (analog) */
	unsigned long pMpLink;
	unsigned long pAxis;
	unsigned long pEndlessPosition;
	struct Axis_Interface_typ* AxisInterface;
	double OdometerValue;
	float Override;
	/* VAR (analog) */
	struct MpAxisBasic AxisBasic;
	struct MpAxisBasicConfig AxisConfig;
	double AbsDistance;
	signed char zzInternalMemory[41];
	struct MC_SetOverride SetOverride;
	/* VAR_INPUT (digital) */
	plcbit ErrorReset;
} AxisBasic_typ;



/* Prototyping of functions and function blocks */
_BUR_PUBLIC void AxisBasic(struct AxisBasic* inst);


#ifdef __cplusplus
};
#endif
#endif /* _MAPPCALL_ */

