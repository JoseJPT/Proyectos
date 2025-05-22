#include <stdio.h>
#include <math.h>  

int main() {
    float a, b, c, s, area, perimetro;

    printf("Ingrese la longitud del lado a: ");
    scanf("%f", &a);

    printf("Ingrese la longitud del lado b: ");
    scanf("%f", &b);

    printf("Ingrese la longitud del lado c: ");
    scanf("%f", &c);

    // Calcular el perímetro
    perimetro = a + b + c;
    
    // Calcular el semiperimetro
    s = perimetro / 2;
    
    // Calcular el area usando la fórmula de Heron
    area = sqrt(s * (s - a) * (s - b) * (s - c));

    // Mostrar los resultados
    printf("El perimetro del triangulo es: %.2f\n", perimetro);

    printf("El area del triangulo es: %.2f\n", area);

    return 0;
}
