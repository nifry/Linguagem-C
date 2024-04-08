#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
#include<string.h>

int main () {

setlocale(LC_ALL,"portuguese");

//Variaveis

float custototal;
int quantidadedemacas;
float valor;

//Solicitando dados

printf("Digite a quantidade de macas:");
scanf("%d", &quantidadedemacas);

//Operações

valor = quantidadedemacas < 12 ? 1.30 : 1.0;

custototal = quantidadedemacas * valor;

//Final

printf("Preco final: R$ %.2f \n", custototal);

return 0;
}