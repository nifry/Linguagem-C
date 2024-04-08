#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
#include<string.h>

int main (){

setlocale(LC_ALL,"portuguese");

//Variaveis 
int idade;
int codigo;
int anodenascimento;
int tempodetrabalho;

//Solicitando Dados
printf("Digite seu Codigo:");
scanf("%d", &codigo);

printf("Digite seu Ano de Nascimento:");
scanf("%d", &anodenascimento);

printf("Digite seu Tempo de Trabalho em anos:");
scanf("%d", &tempodetrabalho);

//Operação Logica

idade = 2023 - anodenascimento;
 if (idade >= 65 || tempodetrabalho >= 30){
  printf("Pode se aposentar.");
 }else { 
    printf("Nao precisa se aposentar.");
 }

//final
printf("Idade %d \n", idade);
printf("Codigo %d \n", codigo);
printf("Ano de Nascimento %d \n", anodenascimento);
printf("Tempo de Trabalho %d \n", tempodetrabalho);
    return 0;
}