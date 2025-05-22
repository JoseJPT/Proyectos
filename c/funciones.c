#include <stdio.h>
#include <math.h>
#include <string.h>

float n1 = 0, n2 = 0;
float res = 0;
char op= ' ', operacion[20]= " ";

void captura(){

    //Ingresar valor 1
    printf("Ingresa el valor 1:\n ");
    scanf("%f",&n1);

    //Ingresa el valor 2
    printf("Ingresa el valor 2:\n ");
    scanf("%f",&n2);

}

void menu(){

    printf("¿Que operacion desea hacer?\n ");
    scanf("%s",&op);
    printf("[+] Suma\n");
    printf("[-] Resta\n");
    printf("[*] Multiplicacion\n");
    printf("[/] Division\n");
    scanf("%s",&op);

}

float suma (float x, float y){
    float r = 0;
    r = x + y;
    return r;
}

float resta (float x, float y){
    float r = 0;
    return x-y;
}

float multiplicacion (float x, float y){

    float r = 0;
    return x*y;
}

float divide(){
res = n1/n2;
}

int main(){
    captura();
    menu();
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
        strcpy(operacion, "division");
        divide();

    }
    default: 
    return 0;
}
}