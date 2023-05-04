/*Faça um vetor de tamanho 50 preenchido com o seguinte valor: (i+5*i) % (i+1), isto é,
cada elemento da posição i irá receber o valor resultado da expressão. Em seguida
imprima o vetor na tela.*/

#include <stdio.h>
int main(){
    int vetor[50], i;
    for(i=0;i<50;i++){
        vetor[i]=(i+5*i)%(i+1);
    }
    for(i=0;i<50;i++){
        printf("%d\n", vetor[i]);
    }
    return 0;
}