#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
#include<string.h>


int main () {

setlocale(LC_ALL,"portuguese");


//Variaveis
int mes;

//Solicitando dados

printf("Digite um numero para um mes do ano:" );
scanf("%d", & mes);

//Condições
switch (mes){

 case 1:
 printf("Janeiro.");
 break;

 case 2:
 printf("Fevereiro.");
 break;

 case 3:
 printf("Marco.");
 break;
 case 4:
 printf("Abril.");
 break;

 case 5:
 printf("Maio.");
 break;

 case 6:
 printf("Junho.");
 break;
 
 case 7:
 printf("Julho.");
 break;

 case 8:
 printf("Agosto.");
 break;;

 case 9:
 printf("Setembro");
 break;

 case 10:
 printf("Outubro.");
 break;

 case 11:
 printf("Novembro.");
 break;

 case 12:
 printf("Dezembro.");
 break;
}

return 0;

}