/*Escrever um programa para determinar quantas pessoas acima de 18 anos tem uma estatura
superior a 1,60 metros. O usu´ario dever´a informar a idade e o peso de cada pessoa. O programa
deve terminar quando o usu´ario informar um valor negativo para a idade*/
#include <stdio.h>
int main(){
    int i, idade, n, cont=0;
    float peso, estatura;
    printf("Digite a quantidade de pessoas: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        printf("Digite a idade da pessoa %d: ", i);
        scanf("%d", &idade);
        if(idade<0){
            break;
        }
        printf("Digite o peso da pessoa %d: ", i);
        scanf("%f", &peso);
        printf("Digite a estatura da pessoa %d: ", i);
        scanf("%f", &estatura);
        if(idade>18 && estatura>1.6){
            cont++;
        }
    }
    printf("A quantidade de pessoas com mais de 18 anos e estatura superior a 1,60 eh %d", cont);
    return 0;
}