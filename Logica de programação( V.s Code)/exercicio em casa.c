#include<stdio.h>
#include<stdlib.h>

int main () {

char nome [200];   
int idade;
float nota1; 
float nota2;
float nota3;
float media;


printf("Digite seu nome: \n");
scanf("%s", &nome);

printf("Digite sua idade: \n");
scanf("%d", &idade);

printf("Digite sua nota 1: \n");
scanf("%f", &nota1);

printf("Digite sua nota 2: \n");
scanf("%f", &nota2);

printf("Digite sua nota 3: \n");
scanf("%f", &nota3);

media = (nota1 + nota2 + nota3) / 3;

if (media >= 7){
    printf("Aprovado \n");
}else{
printf("Reprovado \n");
}

printf("Media %2.f \n", media);

return 0;
}