#include <stdio.h>
#include <conio.h>
int main() {
    int anio_actual, mes_actual, dia_actual,anio_nacimiento, mes_nacimiento, dia_nacimiento,edad;
    printf("Indica el anio actual: ");
    scanf("%d", &anio_actual);

    printf("Indica el mes actual: ");
    scanf("%d", &mes_actual);

    printf("Indica el dia actual: ");
    scanf("%d", &dia_actual);

    printf("Indica tu anio de nacimiento: ");
    scanf("%d", &anio_nacimiento);

    printf("Indica tu mes de nacimiento: ");
    scanf("%d", &mes_nacimiento);

    printf("Indica tu dia de nacimiento: ");
    scanf("%d", &dia_nacimiento);

    edad = ((anio_actual-anio_nacimiento));
   

    if (anio_actual > anio_nacimiento) {
        if (mes_actual == mes_nacimiento)
        {
            if (dia_actual > dia_nacimiento)
            {
                edad= edad - 1;
            }
            
        }
        printf("lo siento no puedes pasar! \n");
    } 
    else {
        printf("Welcome to the Black Cat! \n");
    }

    return 0;
}

