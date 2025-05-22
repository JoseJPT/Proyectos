//manejo de entradas y salidas
#include<stdio.h>
//esta libreria no se utiliza tanto actualmente
#include<conio.h>

int main()
{
   //Entradas
   float frente=0;
   float fondo=0, area=0;
   //proceso
   area = fondo * frente;
   int precio1 =0;
   
   printf("Ingresa cuantos metros tiene de frente el terreno\n ");
   scanf("%f",&frente);
   
   printf("Ingresa cuantos metros tiene de fondo el terreno\n ");
   scanf("%f",&fondo);

   printf("El area del terreno es", area);

   printf("Cual es el costo del metro cuadrado de esta zona\n");
   scanf("%f",&precio1);

   

   return 0;

}
