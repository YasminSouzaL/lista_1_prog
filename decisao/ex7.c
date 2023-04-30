/*Um comerciante comprou um produto e quer vendˆe-lo com um lucro de 45% se o valor da compra
for menor que R$20,00; caso contr´ario o lucro ser´a de 30%. Fazer um programa para ler o valor
do produto e imprimir o valor da venda.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    float valor, venda;
    printf("Digite o valor do produto: ");
    scanf("%f", &valor);
    if (valor < 20) {
        venda = valor * 1.45;
    }else{
        venda = valor * 1.30;
    }
    printf("O valor da venda e: %.2f", venda);
    return 0;
}