#include <16F877A.h>
#fuses XT, NOWDT
#use delay(clock=4M)

#define LED PIN_A1  // Define el pin A1 como LED

void main() {
    while(TRUE) {
        output_high(LED);  // Enciende el LED
        delay_ms(1000);    // Espera 1 segundo
        output_low(LED);   // Apaga el LED
        delay_ms(1000);    // Espera 1 segundo
    }
}

