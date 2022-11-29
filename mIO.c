#include <avr/io.h>
#include "config.h"


void init_Buttons() {
    // Define PINs connected to BUTTONS as INPUT
    setPinDir(_PB, Btn0, IN);
    setPinDir(_PB, Btn1, IN);
    setPinDir(_PB, Btn2, IN);
    setPinDir(_PB, Btn3, IN);
}


int isPressed(int portNum, int pinNum) {

    switch (portNum) {
        case _PA:
            return (PINA & (1 << pinNum)) ? 1 : 0;
            break;
        case _PB:
            return (PINB & (1 << pinNum)) ? 1 : 0;
            break;
        case _PC:
            return (PINC & (1 << pinNum)) ? 1 : 0;
            break;
        case _PD:
            return (PIND & (1 << pinNum)) ? 1 : 0;
            break;
        default:
            return 0;
    }
}

void setPortDir(int portNum, int state) {
    if (state) {
        // PORT OUTPUT
        switch (portNum) {
            case _PA:
                DDRA = 0xFF;
                break;
            case _PB:
                DDRB = 0xFF;
                break;
            case _PC:
                DDRC = 0xFF;
                break;
            case _PD:
                DDRD = 0xFF;
                break;
            default:
                ;

        }
    } else {
        // PORT INPUT
        switch (portNum) {
            case _PA:
                DDRA = 0x00;
                break;
            case _PB:
                DDRB = 0x00;
                break;
            case _PC:
                DDRC = 0x00;
                break;
            case _PD:
                DDRD = 0x00;
                break;
            default:
                ;

        }
    }
}

void setPortData(int portNum, int data) {
    switch (portNum) {
        case _PA:
            PORTA = data;
            break;
        case _PB:
            PORTB = data;
            break;
        case _PC:
            PORTC = data;
            break;
        case _PD:
            PORTD = data;
            break;
        default:
            ;

    }
}

void setPinDir(int portNum, int pinNum, int state) {
    if (state) {
        // PORT OUTPUT
        switch (portNum) {
            case _PA:
                DDRA |= (1 << pinNum);
                break;
            case _PB:
                DDRB |= (1 << pinNum);
                break;
            case _PC:
                DDRC |= (1 << pinNum);
                break;
            case _PD:
                DDRD |= (1 << pinNum);
                break;
            default:
                ;

        }
    } else {
        // PORT INPUT
        switch (portNum) {
            case _PA:
                DDRA &= ~(1 << pinNum);
                break;
            case _PB:
                DDRB &= ~(1 << pinNum);
                break;
            case _PC:
                DDRC &= ~(1 << pinNum);
                break;
            case _PD:
                DDRD &= ~(1 << pinNum);
                break;
            default:
                ;

        }
    }
}

void setPinData(int portNum, int pinNum, int data) {
    if (data) {
        switch (portNum) {
            case _PA:
                PORTA |= (1 << pinNum);
                break;
            case _PB:
                PORTB |= (1 << pinNum);
                break;
            case _PC:
                PORTC |= (1 << pinNum);
                break;
            case _PD:
                PORTD |= (1 << pinNum);
                break;
            default:
                ;

        }
    } else {
        switch (portNum) {
            case _PA:
                PORTA &= ~(1 << pinNum);
                break;
            case _PB:
                PORTB &= ~(1 << pinNum);
                break;
            case _PC:
                PORTC &= ~(1 << pinNum);
                break;
            case _PD:
                PORTD &= ~(1 << pinNum);
                break;
            default:
                ;

        }
    }
}
