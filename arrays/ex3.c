/*Faça um programa que leia um vetor de 20
posições, mostre a quantidade de valores repetidos
e quais são os valores.*/

#include <stdio.h>
int main(){
    int i, j, vet[20], repetidos[20], cont=0;
    for(i=0; i<20; i++){
        scanf("%d", &vet[i]);
    }
    for(i=0; i<20; i++){
        for(j=i+1; j<20; j++){
            if(vet[i]==vet[j]){
                repetidos[cont] = vet[i];
                cont++;
            }
        }
    }
    printf("Foram encontrados %d numeros repetidos: ", cont);
    for(i=0; i<cont; i++){
        printf("%d ", repetidos[i]);
    }
    return 0;
}
