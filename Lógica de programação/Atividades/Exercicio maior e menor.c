#include <stdio.h>
#include <stdlib.h>

int main(){

//Variaveis
float produto;
int numero1;
int numero2;
float media;
int soma;
int maior;
int menor; 

//Recebimento de dados

printf ("Digite o numero 1 :");
scanf("%d", &numero1);

printf("Digite o numero 2:");
scanf ("%d", &numero2);

//Calculo 

 soma = (numero1 + numero2);
media = soma / 2;
 produto = (numero1 * numero2);


//Consideraçoes
if (numero1 > numero2) {
  maior = numero1;
  menor = numero2;

} else {
  maior = numero2;
  menor = numero1;

}
 //Final
printf("Numero 1: %.d \n", numero1);
printf("Numero 2: %.d \n", numero2);
printf("Media: %f \n", media);
printf("Produto: %f \n", produto);
printf("Soma: %d \n", soma);
printf("Maior numero: %d \n", maior);
printf("Menor numero: %d \n", menor);

return 0;
}