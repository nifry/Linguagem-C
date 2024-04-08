#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main () {

setlocale(LC_ALL, "portuguese");

int i;
int tamanho = 4;
int nota[tamanho];
int soma = 0;
float media;

for (i = 0; i < tamanho; i++)
{
    printf("Digite sua %dº nota: \n", i + 1);
    scanf("%d", &nota[i]);

    soma += nota[i];
}

media = soma / tamanho;

if (media >= 7)
{
    printf("\n Aprovado \n");
}else if (media >= 5 && media < 7)
{
    printf("\n Recuperação \n");
}else
{
printf("\n Reprovado \n");    
}


printf(" \n Exibindo Notas..... : \n");


for  (i = 0; i < tamanho; i++)
{
    printf("%d  Nota : %d \n", i + 1, nota[i]);
}

printf("Média: %.1f \n", media);

    return 0;
}