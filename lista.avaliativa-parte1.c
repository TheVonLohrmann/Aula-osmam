#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void quest(){
   int A[6]={1,0,5,-2,-5,7}, soma, i;
   soma = A[0] + A[1] + A[5];
   printf("|----------------------------------------------------------|\n");
   printf("|                      Primeira questao                    |\n");
   printf("|----------------------------------------------------------|\n");

   printf("|a) valores atribuidos ao vetor A={1,0,5,-2,-5,7}          \n");
   printf("|b) soma dos valores das posicaoes A[0], A[1] e A[5]       \n");
   printf("|b) soma: %d                                               \n", soma);

   A[3] = 100;
   printf("|c) 4 posicao do vetor agora e: %d                         \n", A[3]);

   for (i = 0; i < 6; i++)
   {
    printf("|d) valor de cada posicao do vetor: %d                    \n", A[i]);
   }
   system("pause");
    system("cls");
}

void quest2(){
   int VI[6], i;

   printf("|----------------------------------------------------------|\n");
   printf("|                      Segunda questao                     |\n");
   printf("|----------------------------------------------------------|\n");

   for (i = 0; i < 6; i++)
   {
   printf("| Porfavor digite um numero inteiro: ");
   scanf("%d", &VI[i]);
   }
   printf("|----------------------------------------------------------|\n");
   for (i = 0; i < 6; i++)
   {
   printf("| os valores digitados em ordem: %d\n", VI[i]);
   }
   system("pause");
    system("cls");
}

void quest3(){
   float A1[10], A2[10];
   int i;

   printf("|----------------------------------------------------------|\n");
   printf("|                     Terceira questao                     |\n");
   printf("|----------------------------------------------------------|\n");

   printf("| Digite 10 numeros reais:\n");
   for (i = 0; i < 10; i++) {
      scanf("%f", &A1[i]);
      A2[i] = A1[i] * A1[i];
   }

   printf("| Valor do vetor A1:\n");
   for (i = 0; i < 10; i++) {
      printf("|%.2f \n", A1[i]);
   }
   printf("|----------------------------------------------------------|\n");

   printf("| Valor do vetor A2 (quadrado do vetor A1):\n");
   for (i = 0; i < 10; i++) {
      printf("|%.2f \n", A2[i]);
   }  
   system("pause");
    system("cls");
}

void quest4(){
    int A1[8], soma, i, x, y, b ,c;

   printf("|----------------------------------------------------------|\n");
   printf("|                     Quarta questao                       |\n");
   printf("|----------------------------------------------------------|\n");
   
   printf("| Porfavor digite 8 numeros: \n");
   for ( i = 0; i < 8; i++)
   {
    scanf("%d", &A1[i]);
   }
   printf("|----------------------------------------------------------|\n");
   printf("| Digite um numero entre 1 e 8 para a posicao x: ");
   scanf("%d", &x);
   printf("| Digite um numero entre 1 e 8 para a posicao y: ");
   scanf("%d", &y);
   b = x-1;
   c = y-1;
   soma = A1[b] + A1[c];

   printf("| A soma dos valores das posicoes %d e %d e %d\n", x, y, soma);
   system("pause");
    system("cls");
}

void quest5(){
    int A1[10], i , par=0;
   printf("|----------------------------------------------------------|\n");
   printf("|                     Quinta questao                       |\n");
   printf("|----------------------------------------------------------|\n");
   
   printf("| Porfavor digite 10 numeros: \n");
   for ( i = 0; i < 10; i++)
   {
    scanf("%d", &A1[i]);
   }
   printf("|----------------------------------------------------------|\n");
   for ( i = 0; i < 10; i++)
   {
      if (A1[i] % 2 == 0)
     {
        par++;
     }
   }
   printf("| O vetor A1 tem %d numeros pares \n", par);
   system("pause");
    system("cls");
}

void quest6(){
    int A1[10], i, maior, menor;
   printf("|----------------------------------------------------------|\n");
   printf("|                      Sexta questao                       |\n");
   printf("|----------------------------------------------------------|\n");

   printf("| Porfavor digite 10 numeros: \n");
   for ( i = 0; i < 10; i++)
   {
    scanf("%d", &A1[i]);
   }

   maior = A1[0];
   menor = A1[0];
   for ( i = 0; i < 10; i++)
   {
    if (A1[i] > maior)
    {
        maior = A1[i];
    }
    if (A1[i] < menor)
    {
        menor = A1[i];
    }
   }
   printf("| Maior numero do vetor A1: %d", maior);
   printf("| Menor numero do vetor A1: %d", menor);
   system("pause");
    system("cls");
}

