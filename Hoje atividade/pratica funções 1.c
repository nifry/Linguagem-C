
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

float calculo(float n1, float n2) {

float resultado;

resultado = (n1 + n2) / 2;
return resultado;

}

int main () {
    
setlocale(LC_ALL, "portuguese");

float media;
float numero1;
float numero2;

printf("Digite primeiro número:");
scanf("%f", &numero1);
printf("Digite segundo número:");
scanf("%f", &numero2);

media = calculo(numero1, numero2);

printf("Primeiro número: %.1f \n ",numero1);
printf("Segundo número: %.1f \n",numero2);
printf("Média: %.2f \n", media);

    return 0;

}