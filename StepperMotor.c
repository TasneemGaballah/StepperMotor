#include <avr/io.h>
#include  "config.h"
#include  "StepperMotor.h"

void init_motor()
{
    setPinDir(_PC, PINC0, IN);
    setPinDir(_PC, PINC1, IN);
    setPinDir(_PC, PINC2, IN);
}
void Start_motor()
{
    PORTC = 0x00;
    _delay_ms (2000);
    PORTC = 0x01;
    _delay_ms (2000);
    PORTC = 0x02;
    _delay_ms (2000);
    PORTC = 0x04;
    _delay_ms (2000);
    PORTC = 0x08;
    _delay_ms (2000);
}
void Stop_motor()
{
    PORTC = 0x00;
}
void Motor_speed(int chNum)
{
    //increase speed
    if (chNum == 1)
    {
        _delay_ms (800);
    }
    //decrease speed 
    else if (chNum == 0)
    {
        _delay_ms (5000);
    }
}
void Motor_direction(int directionNo)
{
    //clockwise
    if (directionNo == 1)
    {
        PORTC = 0x00;
        _delay_ms (2000);
        PORTC = 0x01;
        _delay_ms (2000);
        PORTC = 0x02;
        _delay_ms (2000);
        PORTC = 0x04;
        _delay_ms (2000);
        PORTC = 0x08;
        _delay_ms (2000);
    }
    //Anticlockwise
    else if (directionNo == 2) 
    {
        PORTC = 0x08;
        _delay_ms (2000);
        PORTC = 0x04;
        _delay_ms (2000);
        PORTC = 0x02;
        _delay_ms (2000);
        PORTC = 0x01;
        _delay_ms (2000);
        PORTC = 0x00;
        _delay_ms (2000);
    }
}
