#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main () {

int i;
int numero;

printf("Digite um numero:");
scanf("%d", &numero);

for ( i = 0; i <= 10; i++)
{
    printf("%d x %d = %d \n", numero, i, numero * i);
}


    return 0;
}