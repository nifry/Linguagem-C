#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main () {

setlocale(LC_ALL, "portuguese");

float nota1;
float nota2; 
float media;

do{

printf("Digite sua nota 1:");
scanf("%f", &nota1);

printf("Digite nota 2:");
scanf("%f", &nota2);



}while (nota1 < 0 || nota1 >10);
{
}

while (nota2 < 0 || nota2 > 10);
{
}


media = (nota1 + nota2) / 2;

(fflush);

printf("Nota 1: %.1f \n", nota1);
printf("Nota 2: %.1f \n", nota2);
printf("Media %.1f \n", media);

    return 0;
}