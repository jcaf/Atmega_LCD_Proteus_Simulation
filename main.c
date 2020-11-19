/*
Test LCD Driver for Proteus compatibility
Proteus 8.10 SP3 Build 29560
Atmega32A @16MHz
LCD Freq: 250KHz

Code::Blocks 20.03

Author: Jcaf
*/
#include <avr/io.h>
#include "lcdan/lcdan.h"
#include "lcdan/lcdan_aux.h"
int main(void)
{
    lcdan_init();
    lcdan_print_string("hola");

    while(1)
    {;}

    return 0;
}