void quest7(){
   int A[10], i, maior = 0;
   printf("|----------------------------------------------------------|\n");
   printf("|                      Setima questao                      |\n");
   printf("|----------------------------------------------------------|\n");

   printf("| Porfavor digite 10 numeros: \n");
   for ( i = 0; i < 10; i++)
   {
    scanf("%d", &A[i]);
    if (A[i] > A[maior])
    {
        maior = i;
    }
   }
   printf("|----------------------------------------------------------|\n");
   printf("| O maior elemento: %d\n", A[maior]);
   printf("| Posicao do maior elemento: %d\n", maior);
   system("pause");
    system("cls");
}

void quest8(){
    int A[6], i;
   printf("|----------------------------------------------------------|\n");
   printf("|                      Oitava questao                      |\n");
   printf("|----------------------------------------------------------|\n");

   printf("| porfavor digite 6 numeros: \n");
   for ( i = 0; i < 6; i++)
   {
     scanf("%d", &A[i]);
   }
   printf("|----------------------------------------------------------|\n");
   printf("|Os valores digitados na ordem inversa:\n");
   for ( i = 6-1; i >= 0; i--)
   {
    printf("| %d\n", A[i]);
   }
 system("pause");
    system("cls");
}

void quest9(){
    int A[6], i;
   printf("|----------------------------------------------------------|\n");
   printf("|                       Nona questao                       |\n");
   printf("|----------------------------------------------------------|\n");

   printf("| porfavor digite 6 numeros pares: \n");
   for ( i = 0; i < 6; i++)
   {
    do
    {
     scanf("%d", &A[i]);
    } while (A[i] % 2!=0);
   }
   printf("|----------------------------------------------------------|\n");
   printf("|Os valores digitados na ordem inversa:\n");
   for ( i = 6-1; i >= 0; i--)
   {
    printf("| %d\n", A[i]);
   }
   system("pause");
    system("cls");
}

void quest10(){
    float nota[15], media, soma = 0;
    int i;
   printf("|----------------------------------------------------------|\n");
   printf("|                      Decima questao                      |\n");
   printf("|----------------------------------------------------------|\n");

   for ( i = 0; i < 15; i++)
   {
    printf("| Porfavor digite a nota do %d aluno: ", i+1);
    scanf("%f", &nota[i]);
   }
   for ( i = 0; i < 15; i++)
   { 
    soma += nota[i];
   }
    media = soma / 15;
    printf("| a media de nota dos alunos e: %.2f", media);
    system("pause");
    system("cls");
}

void quest11(){
    float A[10], soma;
    int i, negativo = 0;
   printf("|----------------------------------------------------------|\n");
   printf("|                 Decima primeira questao                  |\n");
   printf("|----------------------------------------------------------|\n");

   printf("| Porfavor digite 10 numeros(positivos e negativo): \n");
   for ( i = 0; i < 10; i++)
   {
    scanf("%f", &A[i]);
   }
   for ( i = 0; i < 10; i++)
   {
    if (A[i] < 0)
    {
        negativo++;
    }else{
       soma += A[i];
    }
   }
   printf("| A quantidade de numeros negativos: %d", negativo);
   printf("| A soma de numeros positivos: %.2f", soma);
   system("pause");
    system("cls");
}

void quest12(){
    int A[5], i, maior, menor;
    float soma = 0, media;
   printf("|----------------------------------------------------------|\n");
   printf("|                  Decima segunda questao                  |\n");
   printf("|----------------------------------------------------------|\n");

   printf("| Porfavor digite 5 numeros: \n");
   for ( i = 0; i < 5; i++)
   {
    scanf("%d", &A[i]);
   }
   maior = A[0];
   menor = A[0];
   for ( i = 0; i < 5; i++)
   {
    if (A[i] > maior)
    {
        maior = A[i];
    }
    if (A[i] < menor)
    {
        menor = A[i];
    }
   }
   for ( i = 0; i < 5; i++)
   {
    soma += A[i];
   }
   media = soma / 5;
   printf("|----------------------------------------------------------|\n");
   for ( i = 0; i < 5; i++)
   {
    printf("| numero digitado: %d\n", A[i]);
   }
   printf("|----------------------------------------------------------|\n");
   printf("| Maior numero: %d\n", maior);
   printf("| Menor numero: %d\n", menor);
   printf("| Media dos numeros: %.2f\n", media);
   system("pause");
    system("cls");
}

