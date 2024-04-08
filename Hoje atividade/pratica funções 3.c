#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int mostrarsoma (int n1, int n2){
int soma;
soma = n1 + n2;
}

int mostrarsubtracao (int n1, int n2) {
int subtracacao;
subtracacao = n1 - n2;
}

int mostrarmultiplicacao(int n1, int n2) {
int multiplicacao;
multiplicacao = n1 * n2;
}

float mostrardivisao(int n1, int n2){
float divisao;
divisao = n1 / n2;
}


int main () {
setlocale(LC_ALL, "portugese");

int numero1;
int numero2;
int resultado1, resultado2, resultado3;
float resultado4;

printf("Digite o primeiro número:");
scanf("%d", &numero1);

printf("Digite o segundo número");
scanf("%d", &numero2);

resultado1 = mostrarsoma(numero1, numero2);
resultado2 = mostrarsubtracao (numero1, numero2);
resultado3 = mostrarmultiplicacao (numero1, numero2);
resultado4 = mostrardivisao (numero1, numero2);

printf("Digite o primeiro número %d \n", numero1);
printf("Digite o segundo número %d \n", numero2);
printf("Resultado da Soma %d \n", resultado1);
printf("Resultado da subtração: %d \n", resultado2);
printf("Resultado da multiplicação: %d \n", resultado3);
printf("Resultado da divisão: %.2f \n", resultado4);
    return 0;
}