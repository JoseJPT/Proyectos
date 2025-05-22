#include <stdio.h>
#include<string.h>

int main (){
int tabla = 0, res = 0;
int con=1;
printf("Que tabla quieres imprimir\n");
scanf("%i",&tabla);

for (int i =1; i <= 10; i++)
{
    
    res = i*tabla;
    printf("%i x %i = %i\n", tabla, i, res);
}

printf("Implementando ciclo While\n");

while (con<=10)
{
    res = con*tabla;
    printf("%i x %i = %i\n", tabla, con, res);
    con ++;
}

con = 1;

printf("Implementando ciclo DO While\n");

do
{
    res = con*tabla;
    printf("%i x %i = %i\n", tabla, con, res);
    con ++;

} while (con<=10);


return 0;
}