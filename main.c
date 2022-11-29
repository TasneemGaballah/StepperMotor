/* 
 * File:   main.c
 * Author: Tasneem
 *
 * Created on November 29, 2022, 11:15 AM
 */


#include <avr/io.h>
#include "config.h"
#include "StepperMotor.h"
#include "mIO.h"


int main(void) {
    /* Replace with your application code */
    // Initialization.....
    init_Buttons();
    init_motor();

    while (1) {
        if(isPressed(_PB,Btn0))
        {
            Start_motor();
        }
        else if (isPressed(_PD,Btn1))
        {
            
            Motor_direction(1);
            Motor_speed(1);
        }
        else if (isPressed(_PD,Btn2))
        {
            Motor_direction(2);
            Motor_speed(1);
 
        }
        else if (isPressed(_PD,Btn3))
        {
            Motor_direction(2);
            Motor_speed(0);
        }
        else
        {
            Stop_motor();
        }
        
     
    }

    return 0;
}

