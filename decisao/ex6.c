/*
Escrever um programa que leia as medidas dos lados de um triˆangulo, e exiba a classifica¸c˜ao do
triˆangulo quanto aos lados.
 Equil´atero: todos os lados iguais
 Is´osceles: dois lados de tamanhos iguais.
 Escaleno: trˆes lados com medidas diferentes
*/
#include <stdio.h>
int main(){
    int lado1, lado2, lado3;
    printf("Digite o primeiro lado: ");
    scanf("%d", &lado1);
    printf("Digite o segundo lado: ");
    scanf("%d", &lado2);
    printf("Digite o terceiro lado: ");
    scanf("%d", &lado3);
    if(lado1 == lado2 && lado1 == lado3){
        printf("Equilátero:Todos os lados iguais");
    }
    else if(lado1 == lado2 || lado1 == lado3 || lado2 == lado3){
        printf("Isósceles:Dois lados de tamanhos iguais");
    }
    else{
        printf("Escaleno:Três lados com medidas diferentes");
    }
    return 0;
}