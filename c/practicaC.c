#include <stdio.h>
#include<string.h>

int main(){
    float n1 = 0, n2 = 0, res = 0;
    char op;

    do
    {
        printf("Valor 1:\n");
        scanf("%f",&n1);

        printf("Valor 2:\n");
        scanf("%f",&n2);

        res = n1 + n2;

        printf("El resultado es :",res);
        printf("Quieres hacer otra suma\n");
        getchar();
        scanf("%c",&op);

    } while (op == 's');
    

}