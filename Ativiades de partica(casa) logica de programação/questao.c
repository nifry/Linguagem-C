#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main () {

int idade;
int ano;

printf("Digite seu ano de nascimento:");
scanf("%d", &ano);

idade = 2023 - ano;

if(idade >= 18 && idade <= 65)
{
    printf("E obrigado a votar \n");
}else {
    printf("Nao obrigado a votar \n");
}


printf("Idade: %d \n", idade);
printf("Ano de nascimento: %d \n", ano);

    return 0;
}