#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

int main (){

setlocale(LC_ALL,"portuguese");

//Variaveis

int dia;

//Solictando dados

printf("Digite o dia da semana:");
scanf("%d", &dia);


switch (dia) {
 case 2:
 case 3:
 case 4:
 case 5:
 case 6:
  printf("Dia util.");
  break;

 case 1:
 case 7:

 printf("Final de semana.");

}

return 0;

}