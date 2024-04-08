#include<stdio.h>
#include<stdlib.h>

int main () {

float nota;

printf("Digite uma nota:");
scanf("%f", &nota);


while (nota < 0 || nota > 10) {
   printf("Digite uma nota:");
   scanf("%f", &nota); 
     
}

printf("Nota: %.1f \n", nota);

//Ou de outra forma

do {
   printf("Digite uma nota:");
   scanf("%f", &nota);
   }while (nota < 0 || nota > 10);
   printf("Nota: %.1f \n", nota);


    return 0;
}