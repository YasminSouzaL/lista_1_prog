/*Dado o valor de n, calcular a soma dos n primeiros termos de S:
S = 1 +1/2+1/4+1/6+1/8+...*/
#include <stdio.h>
int main(){
    int n, i;
    float soma=0;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        soma = soma + 1.0/i;
    }
    printf("S = %f", soma);
    return 0;
}