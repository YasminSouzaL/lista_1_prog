/*Escreva um programa que leia 10 números
inteiros e os armazene em um vetor. Imprima o
vetor, o maior elemento e a posição que ele se
encontra*/

#include <stdio.h>
int main(){
    int i, n[10], maior, posicao;
    for(i=0; i<10; i++){
        printf("Digite o numero %d: ", i+1);
        scanf("%d", &n[i]);
    }
    maior = n[0];
    posicao = 0;
    for(i=0; i<10; i++){
        if(n[i]>maior){
            maior = n[i];
            posicao = i;
        }
    }
    printf("O maior numero eh %d e esta na posicao %d", maior, posicao);
    return 0;
}