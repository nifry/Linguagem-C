#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
#include<string.h>

//Variaveis

int main (){

setlocale(LC_ALL,"portuguese");

int idade;

//Solicitando dados 
printf("Digite sua idade:");
scanf("%d", &idade);

//Consideraçoes

if (idade >= 18  && idade <= 65) {
    printf("Obrigado a votar");
} else {
 printf("Nao e obrigado  VOTAR");
}


return 0;
}