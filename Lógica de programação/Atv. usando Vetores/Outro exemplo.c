#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int tamanho = 15;
    int numeros[tamanho];
    int i;

    for (i = 0; i < tamanho; i++)
    {
        printf("Digite o %dº número:", i + 1);
        scanf("%d", &numeros[i]);
    }

system("cls");

    printf("Exibindo os números digitados..... \n");

    for (i = 0; i < tamanho; i++)
        
    {
        printf("%dª números: %d \n", i + 1, numeros[i]);
    }

    return 0;
}