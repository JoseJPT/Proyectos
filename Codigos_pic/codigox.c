#include <16F877A.h>
#fuses XT, NOWDT
#USE DELAY(CLOCK=4M) 
#use rs232(baud=9600, xmit=PIN_C6, rcv=PIN_C7)

#define IN1 PIN_A0
#define IN2 PIN_A1
#define IN3 PIN_A2
#define IN4 PIN_A3

#define IN5 PIN_B0
#define IN6 PIN_B1
#define IN7 PIN_B2
#define IN8 PIN_B3

void stop_motors() {
   output_low(IN1);
   output_low(IN2);
   output_low(IN3);
   output_low(IN4);
   output_low(IN5);
   output_low(IN6);
   output_low(IN7);
   output_low(IN8);
}

void main() {
   char data;
   
   while(TRUE) {
      if(kbhit()) {
         data = getc();
         
         switch(data) {
            case 'w':
               output_high(IN1);
               output_high(IN4);
               output_low(IN2);
               output_low(IN3);
               
               output_high(IN5);
               output_high(IN8);
               output_low(IN6);
               output_low(IN7);
               break;
               
            case 's':
               output_high(IN2);
               output_low(IN4);
               output_high(IN3);
               output_low(IN1);
               
               output_high(IN6);
               output_low(IN8);
               output_high(IN7);
               output_low(IN5);
               break;
               
            case 'a':
               output_low(IN7);
               output_low(IN3);
               output_high(IN8);
               output_high(IN4);
               
               output_low(IN1);
               output_low(IN5);
               output_high(IN2);
               output_high(IN6);
               break;
               
            case 'd':
               output_high(IN7);
               output_high(IN3);
               output_low(IN8);
               output_low(IN4);
               
               output_high(IN1);
               output_high(IN5);
               output_low(IN2);
               output_low(IN6);
               break;
               
            default:
               stop_motors();
               break;
         }
      } else {
         stop_motors();
      }
   }
}


               
      
   
     
           

    
    
    

