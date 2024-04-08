#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main () {
setlocale (LC_ALL, "portuguese");

int numeros[5];

printf("Digite o 1º número:");
scanf("%d", &numeros[1]);

printf("Digite o 2º número");
scanf("%d", &numeros[2]);

printf("Digite o 3º número:");
scanf("%d", &numeros[3]);

printf("Digite o 4ª número:");
scanf("%d", &numeros[4]);

printf("Digite o 5º número:");
scanf("%d", &numeros[5]);


printf("1º número: %d \n", numeros[0]);
printf("2ª número: %d \n,", numeros[1]);
printf("3ª número: %d \n", numeros[2]);
printf("4º número: %d \n", numeros[3]);
printf("5ª número: %d \n", numeros[4]);


    return 0;
}