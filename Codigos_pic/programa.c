#include <16F877A.h>
#fuses XT, NOWDT
#USE DELAY(CLOCK=4M)

void main() {
    set_tris_d(0x00);  // Configurar todos los pines del puerto D como salida
    output_high(PIN_D0);  // Encender el LED en el pin D0

    while(TRUE) {
        // Bucle infinito para mantener el LED encendido
    }
}
               
      
   
     
           

    
    
    

