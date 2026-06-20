#include <stdio.h>
#include <stdlib.h>

int main() {
    int A[4][4];
    int i, j;
    int coluna, linha;
    int maiorValor;

    for(i =0; i < 4; i++){
        for(j=0; j < 4; j++){
            printf("Digite um numero: ");
            scanf("%d", &A[i][j]);
        }
    }

    maiorValor =A[0][0];
    linha = 0;
    coluna = 0;

    for(i =0; i < 4; i++){
        for(j = 0; j < 4; j++){
            if(A[i][j] > maiorValor){
                maiorValor = A[i][j];
                linha = i;
                coluna = j;
            }
        }
    }

    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("%d", A[i][j]);
        }
        printf("\n");
    }

    printf("O maior valor encontrado: %d\n", maiorValor);
    printf("Ele esta na linha: %d, Coluna: %d\n", linha, coluna);

    system("pause");
    return 0;
}
