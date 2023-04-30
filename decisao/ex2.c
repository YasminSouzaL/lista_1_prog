/*Um fazendeiro vai contratar uma equipe de trabalhadores para a colheita de laranjas de sua
fazenda. Os trabalhadores ser˜ao identificados por um n´umero. O fazendeiro pagar´a aos trabalhadores no final do dia conforme a quantidade de caixas colhidas segundo a tabela baixo*/
/*N´umero da caixa R$ por caixa
At´e 5 2,00
De 6 a 10 2,50
De 11 a 20 3,50
21 ou mais 5,00*/
/*Fa¸ca um programa que leia o n´umero do trabalhador e a quantidades de caixa colhidas e imprima
seu n´umero e seu sal´ario di´ario.
*/
#include <stdio.h>
int main(){
    int num, caixas;
    float salario;
    printf("Digite o numero do trabalhador: ");
    scanf("%d", &num);
    printf("Digite a quantidade de caixas colhidas: ");
    scanf("%d", &caixas);
    if(caixas <= 5){
        salario = caixas * 2.0;
    }
    else if(caixas <= 10){
        salario = caixas * 2.5;
    }
    else if(caixas <= 20){
        salario = caixas * 3.5;
    }
    else{
        salario = caixas * 5.0;
    }
    printf("O trabalhador %d recebeu R$ %.2f", num, salario);
    return 0;
}
