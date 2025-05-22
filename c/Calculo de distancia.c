#include<stdio.h>
#include<conio.h>
#include <math.h>

int main(){

float distancia = 0,velocidad = 0,t = 0,h = 0,m = 0;


    printf("Ingrese la distancia a la que se dirige: \n");
    scanf("%f",&distancia);

    printf("Ingrese la velocidad que recorre: \n");
    scanf("%f",&velocidad);

    t = distancia / velocidad;
    h = (int) t;
    m = (int) ((t-h)*60) ;
    
    printf("El tiempo estimado es: %.2f horas y %.2f minutos",h,m);

    return(0);

}


