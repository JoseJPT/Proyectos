#include <16F877A.h>
#fuses XT, NOWDT
#USE DELAY(CLOCK=4M)

#define PIN_1 PIN_D0

void main() {
//And   
    while (TRUE) {
        if (input(PIN_1) == 0) {
            output_high(PIN_D1);
                                               } 
            else {
               output_low(PIN_D1);
            }
}
}
