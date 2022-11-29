/* 
 * File:   mIO.h
 * Author: Tasneem
 *
 * Created on November 29, 2022, 2:30 PM
 */

#ifndef MIO_H
#define	MIO_H




void init_Buttons();

int isPressed(int portNum, int pinNum);



// PORT LEVEL
void setPortDir(int portNum, int state);
void setPortData(int portNum, int data);


// PIN LEVEL
void setPinDir(int portNum,int pinNum, int state);
void setPinData(int portNum,int pinNum, int data);

#endif	/* MIO_H */

