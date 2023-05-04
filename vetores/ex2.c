/*Leia um vetor inteiro de 10 posições. Conte e escreva quantos valores pares ele
possui.
Entrada:Seu programa deve ter como entrada um vetor de 10 posições de números inteiros
positivos.
Saída:Seu programa deve ter como saída a quantidade de valores pares que a entrada possu*/
#include <stdio.h>
int main(){
    int vetor[10], i, pares=0;
    for(i=0;i<10;i++){
        scanf("%d", &vetor[i]);
    }
    for(i=0;i<10;i++){
        if(vetor[i]%2==0){
            pares++;
        }
    }
    printf("%d\n", pares);
    return 0;
}