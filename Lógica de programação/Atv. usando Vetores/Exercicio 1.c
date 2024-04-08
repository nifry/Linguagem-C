#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");


    int i;
    int tamanho = 3;
    int notas[tamanho];
    int soma = 0;
    float media;

    for (i = 0; i < tamanho; i++)
    {
        printf(" Digite a %dº  nota: \n", i + 1);
        scanf("%d", &notas[i]);
       
       soma += notas[i];
    }


    media = soma / tamanho;

     
    printf("Exibindo notas \n");
       

    for (i = 0; i < tamanho; i++)
    {
        printf("%d Nota: %d \n", i + 1, notas[i]);
        
    }

printf("Média: %.1f \n", media);

    return 0;
}