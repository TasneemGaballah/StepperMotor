/* 
 * File:   StepperMotor.h
 * Author: Tasneem
 *
 * Created on November 29, 2022, 12:25 PM
 */

#ifndef STEPPERMOTOR_H
#define	STEPPERMOTOR_H

    
void init_motor();
void Start_motor();
void Stop_motor();
void Motor_speed(int chNum);
void Motor_direction(int directionNo);


#endif	/* STEPPERMOTOR_H */

