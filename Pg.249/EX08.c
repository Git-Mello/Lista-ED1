#include <stdio.h>

#define NUM_LINHAS 3
#define NUM_COLUNAS 8

void imprimirMatriz(int matriz[NUM_LINHAS][NUM_COLUNAS]) {
    int i, j;
    for (i = 0; i < NUM_LINHAS; i++) {
        for (j = 0; j < NUM_COLUNAS; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrizA[NUM_LINHAS][NUM_COLUNAS];
    int matrizB[NUM_LINHAS][NUM_COLUNAS];
    int matrizSoma[NUM_LINHAS][NUM_COLUNAS];
    int matrizDiferenca[NUM_LINHAS][NUM_COLUNAS];
    int i, j;
    
    printf("--- Preenchimento da Matriz A ---\n");
    for (i = 0; i < NUM_LINHAS; i++) {
        for (j = 0; j < NUM_COLUNAS; j++) {
            printf("Digite o elemento A[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrizA[i][j]);
        }
    }
    printf("\n--- Preenchimento da Matriz B ---\n");
    for (i = 0; i < NUM_LINHAS; i++) {
        for (j = 0; j < NUM_COLUNAS; j++) {
            printf("Digite o elemento B[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrizB[i][j]);
        }
    }
    for (i = 0; i < NUM_LINHAS; i++) {
        for (j = 0; j < NUM_COLUNAS; j++) {
            matrizSoma[i][j] = matrizA[i][j] + matrizB[i][j];
            matrizDiferenca[i][j] = matrizA[i][j] - matrizB[i][j];
        }
    }
    printf("\n--- Matriz Resultante (Soma de A + B) ---\n");
    imprimirMatriz(matrizSoma);

    printf("\n--- Matriz Resultante (Diferença de A - B) ---\n");
    imprimirMatriz(matrizDiferenca);

    return 0;
}
