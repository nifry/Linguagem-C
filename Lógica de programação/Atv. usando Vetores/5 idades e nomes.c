#include<stdio.h>
#include<stdio.h>


int main () {

char nome [5] [500];
int idade [5];
int i;


for  (i = 0; i < 5; i++)
{

printf("\nDigite seu nome: \n");
gets(nome[i]);

printf("Digite sua idade: \n");
scanf("%d", &idade[i]);

fflush(stdin);

}

for (i = 0; i < 5; i++)
{

printf("\n Nomes: %s \n", nome[i]);
printf("Idades: %d \n", idade[i]);

}





    return 0;
}