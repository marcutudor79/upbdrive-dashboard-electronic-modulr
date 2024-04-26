/******************************************************************************/
/* UPBDRIVE ECU-Emulator Firmware                                             */
/* All rights reserverd 2023                                                  */
/******************************************************************************/

#ifndef RANDOM_SIGNAL_H
#define RANDOM_SIGNAL_H

#include "../../common/inc/common.h"
#include <math.h>


//function to generate random numbers
extern int rand(void);

////////////////////////////////////////////////////////////////////////////////
////                       GLOBAL VARIABLES                                 ////
////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////
////                       GLOBAL MACROS                                    ////
////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////
////                       GLOBAL CONSTANTS                                 ////
////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////
////                       FUNCTION PROTOTYPES                              ////
////////////////////////////////////////////////////////////////////////////////


//generate a random % 50 signal
uint8_t random_signal();


#endif /* RANDOM_SIGNAL_H */