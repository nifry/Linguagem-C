#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main () {

setlocale(LC_ALL, "portuguese");

float nota1;
float nota2;
float media;


do {

printf("Digite sua Nota 1:");
scanf("%f", &nota1);

printf("Digite sua Nota 2:");
scanf("%f", &nota2);
}
while (nota1 > 10 || nota1 < 0); 
 {
}

while (nota2 > 10 || nota2 < 0);
{
}

media = (nota1 + nota2) / 2;

printf("Media %.1f \n", media);



    return 0;
}