#include <16F877A.h>
#fuses XT, NOWDT
#USE DELAY(CLOCK=4M)
// Definición de pines
#define PIN_1 PIN_B0   // Sensor izquierdo frontal
#define PIN_2 PIN_B1   // Sensor izquierdo trasero
#define PIN_3 PIN_B2   // Sensor derecho trasero
#define PIN_4 PIN_B3   // Sensor derecho frontal
#define DELANTE PIN_D3
#define ATRAS PIN_D2
#define DERECHA PIN_D1
#define IZQUIERDA PIN_D0
// Variable global para controlar el algoritmo activo
int algoritmo_activo = 0;  // 0 = Mano Derecha, 1 = Mano Izquierda
// Función para detener todos los motores
void detener_motores() {
    output_low(DELANTE);
    output_low(ATRAS);
    output_low(DERECHA);
    output_low(IZQUIERDA);
    delay_ms(100);
}
// Función para cambiar algoritmo basado en condiciones específicas
void verificar_cambio_algoritmo() {
    // Condición para cambiar a algoritmo de mano derecha
    if ((input(PIN_1) == 1 && input(PIN_4) == 1 && input(PIN_3) == 0)) {
        // Cambiar de algoritmo
        algoritmo_activo = 0;
        
        }
    // Condición para cambiar a algoritmo de mano izquierda
    else if ((input(PIN_1) == 1 && input(PIN_4) == 0 && input(PIN_3) == 1)) {
        // Cambiar de algoritmo
        algoritmo_activo = 1;
        
            }
}
// Función para algoritmo de mano derecha
void algoritmo_mano_derecha() {
    // Avanzar hacia delante
    if (input(PIN_1) == 1) { 
         output_high(IZQUIERDA);
               output_high(ATRAS);
            Delay_ms(140);     
        detener_motores();
    }
      // Girar a la izquierda
    if (input(PIN_1) == 0) {
        output_high(DERECHA);
        output_high(ATRAS);
        delay_ms(230);
        
        output_low(DERECHA);
        output_high(IZQUIERDA);
        output_high(ATRAS);
        delay_ms(140);  
        
        detener_motores();
    }
    // Girar a la izquierda
    if (input(PIN_1) == 0 && input(PIN_3) == 0) {
        output_high(DERECHA);
        output_high(ATRAS);
        delay_ms(230);
        
        output_low(DERECHA);
        output_high(IZQUIERDA);
        output_high(ATRAS);
        delay_ms(140);  
        
        detener_motores();
    }
    
    // Sin obstáculo a la derecha, girar a la derecha
    if (input(PIN_3) == 1) {
        output_high(IZQUIERDA);
        output_high(DELANTE);
        delay_ms(180);
        
        output_low(DELANTE);
        output_high(IZQUIERDA);
        output_high(ATRAS);
        delay_ms(140);
        
        detener_motores();
    }
}
// Función para algoritmo de mano izquierda
void algoritmo_mano_izquierda() {
    // Avanzar hacia delante
    if (input(PIN_4) == 0) { 
        output_high(IZQUIERDA);
        output_high(ATRAS);
        output_low(DERECHA);
        output_low(DELANTE);
        delay_ms(140);
       
        detener_motores();
    }
       // Girar a la derecha
    if (input(PIN_1) == 0) {
        output_high(IZQUIERDA);
        output_high(DELANTE);
        delay_ms(150);
        
        output_low(DELANTE);
        output_high(IZQUIERDA);
        output_high(ATRAS);
        delay_ms(140);    
        
        detener_motores();
    }
    // Girar a la derecha
    if (input(PIN_1) == 0 && input(PIN_4) == 0) {
        output_high(IZQUIERDA);
        output_high(DELANTE);
        delay_ms(150);
        
        output_low(DELANTE);
        output_high(IZQUIERDA);
        output_high(ATRAS);
        delay_ms(140);    
        
        detener_motores();
    }
    
    // Sin obstáculo a la izquierda, girar a la izquierda
    if (input(PIN_3) == 1 && input(PIN_4) == 1 ) {
        output_high(DERECHA);
        output_high(ATRAS);
        delay_ms(180);
        
        output_low(DERECHA);
        output_high(IZQUIERDA);
        output_high(ATRAS);
        delay_ms(140); 
        
        detener_motores();
    }
}
// Función principal
void main() {
    while (TRUE) {
        // Verificar si es necesario cambiar de algoritmo
        verificar_cambio_algoritmo();
        
        // Ejecutar solo el algoritmo activo
        if (algoritmo_activo == 0) {
            algoritmo_mano_derecha();
        } else {
            algoritmo_mano_izquierda();
        }
    }
}
