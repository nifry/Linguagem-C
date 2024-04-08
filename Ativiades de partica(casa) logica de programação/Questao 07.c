#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main () {

setlocale(LC_ALL, "portuguese");

int i;


printf("Digite sua nota por favor:");
scanf("%d", &i);

for(i < 0; i > 10 ; i)
{
printf("Digite sua nota por favor:");
scanf("%d", &i);
}

printf("Nota %d \n", i);

    return 0;
}