/* Segundo uma tabela m´edica, o peso ideal est´a relacionado com a altura e o sexo. Fazer um
algoritmo que receba a altura e o sexo de uma pessoa, calcule e imprima o seu peso ideal, utilizando as seguintes f´ormulas:
 para homens: 72.7 × h − 58
 para mulheres: 62.1 × h − 44.7*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    float altura, peso;
    char sexo;
    printf("Digite a altura: ");
    scanf("%f", &altura);
    printf("Digite o sexo: ");
    scanf("%s", &sexo);
    if (sexo == 'm') {
        peso = 72.7 * altura - 58;
    }else{
        peso = 62.1 * altura - 44.7;
    }
    printf("O peso ideal e: %.2f", peso);
    return 0;
}