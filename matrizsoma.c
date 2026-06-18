#include <stdio.h>
#include <stdlib.h>

int main() {
    int A[3][3], B[3][3], C[3][3];
    int i, j;

    for(i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++){
            printf("Digite um numero: ");
            scanf("%d", &A[i][j]);
        }
    }

    for(i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            printf("Digite um numero: ");
            scanf("%d", &B[i][j]);
        }
    }
    
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    for(i=0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    system("pause");
    return 0;
}