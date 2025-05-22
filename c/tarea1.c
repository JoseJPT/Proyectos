#include<stdio.h>
#include<conio.h>
int main(){
    float PI = 3.1416;
    float altura = 0;
    float radio = 0;
    float volumen = 0;
    float costoProduccion = 0;
    float ganancia = 0;
    float precioVenta = 0;

    // Pedir datos al usuario
    printf("Ingrese el radio: ");
    scanf("%f", &radio);  

    printf("Ingrese la altura: ");
    scanf("%f", &altura);  

    // Calcular el volumen del cilindro

    volumen = PI * radio * radio * altura;

    printf("El volumen del recipiente es: %.3f litros \n", volumen);
    printf("Ingrese el costo de produccion: ");
    scanf("%f", &costoProduccion);

    // Calcular la ganancia del 300%
    ganancia = costoProduccion * 3;

    // Calcular el precio de venta
    precioVenta = costoProduccion + ganancia;

    printf("La ganancia con un 300%% es: %.2f\n", ganancia);
    printf("El precio de venta es: %.2f\n", precioVenta);


    return 0;
}
