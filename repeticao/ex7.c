/*Fazer um programa para calcular e exibir o valor de S, dado por
S=1/1-2/4+3/9-4/16+5/25+...-10/100
*/
#include <stdio.h>
int main(){
    int i;
    float soma=0;
    for(i=1; i<=10; i++){
        if(i%2==0){
            soma = soma - (float)i/(i*i);
        }else{
            soma = soma + (float)i/(i*i);
        }
    }
    printf("S = %f", soma);
    return 0;
}