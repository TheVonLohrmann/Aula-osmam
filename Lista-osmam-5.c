#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MEDIAA(a,b,c,d) (a + b + c + d)/4;

void quest(){
   int num[2], i, soma, sub, div, mult;

   printf("| digite num numero");
   for ( i = 0; i < 2; i++)
   {
    scanf("%d", &num[i]);
   }
   soma = num[0]+num[1];
   printf("| soma dos numeros: %d", soma);
   sub = num[0] - num[1];
   printf("| subtracao dos numeros: %d", sub);
   div = num[0]/num[1];
   printf("| divisao dos numeros: %d", div);
   mult = num[0]*num[1];
   printf("| multiplicao dos numeros: %d", mult);
}


void quest3(){
    int i;
    float notas[4], mediacal;

    printf("| digite 4 numeros: ");
    for (i = 0; i < 4; i++)
    {
      scanf("%f", &notas[i]);
    }
    mediacal = MEDIAA(notas[0],notas[1],notas[2],notas[3]);
    printf("| media das notas %.2f", mediacal);
}

void quest4(){
    int idade;
    char nome[50];

    printf("| escreva o seu nome: ");
    scanf("%s", &nome);

    printf("| digite sua idade: ");
    scanf("%d", &idade);

    if (idade >= 18)
    {
      printf("| maior de idade(%d), parabens: %s", idade,nome);
    } else {
        printf("| menor de idade(%d), que pena: %s", idade,nome);
    }
}

int main(){


     quest4();


    return 0;
}