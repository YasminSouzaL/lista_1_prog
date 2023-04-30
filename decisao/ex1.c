/*Escreva um algoritmo para ler a primeira letra de dois times de futebol e o n´umero de gols
marcados por cada time na partida. O algoritmo deve imprimir a letra do time vencedor, caso
n˜ao haja vencedor dever´a ser impresso EMPATE*/

#include <stdio.h>
int main(){
    char time1, time2;
    int gol1, gol2;
    printf("Digite a primeira letra do time 1: ");
    scanf("%c", &time1);
    printf("Digite a primeira letra do time 2: ");
    scanf(" %c", &time2);
    printf("Digite o numero de gols do time 1: ");
    scanf("%d", &gol1);
    printf("Digite o numero de gols do time 2: ");
    scanf("%d", &gol2);
    if(gol1 > gol2){
        printf("O time %c venceu!", time1);
    }
    else if(gol2 > gol1){
        printf("O time %c venceu!", time2);
    }
    else{
        printf("EMPATE!");
    }
    return 0;
}
