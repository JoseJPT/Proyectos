#include <stdio.h>
#include <stdlib.h>

int calificaciones [9] = {0,0,0,0,0,0,0,0,0};
int beca = 9;


void imprime(int tam);
int main(){

printf("Sistema de captura de calificaciones");
for ( int i = 0; i < 9; i++)
{
    printf("\n Captura la calificacion numero %d :",i+1);
    scanf("%d",&calificaciones[i]);
}

imprime (9);
return 0;
   
}

void imprime (int tam){
printf("Impresion de resultados");
for (int i = 0; i< tam ; i++)
{
    
    printf ("\nCalificacion %d es %d\n", i+1 ,calificaciones[i]);
    
}
}