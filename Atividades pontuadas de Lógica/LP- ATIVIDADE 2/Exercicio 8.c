#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{


    int numero = 0;
    int i = 0;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    for (i = numero; i >= 0; i--)
    {
        printf("%d\n", numero);
        numero = numero - 1;
    }

    return 0;

}