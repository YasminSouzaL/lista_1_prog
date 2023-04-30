/* Chico tem 1.50 metros de altura e cresce 2 cent´ımetros por ano, enquanto Z´e tem 1.10 metros e
cresce 3 cent´ımetros por ano. Construa um algoritmo que calcule e imprima quantos anos ser˜ao
necess´arios para que Z´e seja maior que Chico*/
#include <stdio.h>
int main(){
    float chico = 1.5, ze = 1.1;
    int anos = 0;
    while(ze <= chico){
        chico = chico + 0.02;
        ze = ze + 0.03;
        anos++;
    }
    printf("Serao necessarios %d anos para Ze ser maior que Chico", anos);
    return 0;
}