#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include<string.h>

int main () {

setlocale(LC_ALL,"portuguese");

int codigo;

printf ("|Menu de Comida classicas|");
printf("Pratos: \n 1 - Picanha \n 2 - Lasanha \n 3 - Bife Acebolado \n 4 - Strogonoff \n 5 - Pao com ovo \n \n");

printf("Digite o codigo:");
scanf("%d", &codigo);

switch (codigo)
{
 case 1:
 printf("Prato: Picanha \n Valor: 25.00 \n codigo: 1 \n");
 break;

 case 2:
 printf("Prato: Lasanha \n Valor: 20.00 \n codigo: 2 \n");
 break;

 case 3:
 printf("Prato: Strogonoff \n Valor: 18.00 \n codigo:3 \n");
 break;

 case 4:
 printf("Prato: Bife Acebolado \n Valor: 15.00 \n codigo:4 \n");
 break;

 case 5:
 printf("Prato: Pao com ovo \n Valor: 5.00 \n codigo: 5 \n \n");
 break; 
}

printf("Obrigado por escolher comer, tenha uma boa tarde. \n \nSe alimente,se anime e nao desista. \n \n");

return 0;
}