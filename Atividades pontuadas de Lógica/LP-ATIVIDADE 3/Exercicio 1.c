#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

int main () {
setlocale(LC_ALL, "PORTUGUESE");

char nome[5][200];
int idade[5][4][200];
float peso[5][4][200];
float altura[5][4][200];
int i = 0, j = 0;
int alturamaior = 0, pesomaior = 0, idademaior = 0;
int alturamenor = 999, pesomenor = 999, idademenor = 999;
int idadeelevada, menordeidade, pesoelevado, menospeso, grande, pequeno;

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

    if (idade[i] > idademaior){
       idademaior = idade[i];
       idadeelevada = i;

    }if (idade[i] < idademenor){
        idademenor = idade[i];
        menordeidade = i;

    }if (peso[i] > pesomaior){
        pesomaior > peso[i];
        pesoelevado = i;

    }if (peso[i] < pesomenor){
        pesomenor = peso[i];
        menospeso = i;

    }if (altura[i] > alturamaior){
        alturamaior = altura[i];
        grande = i;

    }if (altura[i] < alturamenor){
        alturamenor = altura[i];
        pequeno= i;
    }
                fflush(stdin);
}

//Final
                      system("cls || clear");

    printf("Maior idade: %s, Idade: %d\n", nome[idadeelevada], idademaior );
        printf("Menor idade: %s, Idade: %d\n", nome[menordeidade], idademenor);
            printf("Grande: %s, Altura: %.2f\n", nome[grande], alturamaior);
                 printf("Pequeno: %s, Altura: %.2f\n", nome[pequeno], alturamenor);
                    printf("Obeso: %s, Peso: %.2f\n", nome[pesoelevado], pesomaior);
                        printf("Magro: %s, Peso: %.2f\n", nome[menospeso], pesomenor);

    return 0;
}