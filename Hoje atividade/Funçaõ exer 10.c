#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

struct contato  
{
    char nome[200], numero[3][200], email[200];
};

void dados (struct contato infor) {
int i;

for (i = 0; i < 3; i++)
{
    printf("Digite seus contatos:");
    scanf("%s", &contato.numero );
}


}

int main () {
setlocale(LC_ALL, "portuguese");

struct contato infor;

printf("Digite seu nome:");
scanf("%s", &infor.nome);

printf("Digite seu email");
scanf("%s", &infor.email);





    return 0;

}