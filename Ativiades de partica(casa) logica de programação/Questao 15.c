#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main () {

char login;
int senha;


printf("Digite seu login:");
scanf("%c", &login);


printf("Digite sua senha:");
scanf("%d", &senha);

while (login && senha);
{
    if (login != "peter parker" && senha !="123456")
    {
    
printf("Digite seu login novamente:");
scanf("%c", &login);

printf("Digite sua senha:");
scanf("%d", &senha);

    } else{
        printf("\n bem vindo");
    }
    
}


    return 0;
}