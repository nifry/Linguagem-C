#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main () {

setlocale(LC_ALL,"portuguese");

int numero;
int soma = 0;
float media;
int quantidade = 0;


do{

printf("Digite o %d numero", quantidade + 1); // ou printf ("Digite um numero:")
scanf("%d", &numero);

if (numero > 0) {

soma += numero;
quantidade++;

}
}While (numero > 0)

media = soma / (float) quantidade;

printf("Media %.1d \n", media);


return 0;
}