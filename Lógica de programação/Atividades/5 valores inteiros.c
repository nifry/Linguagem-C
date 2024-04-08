#include<stdio.h>
#include<stdlib.h>

int main() {

int i;
int numero;
int impares = 0;
int pares = 0;

for (i = 1; i <= 5; i++){
    printf("Digite o %d numero:", i);
    scanf("%d", &numero);

      numero % 2 == 0 ? pares++ : impares++;
    
    //ou de outra forma:

   if (numero % 2 ==0){
    pares++;
   }else{
    impares++;
}

}

printf("Pares: %d \n", pares);
printf("Impares: %d \n", impares);

return 0;
}