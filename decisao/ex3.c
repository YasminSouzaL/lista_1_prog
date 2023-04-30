/*A prefeitura do Rio de Janeiro abriu uma linha de cr´edito para os funcion´arios estatut´arios. O
valor m´aximo da presta¸c˜ao n˜ao poder´a ultrapassar 30% do sal´ario bruto. Fazer um algoritmo
que permita entrar com o sal´ario bruto e o valor da presta¸c˜ao e informar se o empr´estimo pode
ou n˜ao ser concedido.*/

#include <stdio.h>
int main(){
    float salario, prestacao;
    printf("Digite o salario bruto: ");
    scanf("%f", &salario);
    printf("Digite o valor da prestacao: ");
    scanf("%f", &prestacao);
    if(prestacao > (salario * 0.3)){
        printf("Emprestimo nao pode ser concedido!");
    }
    else{
        printf("Emprestimo pode ser concedido!");
    }
    return 0;
}