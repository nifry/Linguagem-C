#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main () {

setlocale(LC_ALL, "portuguese");

int i;
int numero;
int soma;
int maior, menor;
int negativos = 0;
int impares = 0, pares = 0;

for (i = 1; i <= 5; i++){
    printf("Digite o %d numero:", i);
    scanf("%d", &numero);

      numero % 2 == 0 ? pares++ : impares++;
    

maior = numero > numero ? numero: numero;

maior = numero > numero ? numero: numero;
menor = numero < numero ? numero : numero;


soma = numero + numero + numero + numero + numero;

if (numero < 0)
{
    negativos++;
}

}

printf("Maior número: %d \n", maior);
printf("Menor número: %d \n", menor);
printf("Pares: %d \n", pares);
printf("Impares: %d \n", impares);
printf("Média de números: %d \n", soma);
printf("Quantidade de números negativos: %d \n", negativos);

    return 0;
}