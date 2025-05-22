#include <stdio.h>


int saldo = 0, donacion = 15;

void realizarDeposito() {
    int deposito;
    printf("Que cantidad desea depositar?\n");
    scanf("%i", &deposito);
    saldo += deposito; 
    printf("Ha depositado: %i. Su saldo actual es: %i\n", deposito, saldo);
}

void realizarRetiro() {
    int retiro;
    printf("Que cantidad desea retirar?\n");
    scanf("%i", &retiro);
    if (retiro <= saldo) {
        saldo -= retiro; 
        printf("Retiro exitoso de: %i. Su saldo actual es: %i\n", retiro, saldo);
    } else {
        printf("Saldo insuficiente para el retiro. Su saldo actual es: %i\n", saldo);
    }
}


void consultarSaldo() {
    printf("Su saldo actual es: %i\n", saldo);
}

void realizarDonacion() {
    int opD;
    printf("Desea realizar una donacion de %i?\n[1] Si\n[2] No\n", donacion);
    scanf("%i", &opD);
    if (opD == 1) {
        if (saldo >= donacion) {
            saldo -= donacion;
            printf("Donacion exitosa. Su saldo actual es: %i\n", saldo);
        } else {
            printf("Saldo insuficiente para realizar la donacion. Su saldo actual es: %i\n", saldo);
        }
    } else {
        printf("Donacion cancelada.\n");
    }
}

int main() {
    int op = 0;

    
    do {
        printf("\nQue operacion quieres realizar?\n");
        printf("[1] Deposito\n[2] Retiro\n[3] Consulta de saldo\n[4] Donacion\n");
        scanf("%i", &op);

        switch (op) {
            case 1: // Depósito
                realizarDeposito();
                break;

            case 2: // Retiro
                realizarRetiro();
                break;

            case 3: // Consulta de saldo
                consultarSaldo();
                break;

            case 4: // Donación
                realizarDonacion();
                break;

            default: // Opción inválida
                printf("Operacion invalida. Intente de nuevo.\n");
                break;
        }

    } while (op <= 4);
    return 0;
}

