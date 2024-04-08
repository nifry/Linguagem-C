#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

int main () {

setlocale(LC_ALL, "portuguese");

float i, j ;


printf("VocÊ poderá digitar quantos números quiser na sua lista telefonica \n");
    printf("\nAutomaticamente os números serão salvos na lista telefonica \n");
        printf("Porém ao digitar somente o número 2, não poderá mais digitar \n \n");
            printf("Ao digitar os números não use sinais");
        

 do
 {
    printf("Digite um número para sua agenda telefonica");
    scanf("%f", &i);
    printf("\n Salvo na lista telefonica\n");

 } while (i > 2);
 printf("\n Os contatos que foram salvos estão exibidos acima \n");
 
  
  
    return 0;
}