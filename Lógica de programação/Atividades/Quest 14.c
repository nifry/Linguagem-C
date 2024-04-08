 #include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main () {

setlocale(LC_ALL, "portuguese");

int quantidadegeral = 0;
int numero;
int pares = 0;
int impares = 0;
int somageral = 0;
int somadepares = 0;
int mediageral;
int mediapares

do {
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           do
printf("Digite um numero:", quantidadegeral + 1);
scanf("%d", &numero);

if (numero > 0) {

somageral += numero;
quantidadegeral++;
if (numero % 2 == 0) {
somadepares += numero;
pares++;
}else{

    impares++;
}
}

}while (numero != 0);

mediageral = somageral / (float) quantidadegeral;
mediapares = somadepares / (float) pares;

printf("Quantidade de numeros pares: %d \n ", pares);
printf("Quantidade de numeros impares: %d \n", impares);
printf("Media de numeros pares: %.1f \n", mediageral);
printf("Media geral %.1f \n", mediageral);


 return 0;
}