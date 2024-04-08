#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void parouimpar ( int n1) {
if (n1 % 2 == 0)
{
    printf("Esse número é par \n");
} else
{
    printf("Esse número é impar \n");
}
}

int main () {
setlocale(LC_ALL, "portuguese");
int numero;

printf("Digite um número:");
scanf("%d",&numero);

parouimpar(numero);

    return 0;
}