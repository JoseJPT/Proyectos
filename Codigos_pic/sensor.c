#include <16f877a.h>
#fuses xt,nowdt
#USE DELAY (CLOCK = 4M)

void main()

{
while(TRUE){
if(input(pin_D0)){
    output_low(pin_D2);

     }
     else{
output_high(pin_D2);

}
}
}
