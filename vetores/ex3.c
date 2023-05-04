/*Codifique, compile e execute um programa na linguagem C que leia 10 números
inteiros quaisquer no intervalo de [0, 9] e armazene em um vetor.
Caso o usuário digite um valor fora do intervalo de [0, 9] o programa deve insistir até que
seja fornecido um valor válido, entre 0 e 9 (do while).
Em seguida, calcule/exiba a quantidade de números 2, 3 e 5 presentes na sequência.
(utilize a estrutura de decisão switch).
Entrada:Seu programa terá como entrada um vetor de 10 posições de números inteiros e
positivos.
Saída:A saída de seu programa deverá ser a quantidade de números 2, 3 e 5 presentes no seu
vetor de entrada, separados por um espaçamento e sem pulo de linha.*/
#include <stdio.h>
int main(){
    int vetor[10], i, dois=0, tres=0, cinco=0;
    for(i=0;i<10;i++){
        do{
            scanf("%d", &vetor[i]);
        }while(vetor[i]<0 || vetor[i]>9);
    }
    for(i=0;i<10;i++){
        switch(vetor[i]){
            case 2:
                dois++;
                break;
            case 3:
                tres++;
                break;
            case 5:
                cinco++;
                break;
        }
    }
    printf("%d %d %d\n", dois, tres, cinco);
    return 0;
}