#include <stdio.h>

#define NUM_LINHAS_DADOS 6
#define NUM_COLUNAS 10
#define NUM_LINHAS_TOTAL (NUM_LINHAS_DADOS + 1)

void imprimirMatriz(int matriz[NUM_LINHAS_TOTAL][NUM_COLUNAS]) {
    int i, j;
    for (i = 0; i < NUM_LINHAS_TOTAL; i++) {
        if (i == NUM_LINHAS_DADOS) {
            printf("---------------------------------------------------------------------------------------------\n");
            printf("Linha 7 (SOMA):\t");
        } else {
            printf("Linha %d:\t", i + 1);
        }
        
        for (j = 0; j < NUM_COLUNAS; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matriz[NUM_LINHAS_TOTAL][NUM_COLUNAS];
    int i, j;
    printf("--- Preenchimento da Matriz %d x %d ---\n", NUM_LINHAS_DADOS, NUM_COLUNAS);
    for (i = 0; i < NUM_LINHAS_DADOS; i++) {
        for (j = 0; j < NUM_COLUNAS; j++) {
            printf("Digite o elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }
    for (j = 0; j < NUM_COLUNAS; j++) {
        int soma_coluna = 0;
        for (i = 0; i < NUM_LINHAS_DADOS; i++) {
            soma_coluna += matriz[i][j];
        }
        matriz[NUM_LINHAS_DADOS][j] = soma_coluna;
    }
    printf("\n--- Matriz com a soma das colunas na 7ª linha ---\n");
    imprimirMatriz(matriz);

    return 0;
}
