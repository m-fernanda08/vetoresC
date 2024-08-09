#include <stdio.h>
#include <stdlib.h>

int main(){
    int A[6] = {1, 0, 5, -2, -5, 7};
    int i = 0;
    int soma;
    soma = A[0] + A[1] + A[5];
    A[4] = 100;
    printf("soma dos arrays: %d\n", soma);
    for(i = 0; i < 6; i++) {
        printf("%d\n", A[i]);
    }
}