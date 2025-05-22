#include <18F2550.h>
#device ADC=10
#use delay(crystal=20MHz)
#include <stdio.h>
#include <stdlib.h>

#use rs232(baud=9600, xmit=PIN_C6, rcv=PIN_C7)

void main(){
char data;
   while(TRUE){
   
      if(kbhit()) {
      
            data = getc();
   
            if(data == '1') {
               output_high(PIN_A0);
                            }
           
            else if(data == '0') {
               output_low(PIN_A0);
       
      }
   }
}
}
               
      
   
     
           

    
    
    

