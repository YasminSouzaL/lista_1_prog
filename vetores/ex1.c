/*Leia um vetor inteiro de 10 posições. Escreva seus valores na saída.
Entrada:Seu programa deve ter como entrada um vetor de 10 posições de números inteiros
positivos.
Saída:Seu programa deve ter como saída os valores presentes nas posições do vetor*/

#include <stdio.h>
int main(){
    int vetor[10], i;
    for(i=0;i<10;i++){
        scanf("%d", &vetor[i]);
    }
    printf("\n");
    for(i=0;i<10;i++){
        printf("%d\n", vetor[i]);
    }
    return 0;
}