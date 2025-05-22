#include <stdio.h>
#include <math.h>
#define PI 3.1416

int main() {
    int op = 0;
    float base = 0, radio = 0, lado = 0, altura = 0, Diametro = 0, area = 0, peri = 0, lado2 = 0, lado3 =0;

    printf("[1] Triangulo\n[2] Circulo\n[3] Rectangulo\n[4] Cuadrado\n");
    printf("¿Que figura es la que prefiere?\n");
    scanf("%i", &op);

    do {
        switch (op) {
        case 1: // Triangulo
            printf("Ingrese el lado 1: ");
            scanf("%f", &lado);
            printf("Ingrese el lado 2: ");
            scanf("%f", &lado2);
            printf("Ingrese el lado 3: ");
            scanf("%f", &lado3);

            peri = lado + lado2 + lado3; 
            printf("El perimetro del triangulo es %.2f\n", peri);

            printf("Ingrese la base: ");
            scanf("%f", &base);
            printf("Ingrese la altura: ");
            scanf("%f", &altura);

            area = (base * altura) / 2; 
            printf("El area del triangulo es %.2f\n", area);
            break;

        case 2: // Circulo
            printf("Ingrese el diametro del circulo: ");
            scanf("%f", &Diametro);
            peri = Diametro * PI; 
            printf("El perimetro del circulo es %.2f\n", peri);

            printf("Ingrese el radio: ");
            scanf("%f", &radio);
            area = PI * pow(radio, 2); 
            printf("El area del circulo es %.2f\n", area);
            break;

        case 3: // Rectangulo
            printf("Ingrese la base: ");
            scanf("%f", &base);
            printf("Ingrese la altura: ");
            scanf("%f", &altura);

            peri = (2 * base) + (2 * altura); 
            printf("El perimetro del rectangulo es %.2f\n", peri);

            area = base * altura; 
            printf("El area del rectangulo es %.2f\n", area);
            break;

        case 4: // Cuadrado
            printf("Ingrese el lado: ");
            scanf("%f", &lado);

            peri = 4 * lado; 
            printf("El perimetro del cuadrado es %.2f\n", peri);

            area = lado * lado; 
            printf("El area del cuadrado es %.2f\n", area);
            break;

        default:
            printf("Opcion no valida. Por favor, elija una opcion entre 1 y 4.\n");
            break;
        }
    } while (op <= 4); 
    return 0;
}


