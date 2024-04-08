#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

struct Central
{
  char nome[200], entrar[200], senha[200];
  int numero, sair, opcao;
  float saldo, transferir, sacar;
};

void conferir(struct Central banco)
{
  printf("Digite nome do titular da conta: \n");
  gets(banco.nome);

  system("cls||clear");
  fflush(stdin);

  printf("Digite o número da conta: \n");
  scanf("%d", &banco.numero);

  system("cls||clear");
  fflush(stdin);

  printf("Crie uma senha: \n");
  gets(banco.senha);

  system("cls||clear");
  fflush(stdin);
}


void depositar(struct Central *banco){

  float deposito;

  printf("========== DEPOSITO ==========\n\n");

  printf("\nQuanto deseja depositar?\n");
  scanf("%f",&deposito);

  banco->saldo += deposito;
}

void saldo(struct Central* banco)
{
  printf("Saldo atual: R$ %.2f\n", banco->saldo);
} 
void sacar(struct Central *banco)
{
    float valor;
    printf("Digite quanto voce quer sacar: ");
    scanf("%f", &valor);

    if (valor > 0 && valor <= banco->saldo)
    {
        printf("Saque de R$ %.2f realizado com sucesso.\n", valor);
        banco->saldo -= valor;
    }
    else
    {
        printf("|Saldo insuficiente|\n");
    }
}
int main()
{
  setlocale(LC_ALL, "portuguese");
  struct Central banco;
  
  int opcao;
  float valor;

  printf("\n |A seguir crie uma conta| \n");

  do
  {
    
    fflush(stdin);

    printf("Gostarei de acessar sua conta agora? \n \n");
    printf("\nMenu:\n");
    printf("1 - Cadastrar Conta\n");
    printf("2 - Depositar\n");
    printf("3 - Sacar\n");
    printf("4 - Consultar Saldo\n");
    printf("5 - Sair\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);
    fflush(stdin);

    switch (opcao)
    {
    case 1:
    	system("cls||clear");
      conferir(banco);

      break;
    case 2:
    	system("cls||clear");
     depositar(&banco);
      break;
    case 3:
      system("cls||clear");
      sacar (&banco);
      break;

    case 4:
    	system("cls||clear");
      saldo(&banco);
      
      break;
    case 5:
      printf("Saindo do programa, obrigado pela colaboração, volte sempre.\n");
      break;
    default:
      printf("Opcao invalida.\n");
    }
    fflush(stdin);
  } while (opcao != 5);

  return 0;
}