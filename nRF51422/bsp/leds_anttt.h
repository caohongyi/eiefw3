/******************************************************************************
File: leds_anttt.h                                                               

Description:
Header file for leds_anttt.c

DISCLAIMER: THIS CODE IS PROVIDED WITHOUT ANY WARRANTY OR GUARANTEES.  USERS MAY
USE THIS CODE FOR DEVELOPMENT AND EXAMPLE PURPOSES ONLY.  ENGENUICS TECHNOLOGIES
INCORPORATED IS NOT RESPONSIBLE FOR ANY ERRORS, OMISSIONS, OR DAMAGES THAT COULD
RESULT FROM USING THIS FIRMWARE IN WHOLE OR IN PART.

******************************************************************************/

#ifndef __LEDS_H
#define __LEDS_H

#include "configuration.h"

/******************************************************************************
Type Definitions
******************************************************************************/
typedef enum{RED,YLW,GRN,BLU}LedNumberType;
/******************************************************************************
* Constants
******************************************************************************/


/******************************************************************************
* Function Declarations
******************************************************************************/
void LedOn(LedNumberType _led);
void LedOff(LedNumberType _led);
//void delay(void);
/* Public Functions */

/* Protected Functions */

/* Private Functions */


/******************************************************************************
* State Machine Function Prototypes
******************************************************************************/


#endif /* __LEDS_H */
