#include <stdio.h>

int main()
{
    int i;
    int numeros[5];
    int maior = 0;
    int menor = 9999;
   
    for(i = 0; i < 5; i++) {
        printf("Digite um número: ");
        scanf("%d",&numeros[i]);
       
        maior = numeros[i] > maior ? numeros[i] : maior;
       
        if (numeros[i] < menor) {
            menor = numeros[i];
        }
    }
   
    printf("\nNúmeros digitados... \n");
   
    for(i = 0; i < 5; i++) {
        printf("Números: %d \n", numeros[i]);
    }
   
    printf("Maior número: %d \n", maior);
    printf("Menor número: %d \n", menor);
   

    return 0;
}


