#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main () {

setlocale(LC_ALL, "portuguese");

char nome[5][200];
int idade[5][4][200];
float peso[5][4][200];
float altura[5][4][200];
int i = 0, j = 0;
int alturamaior;
int alturamenor;
int pesomaior;
int pesomenor;
int idademaior;
int idademenor;
int idoso;
int jovem;
int obeso;
int magro;
int grande;
int pequeno;

for (i = 0; i <5; i++)
{
    printf("Digite seu nome:", i+1);
    gets(nome[i]);
       
           printf("Digite sua idade:", j++);
            scanf("%d", &idade[j]);
            printf("Digite seu peso:", j++);
            scanf("%f", &peso[j]);
            printf("Digite sua altura:", j++);
            scanf("%f", &altura[j]);
    
        
    fflush(stdin);

    if (idade[i] > idademaior)
    {
        idademaior = idade[i];
        idoso = i
    }if (idade[i] < idademenor)
    {
        idademenor = idade[i];
        jovem = i;
    }if (peso[i] > pesomaior)
    {
        pesomaior > peso[i];
        obeso = i;
    }if (peso[i] < pesomenor)
    {
        pesomenor = peso[i];
        magro = i;
    }if (altura[i] > alturamaior)
    {
        alturamaior = altura[i];
        grande = i;
    }if (altura[i] < alturamenor)
    {
        alturamenor = altura[i];
        pequeno= i;
    }
    
}

printf("Mais alto:" %s, altura);
printf("")




    return 0;
}