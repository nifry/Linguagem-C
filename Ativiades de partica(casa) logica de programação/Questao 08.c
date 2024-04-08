#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main () {

setlocale(LC_ALL,"portuguese");

float media;
float nota1;
float nota2;
float nota3;


printf("Digite sua nota 1:");
scanf("%f", &nota1);

printf("Digite sua nota 2:");
scanf("%f", &nota2);

printf("Digite sua nota 3:");
scanf("%f", &nota3);

media = (nota1 + nota2 + nota3) / 3;

if(media >= 7)
{
 printf("Aprovado \n");
} 
else if (media >= 5 && media <= 6.9)
{
    printf("Recuperacao \n");
    }else{
        printf("Reprovado \n");
    }

printf("Nota 1: %.1f \n", nota1);
printf("Nota 2: %.1f \n", nota2);
printf("Nota 3: %.1f \n", nota3);
printf("Media: %1.f \n", media);

    return 0;
}