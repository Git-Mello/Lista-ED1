#include <stdio.h>

#define DIMENSAO 3

void imprimirMatriz(float matriz[DIMENSAO][DIMENSAO]) {
    int i, j;
    for (i = 0; i < DIMENSAO; i++) {
        for (j = 0; j < DIMENSAO; j++) {
            printf("%.2f\t", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    float matrizOriginal[DIMENSAO][DIMENSAO];
    float matrizResultado[DIMENSAO][DIMENSAO];
    float multiplicador;
    
    int i, j;
    printf("--- Preenchimento da Matriz %d x %d ---\n", DIMENSAO, DIMENSAO);
    for (i = 0; i < DIMENSAO; i++) {
        for (j = 0; j < DIMENSAO; j++) {
            printf("Digite o elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%f", &matrizOriginal[i][j]);
        }
    }
    printf("\nDigite o valor numérico para a multiplicação: ");
    scanf("%f", &multiplicador);

    for (i = 0; i < DIMENSAO; i++) {
        for (j = 0; j < DIMENSAO; j++) {
            matrizResultado[i][j] = matrizOriginal[i][j] * multiplicador;
        }
    }
    printf("\n--- Matriz Resultante (após multiplicação por %.2f) ---\n", multiplicador);
    imprimirMatriz(matrizResultado);

    return 0;
}
