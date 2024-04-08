#include<stdio.h>
#include<stdlib.h>

int main () {


int valores [6];
int i;

for ( i = 0; i < 6; i++)
{
   printf ("digite os numeros pares :\n");
   scanf("%d", &valores[i]);

}


printf ("exibindo ordem inversa.....\n");

while (valores [i] > 0)
{
   i--;
   printf(" numeros inverso :%d\n", valores[i]);
}


    return 0;
}