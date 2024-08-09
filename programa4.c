#include <stdio.h>
#include <stdlib.h>

int main(){
    int valores[5];
    int i = 0;
    int pares = 0;

    printf("insira 5 valores ao vetor: \n");
    for(i = 0; i < 5; i++){
        scanf("%d", &valores[i]);
    }
    for(i = 0; i < 5; i++){
        if(valores[i] % 2 == 0){
            pares++;
        }
    }
    printf("a quantidade de números pares armazenados no vetor foram: %d\n", pares);
}