#include <16F877A.h>
#fuses XT, NOWDT, NOPROTECT, NOLVP
#use delay(clock=4M) // Configuración de 20 MHz
#use rs232(baud=9600, xmit=PIN_C6, rcv=PIN_C7, bits=8)

// Definición de pines de control
#define IN1 PIN_A0
#define IN2 PIN_A1
#define IN3 PIN_A2
#define IN4 PIN_A3

void main() {
    char data;

    while(TRUE) {
        if(kbhit()) { // Verifica si hay un carácter recibido
            data = getc(); // Lee el carácter recibido

            // ADELANTE
            if(data == 'w') {
                output_high(IN1);  // Enciende A0
                output_low(IN2);   // Apaga A1
                output_high(IN3);  // Enciende A2
                output_low(IN4);   // Apaga A3
            }
            // ATRÁS
            else if(data == 's') {
                output_low(IN1);   // Apaga A0
                output_high(IN2);  // Enciende A1
                output_low(IN3);   // Apaga A2
                output_high(IN4);  // Enciende A3
            }
            // DERECHA
            else if(data == 'd') {
                output_low(IN1);   // Apaga A0
                output_high(IN2);  // Enciende A1
                output_high(IN3);  // Enciende A2
                output_low(IN4);   // Apaga A3
            }
            // IZQUIERDA
            else if(data == 'a') {
                output_high(IN1);  // Enciende A0
                output_low(IN2);   // Apaga A1
                output_low(IN3);   // Apaga A2
                output_high(IN4);  // Enciende A3
            }
            // Apagar todos los LEDs si se recibe otro carácter
            else {
                output_low(IN1);
                output_low(IN2);
                output_low(IN3);
                output_low(IN4);
            }
        }
    }
}
