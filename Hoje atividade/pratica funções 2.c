#include<stdio.h>
#include<stdlib.h>
#include<locale.h>



void mostrartabuada(int n1){
int i;

for (i = 1; i <= 10; i++)
{
    printf("%d x %d = %d \n ", n1, i, n1 * i);
}

}

int main () {
setlocale(LC_ALL, "portuguese");
int numero;

printf("Digite um número:");
scanf("%d", &numero);

mostrartabuada(numero);

    return 0;
}