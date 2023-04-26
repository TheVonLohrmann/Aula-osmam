#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define DIFERENCA(a,b,c,d) (a*b-c*d)
#define PI 3.14159


void quest(){
    int A, B, C, D, diferenca;

    printf("| digite o numero da variavel A : ");
    scanf("%d", &A);
    printf("| digite o numero da variavel B : ");
    scanf("%d", &B);
    printf("| digite o numero da variavel C : ");
    scanf("%d", &C);
    printf("| digite o numero da variavel D : ");
    scanf("%d", &D);

    diferenca = DIFERENCA(A,B,C,D);
    printf("DIFERENCA = (%d * %d - %d * %d)\n", A, B, C, D);
    printf("DIFERENCA = %d\n", diferenca);
    system("pause");
    system("cls");
}

// sqrt() é a função que calcula a raiz quadrada.
// A função pow() é usada para elevar uma base à uma potência.

void quest2(){
    float x[2], y[2], distancia;
    int i;

    printf("| digite as cordenadas x e y do primeiro conjunto\n");
    for ( i = 0; i < 2; i++)
    {
        scanf("%f", &x[i]);
    }
    printf("| digite as cordenadas x e y do segundo conjunto\n");
    for ( i = 0; i < 2; i++)
    {
        scanf("%f", &y[i]);
    }

    distancia = sqrt(pow(x[0] - x[1], 2) + pow(y[0] - y[1], 2));
    printf("| A distancia entre os pontos (%.2f, %.2f) e (%.2f, %.2f) eh %.4f\n", x[0], y[0], x[1], y[1], distancia);
    system("pause");
    system("cls");
}

void quest3(){
    float R, area, volume;
    printf("| digite o raio da esfera: ");
    scanf("%f", &R);

    volume = (4/3.0) * PI * pow(R,3);
    area = 4 * PI * pow(R,2);

    printf("| O raio digitado: %.2f\n", R);
    printf("| o resultado da area: %.4f\n", area);
    printf("| o resultado do volume: %.4f\n", volume);
    system("pause");
    system("cls");
}

void quest4(){
    float x[2];
    int i;

    printf("| digite as cordenadas x e y\n");
    for ( i = 0; i < 2; i++)
    {
        scanf("%f", &x[i]);
    }

    if (x[0] == 0 && x[1] == 0)
    {
        printf("| Origem\n");
    } else if (x[0] == 0){
        printf("| eixo y\n");
    } else if (x[1] == 0){
        printf("| eixo x\n");
    } else if (x[0] > 0 && x[1] > 0) {
        printf("| Q1\n");
    } else if (x[0] < 0 && x[1] > 0) {
        printf("| Q2\n");
    } else if (x[0] < 0 && x[1] < 0) {
        printf("| Q3\n");
    } else {
        printf("| Q4\n");
    }
    system("pause");
    system("cls");
}

void quest5(){
    int num, i;
    printf("| por favor digite um numero: ");
    scanf("%d", &num);
    printf("| verificando os divisores...\n");
    printf("| os divisores de %d sao: ", num);
    for ( i = 1; i <= num; i++){
       if (num % i == 0) {
            printf("(%d) ", i);
        }
    }
    system("pause");
    system("cls");
}

int main(){
    char p1='F', p2='F', p3='F', p4='F', p5='F';
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
		}
		}while (op!=0);
		system("PAUSE");
    return 0;
}