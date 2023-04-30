/*Fazer um programa para ler um n´umero inteiro n e calcular e exibir a soma dos n´umeros inteiros
de 1 a n*/
#include <stdio.h>
int main(){
    int n, i, soma=0;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        soma = soma + i;
    }
    printf("A soma dos numeros inteiros de 1 a %d eh %d", n, soma);
    return 0;
}