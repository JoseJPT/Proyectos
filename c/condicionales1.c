#include <stdio.h>
#include <conio.h>
int main() {
    int edad=0;


    printf("¿Cual es tu edad?: ");
    scanf("%d",&edad);

    if (edad > 18) {
        printf("Welcome to the Black Cat! \n");
    } 
    else{
        printf("Lo siento, no puedes entrar.\n");
    } 


    return 0;
}
