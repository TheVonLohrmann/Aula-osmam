#include <stdio.h>
#include <stdlib.h>

void quest1(){
int cima, baixo;

printf("CRESCENTE \tDECRESCENTE\n");
for(cima=1, baixo=10 ; cima<=10 && baixo >=1 ; cima++, baixo--)
    {
    printf("    %d \t\t    %d\n", cima, baixo);
    }
}

void quest2(){
 int baixo;

 printf("Decrescente:\n");
 for (baixo = 15; baixo >=1; baixo--)
 {
    printf("%d\n", baixo);
 }
}

void quest3(){
 int num, cont;
 printf("por favor digite um numero maior que 0: ");
 scanf("%d", &num);

 for(cont=0; cont<=num; cont++){
    printf("%d\n", num-cont);
 }
}

void quest4(){
int x, valor[5], media;
for(x=0;x<=4;x++){
    printf("idade:[%d] =", x+1);
    scanf("%d", &valor[x]);
}
media=(valor[0] + valor[1] + valor[2] + valor[3] + valor[4])/5;
printf("media:%d\n", media);
for (x = 0; x <=4; x++)
{
    if (valor[x]>=18)
    {
        printf("maior = 18: %d\n", valor[x]);
    } 
}
}

void quest5(){
 int numero, total;
 while (total<30)
 { printf("inicio total = %d\n", total);
 printf("entre com numero: ");
 scanf("%d", &numero);
 total+=numero;
 }
 printf("final total = %d\n", total);
}

int main(){

    quest5();


    return 0;
}