#include <stdio.h>
#include <math.h>

typedef struct {
    int num, den;
} fraccion;

fraccion suma(fraccion n1, fraccion n2);
fraccion resta(fraccion n1, fraccion n2);
fraccion multiplica(fraccion n1, fraccion n2);
fraccion division(fraccion n1, fraccion n2);
fraccion simplificar(fraccion n1);
int MCD(int n1, int n2);

int main() {
    fraccion f1, f2, res;
    int op = 0;

    do {
        printf("\nCalculadora de fracciones\n");
        printf("1. Sumar fracciones\n");
        printf("2. Restar fracciones\n");
        printf("3. Multiplicar fracciones\n");
        printf("4. Dividir fracciones\n");
        printf("5. Salir\n");
        scanf("%d", &op);

        if (op >= 1 && op <= 4) {
            printf("\nCaptura el numerador y denominador de la fraccion 1\n");
            scanf("%d %d", &f1.num, &f1.den);

            printf("\nCaptura el numerador y denominador de la fraccion 2\n");
            scanf("%d %d", &f2.num, &f2.den);

            if (f1.den == 0 || f2.den == 0) {
                printf("El denominador no puede ser cero.\n");
                continue;
            }
        }

        switch (op) {
            case 1:
                res = suma(f1, f2);
                break;
            case 2:
                res = resta(f1, f2);
                break;
            case 3:
                res = multiplica(f1, f2);
                break;
            case 4:
                res = division(f1, f2);
                break;
            default:
                if (op != 5) {
                    printf("Opcion no valida\n");
                }
                break;
        }

        if (op >= 1 && op <= 4) {
            res = simplificar(res);
            printf("El resultado es %d/%d\n", res.num, res.den);
        }

    } while (op != 5);

    return 0;
}

fraccion suma(fraccion n1, fraccion n2) {
    fraccion resultado;
    resultado.num = n1.num * n2.den + n2.num * n1.den;
    resultado.den = n1.den * n2.den;
    return resultado;
}

fraccion resta(fraccion n1, fraccion n2) {
    fraccion resultado;
    resultado.num = n1.num * n2.den - n2.num * n1.den;
    resultado.den = n1.den * n2.den;
    return resultado;
}

fraccion multiplica(fraccion n1, fraccion n2) {
    fraccion resultado;
    resultado.num = n1.num * n2.num;
    resultado.den = n1.den * n2.den;
    return resultado;
}

fraccion division(fraccion n1, fraccion n2) {
    fraccion resultado;
    resultado.num = n1.num * n2.den;
    resultado.den = n1.den * n2.num;
    if (resultado.den == 0) {
        printf("Error: División por cero\n");
        resultado.num = 0;
        resultado.den = 1;
    }
    return resultado;
}

fraccion simplificar(fraccion n1) {
    int mcd = MCD(abs(n1.num), abs(n1.den));
    n1.num /= mcd;
    n1.den /= mcd;

    if (n1.den < 0) {
        n1.num = -n1.num;
        n1.den = -n1.den;
    }

    return n1;
}

int MCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}



