#include <stdio.h>

#define NUM_LINHAS 2
#define NUM_COLUNAS 4
#define VALOR_MINIMO 12
#define VALOR_MAXIMO 20

int main() {
    int matriz[NUM_LINHAS][NUM_COLUNAS];
    int i, j;
    int qtd_por_linha[NUM_LINHAS] = {0};
    int soma_pares = 0;
    int contador_pares = 0;

    printf("--- Preenchimento da Matriz %d x %d ---\n", NUM_LINHAS, NUM_COLUNAS);
    for (i = 0; i < NUM_LINHAS; i++) {
        for (j = 0; j < NUM_COLUNAS; j++) {
            printf("Digite o elemento da linha %d, coluna %d: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < NUM_LINHAS; i++) {
        for (j = 0; j < NUM_COLUNAS; j++) {
            if (matriz[i][j] >= VALOR_MINIMO && matriz[i][j] <= VALOR_MAXIMO) {
                qtd_por_linha[i]++;
            }
            if (matriz[i][j] % 2 == 0) {
                soma_pares += matriz[i][j];
                contador_pares++;
            }
        }
    }

    printf("\n--- Relatório de Análise ---\n\n");

    for (i = 0; i < NUM_LINHAS; i++) {
        printf("Quantidade de elementos entre %d e %d na linha %d: %d\n", 
               VALOR_MINIMO, VALOR_MAXIMO, i + 1, qtd_por_linha[i]);
    }

    printf("\n");
    if (contador_pares > 0) {
        float media_pares = (float)soma_pares / contador_pares;
        printf("A média dos elementos pares da matriz é: %.2f\n", media_pares);
    } else {
        printf("Nenhum número par foi encontrado na matriz.\n");
    }

    return 0;
}
