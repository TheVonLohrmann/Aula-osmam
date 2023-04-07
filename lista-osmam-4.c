#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void quest1(){
float soma = 0;
int i, j, matriz[4][4]=
                 {{45,32,83,95},
                  {26,14,37,42},
                  {40,43,65,77},
                  {74,79,48,55}};
   for (i = 0; i < 4; i++){
   for (j = 0; j < 4; j++){
    soma = soma + matriz[i][j];    
} 
}
printf("%f", soma/16);
}

void quest2(){
float soma = 0 ;
int i, j, matriz[4][4]=
                 {{45,32,83,95},
                  {26,14,37,42},
                  {40,43,65,77},
                  {74,79,48,55}};
for (i = 0; i < 4; i++)
{
    if (i==2)
    {
     for (j = 0; j < 4; j++)
     soma = soma + matriz[i][j];
    }  
}
printf("soma: %f", soma);
}

void quest3(){
float mult = 1 ;
int i, j, matriz[4][4]=
                 {{45,32,83,95},
                  {26,14,37,42},
                  {40,43,65,77},
                  {74,79,48,55}};
for(j = 0; j < 4; j++){
    if (j==1)
    {
    for (i = 0; i < 4; i++){
      mult = mult * matriz[i][j];  
    }
    }
}
printf("mult: %f", mult);
}

void quest4(){
float soma = 0 ;
int i, j, matriz[4][4]=
                 {{45,32,83,95},
                  {26,14,37,42},
                  {40,43,65,77},
                  {74,79,48,55}};
for (i = 0; i < 4; i++)
{
    if (i==1 || i==3)
    {
     for (j = 0; j < 4; j++)
     soma = soma + matriz[i][j];
    }  
}
printf("soma: %f", soma);
}


int main(){
   
quest4();


    return 0;
}