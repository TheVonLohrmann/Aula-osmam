#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void quest1(){

int ddd;

printf("|--------------------------------------------|\n");
printf("|                  bem-vindo                 |\n");
printf("|                ao disk rapido              |\n");
printf("|--------------------------------------------|\n");
printf("| Analisaremos se a conexao entre redes\n ");
printf("| Por favor o DDD do numero que dejesa falar:");
scanf("%d", &ddd);
switch (ddd)
{
case 61:
    printf("| Analise feita, conexao com: Brasilia");
    break;
case 71:
    printf("| Analise feita, conexao com: Salvador");
    break;    
case 11:
    printf("| Analise feita, conexao com: São Paulo");
    break;
case 21:
    printf("| Analise feita, conexao com: Rio de Janeiro");
    break;
case 32:
    printf("| Analise feita, conexao com: Juiz de Fora");
    break;
case 19:
    printf("| Analise feita, conexao com: Campinas");
    break;
case 27:
    printf("| Analise feita, conexao com: Vitória");
    break;
case 31:
    printf("| Analise feita, conexao com: Belo Horizonte");
    break;
default:
    printf("| Analise feita, conexao nao estabelecida, DDD nao encontrado");
    break;
}
}

void quest2(){
    float salario, emprestimo, mpar, presta, sala;

    printf("|-----------------------------------------------------|\n");
    printf("|                       bem-vindo                     |\n");
    printf("|          ao sistema de emprestimo bancario          |\n");
    printf("|-----------------------------------------------------|\n");
    printf("| Por favor digite o valor do emprestimo desejado:");
    scanf("%f", &emprestimo);
    printf("| Por favor digite o valor do seu salario:");
    scanf("%f", &salario);
    printf("| Por favor digite o numero de parcelas desejado:");
    scanf("%f", &mpar);

    presta = emprestimo/mpar;
    sala = 20/100*salario;

    if (presta > sala)
    {
        printf("| Emprestimo nao concedido!");
    } 
    else 
    {
        printf("| Emprestimo concedido!");
    }
}

void quest3(){
     int num1, num2, num3, nma, nme;
     printf("| Por favor digite 3 numeros:");
     scanf("%d",&num1);
     scanf("%d",&num2);
     scanf("%d",&num3);

     nme = num1;
     nma = num1;

     
     if (nme>num2)
     {
        nme=num2;
        printf("o maior numero:%d",nme);
     }
     if (nme>num3)
     {
        nme=num3;
        printf("o maior numero:%d",nme);
     }
     if (nma<num2)
     {
        nma = num2;
        printf("o maior numero:%d",nma);
     }
     if (nma<num3)
     {
        nma = num3;
        printf("o maior numero:%d",nma);
     }
     if(num1==num2==num3)
     {
       printf("| Os numeros sao iguais");
     }
}

void quest4(){
     
     float nota1, nota2, nota3, nota4, media;

     printf("| Por favor digite a nota 1:");
     scanf("%f", &nota1);
     printf("| Por favor digite a nota 2:");
     scanf("%f", &nota2);
     printf("| Por favor digite a nota 3:");
     scanf("%f", &nota3);
     printf("| Por favor digite a nota 4:");
     scanf("%f", &nota4);

     media = (nota1+nota2+nota3+nota4)/4;

     if (media >=0 && 3>=media)
     {
        printf("Reprovado");
     } if (media >= 3.1 && 6.9 >= media) {
        printf("recuperacao");
     } if (media>6.9){
        printf("Aprovado");
     }
}

int main(){
    char p1='F', p2='F', p3='F', p4='F';
    int op;
           do	{	
		
			
			printf("\n"); 
		    printf("|______________________________________________________________________|\n");
		    printf("|                         Lista de exercicios                          |\n");
		    printf("|                        qual gostaria de ver?                         |\n");
		    printf("|______________________________________________________________________|\n");
			printf("| Exercicio 1                1 |[ %c ] \n", p1);
		    printf("| Exercicio 2                2 |[ %c ] \n", p2);
		    printf("| Exercicio 3                3 |[ %c ] \n", p3); //por algum motivo ele esta quebrando
		    printf("| Exercicio 4                4 |[ %c ] \n", p4);	
			printf("| Sair do programa           0 | \n\n");	
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
		quest1();
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
				}
				
		}while (op!=0);
		system("PAUSE");	

    return 0;
}