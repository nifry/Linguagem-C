#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void parouimpar ( int n1) {
if (n1 % 2 == 0)
{
    printf("Esse n�mero � par \n");
} else
{
    printf("Esse n�mero � impar \n");
}
}

int main () {
setlocale(LC_ALL, "portuguese");
int numero;

printf("Digite um n�mero:");
scanf("%d",&numero);

parouimpar(numero);

    return 0;
}