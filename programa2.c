#include <stdio.h>
#include <stdlib.h>

int main(){
    int valores[5];
    int i = 0;
    int soma = 0;
    for(i = 0; i < 5; i++){
        scanf("%d", &valores[i]);
        soma += valores[i];
    }
    float media = (float) soma / 5;
    for(i = 0; i < 5; i++){
        printf("%d\n", valores[i]);
    }
    printf("média dos valores: %.2f\n", media);
}