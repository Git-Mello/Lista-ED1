#include <stdio.h>

#define NUM_LINHAS 6
#define NUM_COLUNAS 4

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
    int matriz[NUM_LINHAS][NUM_COLUNAS];
    int i, j;

    printf("--- Preenchimento da Matriz %d x %d ---\n", NUM_LINHAS, NUM_COLUNAS);
    for (i = 0; i < NUM_LINHAS; i++) {
        for (j = 0; j < NUM_COLUNAS; j++) {
            printf("Digite o elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }
    for (i = 0; i < NUM_LINHAS; i++) {
        int maior_da_linha = matriz[i][0];
        for (j = 1; j < NUM_COLUNAS; j++) {
            if (matriz[i][j] > maior_da_linha) {
                maior_da_linha = matriz[i][j];
            }
        }

        for (j = 0; j < NUM_COLUNAS; j++) {
            matriz[i][j] = matriz[i][j] * maior_da_linha;
        }
    }
    printf("\n--- Matriz Resultante (após o recálculo) ---\n");
    imprimirMatriz(matriz);

    return 0;
}
