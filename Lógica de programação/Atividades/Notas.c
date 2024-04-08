#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main () {

setlocale(LC_ALL, "portuguese");

char aluno [5][200];
float nota [5][3][200];
float media;
float soma;
int i;

for (i = 0; i <5; i++)
{
    printf("Digite seu nome e idade:", i+1);
    gets(aluno[i]);
        for (i = 0; i <5; i++){

    printf("Digite sua nota:", i+1);
    scanf("%f", &nota[i]);
           
        
            media += soma;

        if (media >= 7)
        {
            printf("Aprovado");
        }if(media < 7 && media >= 5);
            printf("Recuperação");
        }if {
            printf("Reprovado");
        }
        

}


    return 0;
}