#include<stdio.h>
#include<stdlib.h>

int main() {

//Declarando variaveis
char nome [400];
float nota1;
float nota2;
float media;

//Inicio sOLICITANDO DADOS

printf("Digite seu nome:");
gets(nome);

printf("Digite sua Nota 1:");
scanf("%f", &nota1);

printf("Digite sua Nota 2:");
scanf("%f", &nota2);

//Calculando media

media = (nota1 + nota2) / 2;

system("cls || clear"); // limpatela

//Mostarndo dados para o ususario

printf("Nome:%s \n", nome);
printf("Nota 1: %.2f \n", nota1);
printf("Nota 2: %.2f \n", nota2);
printf("Media: %.2f \n", media);

return 0;

}