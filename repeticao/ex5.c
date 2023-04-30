/*Dado o valor de n, calcular:
 n! = 1 × 2 × 3 × ... × n*/
#include <stdio.h>
int main(){
    int n, i, fatorial=1;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        fatorial = fatorial * i;
    }
    printf("%d! = %d", n, fatorial);
    return 0;
}