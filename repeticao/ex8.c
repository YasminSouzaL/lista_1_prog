/*Escrever um programa para calcular a soma dos pesos das pessoas com mais de trinta anos. O
usu´ario dever´a informar a quantidade de pessoas e a idade e o peso de cada pessoa*/
#include <stdio.h>
int main(){
    int i, n, idade;
    float peso, soma=0;
    printf("Digite a quantidade de pessoas: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        printf("Digite a idade da pessoa %d: ", i);
        scanf("%d", &idade);
        printf("Digite o peso da pessoa %d: ", i);
        scanf("%f", &peso);
        if(idade>30){
            soma = soma + peso;
        }
    }
    printf("A soma dos pesos das pessoas com mais de 30 anos eh %f", soma);
    return 0;
}