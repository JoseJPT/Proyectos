#include <16F877A.h>
#fuses XT, NOWDT, NOPROTECT, NOLVP
#use delay(clock=4M)
#use rs232(baud=9600, xmit=PIN_C6, rcv=PIN_C7, bits=8)

// Pines de control multiplexados
#define MOTOR_PIN1 PIN_A0
#define MOTOR_PIN2 PIN_A1

void main() {
    char data;

    while(TRUE) {
        if(kbhit()) {
            data = getc();

            // Control del primer par de motores (A0 y A1)
            if(data == 'w') { // Adelante
                output_high(MOTOR_PIN1);
                output_low(MOTOR_PIN2);
            }
            else if(data == 's') { // Atrás
                output_low(MOTOR_PIN1);
                output_high(MOTOR_PIN2);
            }
            else if(data == 'd') { // Derecha
                output_high(MOTOR_PIN1);
                output_high(MOTOR_PIN2);
            }
            else if(data == 'a') { // Izquierda
                output_low(MOTOR_PIN1);
                output_low(MOTOR_PIN2);
            }
            else {
                // Cambia al segundo par de motores (los mismos pines)
                if(data == 'x') { // Adelante
                    output_high(MOTOR_PIN1);
                    output_low(MOTOR_PIN2);
                }
                else if(data == 'z') { // Atrás
                    output_low(MOTOR_PIN1);
                    output_high(MOTOR_PIN2);
                }
                else if(data == 'c') { // Derecha
                    output_high(MOTOR_PIN1);
                    output_high(MOTOR_PIN2);
                }
                else if(data == 'v') { // Izquierda
                    output_low(MOTOR_PIN1);
                    output_low(MOTOR_PIN2);
                }
            }
        }
    }
}


    
    
    

