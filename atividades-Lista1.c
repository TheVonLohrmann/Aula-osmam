#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void qs1(){

float custoM, custoF, despE, valorV, somaT, rT, lucro;

    printf("|______________________________________________________________________|\n");
	printf("|                       Calculadora de vendas                          |\n");
	printf("|______________________________________________________________________|\n");

    printf("| digite o custo da mercadoria:");
    scanf("%f", &custoM);
    printf("| digite o custo do frete:");
    scanf("%f", &custoF);
    printf("| digite despesas eventuais:");
    scanf("%f", &despE);
    printf("| o valor da venda:");
    scanf("%f", &valorV);

    somaT = custoF+custoM+despE;
    rT = valorV-somaT;
    lucro = 100*rT/valorV;
    
    printf("| A margem de lucro: %2.f %%\n", lucro);

    system("pause");
    system("cls");
}


void qs2(){

float pi = 3.14, raio, area;


    printf("|______________________________________________________________________|\n");
	printf("|                         Calculadora da area                          |\n");
	printf("|                              do circulo                              |\n");
	printf("|______________________________________________________________________|\n");
    printf("| por favor digite o valor do raio: ");
    scanf("%f", &raio );
    area = pi*(raio*raio);
    printf("| Area do circulo : %f\n", area);

    system("pause");
    system("cls");
}

void qs3(){

int lata=0;
float largura, altura, tamanho, rtmq;

  printf("|______________________________________________________________________|\n");
  printf("|                         Calculadora de latas                         |\n");
  printf("|                               de tinta                               |\n");
  printf("|______________________________________________________________________|\n");  
  printf("| por favor informe a largura da parede:");
  scanf("%f", &largura);
  printf("| por favor informe a altura da parede:");
  scanf("%f", &altura);
  
  tamanho = largura*altura;
  rtmq = 300*tamanho;

do{
lata += 1;
rtmq = rtmq-2000;
    }while( rtmq > 1);

  printf("| A quantidade de latas necessaria: %d\n", lata);
  
  system("pause");
  system("cls");
}

void qs4(){

float n1, n2, n3, n4, media, soma;

  printf("|______________________________________________________________________|\n");
  printf("|                         Calculadora de media                         |\n");
  printf("|                               de notas                               |\n");
  printf("|______________________________________________________________________|\n");

  printf("| por favor digite a primeira nota: ");
  scanf("%f", &n1);
  printf("| por favor digite a segunda nota: ");
  scanf("%f", &n2);
  printf("| por favor digite a terceira nota: ");
  scanf("%f", &n3);
  printf("| por favor digite a quarta nota: ");
  scanf("%f", &n4);

  soma = n1+n2+n3+n4;
  media = soma/4;

  printf("| a media das notas: %f\n", media);

  system("pause");
  system("cls");
}

int main(){
    int op=0;
char ql = 'f', qo = 'f', qr = 'f', qt = 'f';
do{

printf("\n");
    printf("|______________________________________________________________________|\n");
	printf("|                         Lista de exercicios                          |\n");
	printf("|                        qual gostaria de ver?                         |\n");
	printf("|______________________________________________________________________|\n");
    printf("| Questao 1                    1 |[ %c ] \n", ql);
    printf("| Questao 2                    2 |[ %c ] \n", qo);
    printf("| Questao 3                    3 |[ %c ] \n", qr);
    printf("| Questao 4                    4 |[ %c ] \n", qt);
    printf("| Sair do programa             0 |\n");
    printf("| Opicao : ");
    scanf("%d", &op);

switch (op)
    {
    case 0:
    system("cls");
	    printf("|______________________________________________________________________|\n");
		printf("|                  Obrigador por olhar as questoes !                   |\n");
		printf("|______________________________________________________________________|\n");
		break;
    case 1:
    system("cls");
    qs1();
    ql = 'v';
        break;
    case 2:
    system("cls");
    qs2();
    qo = 'v';
        break;
    case 3:
    system("cls");
    qs3();
    qr ='v';
        break;
    case 4:
    system("cls");
    qs4();
    qt='v';
        break;                
    }
  }while (op!=0);
    system("pause");
    return 0;
}

// aluno: lucas von lohrmann. Matricula: uc22103108