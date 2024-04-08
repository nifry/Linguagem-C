#include <stdio.h>

int main()
{
    int tamanho = 5;
    int n[tamanho];
    int i;
    int gmaior = 0;
    int gmenor = 9999;

    for (i = 0; i < tamanho; i++)
    {
        printf("Digite uma numero:\n ");
        scanf("%d", &n[i]);

        gmaior = n[i] > gmaior ? n[i] : gmaior;
        
        if (n[i]<gmenor)
        {
            gmenor=n[i];
        }
        
    }

    printf("\n");
    printf("Maior numero: %d\n", gmaior);
    printf("Menor numero: %d\n", gmenor);

    return 0;
}