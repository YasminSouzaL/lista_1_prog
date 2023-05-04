/*Faça um programa que receba do usuário dois
vetores, A e B, com 10 números inteiros cada. Crie
um novo vetor denominado C calculando C = A - B.
Mostre na tela os dados do vetor C.*/
#include <stdio.h>
int main(){
  int vetA[10],vetB[10],vetC[10],i,menor;
  for(i=0; i<10; i++){
    scanf("%d",&vetA[i]);
  }
  printf("\n");
  for(i=0; i<10; i++){
    scanf("%d",&vetB[i]);
  }
  printf("\n");
  for(i=0; i<10; i++){
    menor=vetA[i]-vetB[i];
    vetC[i]=menor;
  }
  for(i=0; i<10; i++){
    printf("%d\n",vetC[i]);
  }
}
