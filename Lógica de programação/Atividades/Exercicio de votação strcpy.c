#include<stdio.h>
#include<stdlib.h>


//Variaveis

int main (){

int idade;
char resultado [200]; 

//Solicitando dados 
printf("Digite sua idade:");
scanf("%d", &idade);

//Consideraçoes

idade >= 18  && idade <= 65 ?
  strcpy (resultado, "Obriagdo a votar") :
  strcpy (resultado, "Nao obrigado a votar");

 //Final
printf(resultado);  

return 0;
}