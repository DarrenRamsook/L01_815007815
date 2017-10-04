/*Lab 1 - ID number 815007815*/
#include <p18f452.h>

#pragma config OSC = HS
#pragma config WDT = OFF
#pragma config LVP = OFF

void main(void)
{
    int a;
    TRISB = 0x00;
    for(a = 1; a< 15 ; a++){
        PORTB = a; 
        /*This is a change*/
    }
}