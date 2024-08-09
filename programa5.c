#include <stdio.h>
#include <stdlib.h>

int main(){
    int X[5];
    int i = 0;

    printf("insira 5 valores: \n");
    for(i = 0; i < 5; i++){
        scanf("%d", &X[i]);
    }
    int maior = X[0];
    int menor = X[0];
    for(i = 0; i < 5; i++){
        if(X[i] > maior){
            maior = X[i];
        }if(X[i] < menor){
            menor = X[i];
        }
    }
    printf("maior elemento do vetor: %d\n", maior);
    printf("menor elemento do vetor: %d\n", menor);
}