/******************************************************************************/
/* Files to Include                                                           */
/******************************************************************************/

/* Device header file */
#if defined(__XC16__)
    #include <xc.h>
#elif defined(__C30__)
    #if defined(__dsPIC30F__)
        #include <p30Fxxxx.h>
    #endif
#endif

#include <stdint.h>          /* For uint32_t definition                       */
#include <stdbool.h>         /* For true/false definition                     */

#include "user.h"            /* variables/params used by user.c               */

/******************************************************************************/
/* User Functions                                                             */
/******************************************************************************/

/* <Initialize variables in user.h and insert code for user algorithms.> */

/* TODO Initialize User Ports/Peripherals/Project here */

void InitApp(void)
{
    /* Setup analog functionality and port direction */
    TRISBbits.TRISB5 = 0;   //RB5 output
    
    /* Initialize peripherals */
    //Timer 1 configuration
    T1CONbits.TON   = 0;    //timer 1 off 
    T1CONbits.TCS   = 0;    //internal clock FF
    T1CONbits.TCKPS = 0b10; //prescaler 1:64
    PR1 = 3000;             //prescaler for about half a second
}