void quest13(){
   int A[5], i, maior, menor, Pma = 0, Pme = 0;
   printf("|----------------------------------------------------------|\n");
   printf("|                 Decima terceira questao                  |\n");
   printf("|----------------------------------------------------------|\n");

   printf("| Porfavor digite 5 numeros: \n");
   for ( i = 0; i < 5; i++)
   {
    scanf("%d", &A[i]);
   }
   maior = A[0];
   menor = A[0];
   for ( i = 0; i < 5; i++)
   {
    if (A[i] > maior)
    {
        maior = A[i];
        Pma = i;
    }
    if (A[i] < menor)
    {
        menor = A[i];
        Pme = i;
    }
   }
   printf("| Maior numero: %d e sua posicao: %d \n", maior, Pma);
   printf("| Menor numero: %d e sua posicao: %d \n", menor, Pme);
   system("pause");
    system("cls");
}

int main(){
    char p1='F', p2='F', p3='F', p4='F', p5='F', p6='F', p7='F', p8='F',p9='F', p10='F', p11='F', p12='F', p13='F';
    int op;
           do	{	
		
			
			printf("\n"); 
		    printf("|______________________________________________________________________|\n");
		    printf("|                         Lista de exercicios                          |\n");
		    printf("|                        qual gostaria de ver?                         |\n");
		    printf("|______________________________________________________________________|\n");
			printf("| Exercicio 1                 1 |[ %c ] \n", p1);
		    printf("| Exercicio 2                 2 |[ %c ] \n", p2);
		    printf("| Exercicio 3                 3 |[ %c ] \n", p3); 
		    printf("| Exercicio 4                 4 |[ %c ] \n", p4);
            printf("| Exercicio 5                 5 |[ %c ] \n", p5);
		    printf("| Exercicio 6                 6 |[ %c ] \n", p6);
		    printf("| Exercicio 7                 7 |[ %c ] \n", p7); 
		    printf("| Exercicio 8                 8 |[ %c ] \n", p8);
            printf("| Exercicio 9                 9 |[ %c ] \n", p9);
		    printf("| Exercicio 10               10 |[ %c ] \n", p10);
		    printf("| Exercicio 11               11 |[ %c ] \n", p11); 
		    printf("| Exercicio 12               12 |[ %c ] \n", p12);
            printf("| Exercicio 13               13 |[ %c ] \n", p13);	
			printf("| Sair do programa            0 | \n\n");	
			printf(" Opcao : ");
		    scanf("%d", &op);
		    
	switch(op) {
		
		case 0:
	    system("cls");
	    printf("|______________________________________________________________________|\n");
		printf("|                  Obrigador por olhar os exercicios!                  |\n");
		printf("|______________________________________________________________________|\n");
		break;
		
		case 1:
		quest();
		p1 = 'V';	
	    break;
	    	
	    case 2:
		quest2();
		p2 = 'V';	
	    break;	
	    
	    case 3:
		quest3();
		p3 = 'V';	
	    break;	
	    
	    case 4:
		quest4();
		p4 = 'V';	
	    break;	

        case 5:
		quest5();
		p5 = 'V';	
	    break;

        case 6:
		quest6();
		p6 = 'V';	
	    break;

        case 7:
		quest7();
		p7 = 'V';	
	    break;

        case 8:
		quest8();
		p8 = 'V';	
	    break;

        case 9:
		quest9();
		p9 = 'V';	
	    break;

        case 10:
		quest10();
		p10 = 'V';	
	    break;

        case 11:
		quest11();
		p11 = 'V';	
	    break;

        case 12:
		quest12();
		p12 = 'V';	
	    break;

        case 13:
		quest13();
		p13 = 'V';	
	    break;
		}
		}while (op!=0);
		system("PAUSE");	
 


    return 0;
}