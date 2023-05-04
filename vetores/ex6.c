/*Leia um vetor de char de 10 posições. Em seguida mostre apenas as vogais lidas e
depois mostre apenas as consoantes lidas.
Entrada:Seu programa deve ter como entrada um vetor de 10 posições de caracteres.
Saída:Seu programa deve ter como saída as vogais lidas pela entrada*/

#include <stdio.h>
int main(){
    char vetor[10];
    int i;
    for(i=0;i<10;i++){
        scanf("%c", &vetor[i]);
    }
    for(i=0;i<10;i++){
        if(vetor[i]=='a' || vetor[i]=='e' || vetor[i]=='i' || vetor[i]=='o' || vetor[i]=='u'){
            printf("%c ", vetor[i]);
        }
    }
    printf("\n");
    for(i=0;i<10;i++){
        if(vetor[i]!='a' && vetor[i]!='e' && vetor[i]!='i' && vetor[i]!='o' && vetor[i]!='u'){
            printf("%c ", vetor[i]);
        }
    }
    printf("\n");
    return 0;
}