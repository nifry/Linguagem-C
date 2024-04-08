#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

int main () {

setlocale(LC_ALL, "portuguese");


char nome[5][300];
float notas[5][3];
float somaNotas = 0;
float media;
int i, j;

for ( i = 0; i < 5; i++){
     printf("Digite o nome e sua idade por favor:");
     scanf("%s", &nome[i]);

      for (j = 0; j < 3; j++){
            printf("Digite sua nota:");
            scanf("%f", &notas[i][j]);
            somaNotas += notas[i][j];
      }     
            media = somaNotas / j;
            somaNotas = 0;

          if (media >= 7)
          {
            printf("\n Aprovado \n");
          }if (media > 5 && media < 7)
          {
            printf("\n Recuperacao \n");
          }else {
             printf("\n Reprovado \n");   
          }                             
  }


    return 0;
}