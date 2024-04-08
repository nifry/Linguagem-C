#include<stdio.h>
#include<stdlib.h>


int main () {

//Variaveis 

float nota1; 
float nota2;
float media;
//Inicio
printf("Digite sua Nota 1: ");
scanf("%f" ,&nota1 );

printf("Digite sua Nota 2:");
scanf("%f" ,&nota2);

//Calculando nota
media = (nota1 + nota2) / 2;


//Final
printf("Primeira nota : %.1f \n",nota1);
printf("Segunda nota : %.1f \n" , nota2);
printf("Media: %.1f \n", media);

return 0;


}


