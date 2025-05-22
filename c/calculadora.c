#include <stdio.h>
#include <math.h>

int main(){
    float n1 = 0, n2 = 0, res = 0;
    char op = " ";

        /*
    char operacion[15];

    case '+':
    res = n1 + n2;
    operacion ="Suma";

    printf("El resultado de la %s es: %.2f",operacion,res);
    
    */

    //Ingresar valor 1
    printf("Ingresa el valor 1:\n ");
    scanf("%f",&n1);

    //Ingresa el valor 2
    printf("Ingresa el valor 2:\n ");
    scanf("%f",&n2);

    printf("¿Que operacion desea hacer?\n ");
    scanf("%s",&op);
    printf("[+] Suma\n");
    printf("[-] Resta\n");
    printf("[*] Multiplicacion\n");
    printf("[/] Division\n");
    scanf("%s",&op);
    switch (op)
    {
    case '+':
        res = n1 + n2;
        printf("El resultado de la suma es:%.2f\n",res);
        break;

    case '-':
    res = n1 - n2;
    printf("El resultado de la resta es:%.2f\n",res);
    break;

    case '*':
    res = n1 * n2;
    printf("El resultado de la multiplicacion es:%.2f\n",res);
    break;

    case '/':
    res = n1 / n2;
    printf("El resultado de la division es:%.2f\n",res);
    break;
    
    if (n2 == 0){
    printf("No se puede dividir:\n");
    res = -1;
    }
    else{
        res = n1/n2;
    }
    default: 
    printf("La opcion no existe en el menu\n");
        break;
    }

   
return 0;
}
