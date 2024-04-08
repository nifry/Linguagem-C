#include<stdio.h>
#include<stdlib.h>

int main () {

int i;
int numero;
int soma; 

for (i = 1; i <= 5; i++) {
    printf("Digite o %dº numero:", i);
    scanf("%d", &numero);

    soma = soma + numero;

}


printf("Soma: %d", soma);

    return 0;
}