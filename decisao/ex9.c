/*Escrever um programa que obtem um n´umero e imprime a sua imagem pela fun¸c˜ao
f(x) =



1 , se x ≤ 1
2 , se 1 < x ≤ 2
x
2
, se 2 < x ≤ 5
x
3
, se x ≥ 5
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    float x, y;
    printf("Digite o valor de x: ");
    scanf("%f", &x);
    if (x <= 1) {
        y = 1;
    }else if (x <= 2) {
        y = 2;
    }else if (x <= 5) {
        //y = pow(x, 2);
          y= x*x;
    }else{
        //y = pow(x, 3);
        y= x*x*x;
    }
    printf("O valor de y e: %.2f", y);
    return 0;
}
