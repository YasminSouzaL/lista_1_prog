/*Escreva um programa que escreva na tela de 1 em 1, de 1 at´e 100, 3 vezes. A primeira vez deve
usar a estrutura de repeti¸c˜ao for, a segunda while, e a terceira do while*/
#include <stdio.h>
int main(){
    int i;
    printf("Usando for:\n");
    for(i=1; i<=100; i++){
        printf("%d ", i);
    }
    printf("\nUsando while:\n");
    i = 1;
    while(i<=100){
        printf("%d ", i);
        i++;
    }
    printf("\nUsando do while:\n");
    i = 1;
    do{
        printf("%d ", i);
        i++;
    }while(i<=100);
    return 0;
}