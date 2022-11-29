/* 
 * File:   config.h
 * Author: Tasneem
 *
 * Created on November 29, 2022, 2:28 PM
 */

#ifndef CONFIG_H
#define	CONFIG_H


#define F_CPU 16000000UL


#define ON     1
#define OFF    0

#define OUT     1
#define IN      0


#define _PA    0
#define _PB    1
#define _PC    2
#define _PD    3

#define Btn0   0 //PB0
#define Btn1   1 //PB1
#define Btn2   2 //PB2

#define Btn3   3 //PB3

#include <util/delay.h>

#include "mIO.h"
#include <avr/interrupt.h>
#endif	/* CONFIG_H */

