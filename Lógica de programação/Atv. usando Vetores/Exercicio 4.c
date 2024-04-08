#include <stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{

int i;
int numeros[6];
int pares = 0;
int impares = 0;

setlocale(LC_ALL, "portuguese");


for (i = 0; i < 6; i++)
{
    printf("Digite um número:");
    scanf("%d", &numeros[i]);

if (numeros[i] % 2 == 0)
{
    pares++;
}else{
  impares++;
}

}

printf("\n Números digitados \n");

for (i = 0; i < 6; i++)
{
    printf("\n Números: %d \n", numeros[i]);
}

printf("\n Quantidade de números pares: %d \n", pares);
printf("\n Quantidade de números impares: %d \n", impares);

return 0;
}