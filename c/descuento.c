#include <stdio.h>
#include <string.h>
#define descuento 0.2

int main() {
    float monto = 0, preciof = 0;
    char cupon1[5]; 

    printf("Cual es su monto? ");
    scanf("%f", &monto);

    printf("Ingrese el cupon: ");
    scanf("%5s", cupon1);  
 
    if (strcmp(cupon1, "ML20") == 0) {
        if (monto >= 200) {
            preciof = monto - (monto * descuento);  
            printf("Su precio final es: %.2f\n", preciof);
        } else {
            printf("El monto no es suficiente para aplicar el descuento\n");
        }
    } else {
        printf("Cupon no valido\n");
    }

    return 0;
}


