#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<ctype.h>

int main() {

setlocale (LC_ALL, "portuguese");

float pesoideal;
float altura;
char sexo;
 
printf("Digite sua Altura:");
scanf("%f", &altura);

printf("Digite seu sexo:");
scanf("%s", &sexo); 


//Converte em maiusculo 
sexo = toupper (sexo);

switch (sexo) {
case 'M':
    pesoideal = (72.7 * altura) - 58;
    break;

case'F':
     pesoideal = (62.1 * altura) - 44.7;
     break;
}


printf("Altura %f \n", altura);
printf("Peso ideal %f \n", pesoideal);

return 0;

}