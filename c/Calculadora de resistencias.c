#include <stdio.h>


int main(){
    int Rojo = 100, Negro = 1, Cafe = 10, Dorado = 0.1, Morado =100000, Naranja = 1000, Azul = 10, Violeta = 1000, Amarillo = 100000, Plata = 100, Blanco = 10000, Gris = 10, Verde =10 ;
    int bandas = 0;
    char ColorBanda[15];
    printf ("Ingrese el numero de bandas de su resistencia a calcular:\n");
    scanf("%i", &bandas);

   switch (bandas)
   {
   case '4':
    printf("Ingrese el color de la primer banda\n");
    scanf("%s", bandas);
    break;
   
   default:
    break;
   }

return 0;
}