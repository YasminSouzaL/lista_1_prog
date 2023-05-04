/*Faça um programa que receba do usuário dois
vetores, A e B, com n números reais cada. Crie
quatro novos vetores que receberão a soma,
subtração, multiplicação e divisão dos vetores
anteriores*/
#include <stdio.h>
int main(){
   float vetA[10],vetB[10],vetC[10],vetD[10],vetE[10],vetF[10],i;
    for(i=0; i<10; i++){
      scanf("%f",&vetA[i]);
    }
    printf("\n");
    for(i=0; i<10; i++){
      scanf("%f",&vetB[i]);
    }
    printf("\n");
    for(i=0; i<10; i++){
      vetC[i]=vetA[i]+vetB[i];
      vetD[i]=vetA[i]-vetB[i];
      vetE[i]=vetA[i]*vetB[i];
      vetF[i]=vetA[i]/vetB[i];
    }
    for(i=0; i<10; i++){
      printf("Soma: %.2f\n",vetC[i]);
      printf("Subtracao: %.2f\n",vetD[i]);
      printf("Multiplicacao: %.2f\n",vetE[i]);
      printf("Divisao: %.2f\n",vetF[i]);
    }
    return 0;
}