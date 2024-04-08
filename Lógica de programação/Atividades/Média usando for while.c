#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {



int i;
float nota;
float media;
float soma = 0;
float media;

for (i = 0; i < 2; i++){
do {
    printf("Digite a %dº nota:", i + 1);
    scanf("%f", &nota);
 }  while (nota < 0 || nota > 10);
 soma += nota;

} 


media = soma / i;

printf("Media: %.1f \n", media);

    return 0;
}
