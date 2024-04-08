#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i;
    int numeros[5];

    for (i = 0; i < 5; i++)
    {
        printf("Digite um número:");
        scanf("%d", &numeros[i]);

        if (numeros[i] < 0)
        {
            numeros[i] = 0;
        }
      
    }
    
  for (i = 0; i < 5; i++)
        {
            printf("\nLista de dos valores: %d \n ", numeros[i]);
        }
    return 0;
}