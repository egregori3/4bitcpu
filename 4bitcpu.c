#include <stdio.h>

// upper 4 bits 
// The ALU is combinitorial logici
// One side of the ALU is connected to the lower bus, the other is A
// The ALU outputs to A
// The ALU output is latched into A on falling edge
// AGETSALU = !AGETSX
// 1x = x -> A      // AGETSX=1
// 2x = x + A -> A  // AGETSX=0, add=1
// 3x = x - A -> A  // AGETSX=0, add=0
uint8 rom[] = {0x};

void main(char *argv, int argc)
{
    unit16 address;
    uint8 bus, rega, regb;
    printf("Hello World");
    address = 0;
    while(i)
    {
        // rising edge
        bus = rom[address];  // ROM puts data on bus
        
    }
}

