#include <stdio.h>
#define NUM_LINHAS 3
#define NUM_COLUNAS 4

int main() {
    int matriz[NUM_LINHAS][NUM_COLUNAS];
    int i, j;
    int quantidadePares = 0;
    int somaImpares = 0;
    int somaTotal = 0;
    
    printf("--- Preenchimento da Matriz %d x %d ---\n", NUM_LINHAS, NUM_COLUNAS);
    
    for (i = 0; i < NUM_LINHAS; i++) {
        for (j = 0; j < NUM_COLUNAS; j++) {
            printf("Digite o elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);

            somaTotal += matriz[i][j];

            if (matriz[i][j] % 2 == 0) {
                quantidadePares++;
            } else {
                somaImpares += matriz[i][j];
            }
        }
    }
    int totalDeElementos = NUM_LINHAS * NUM_COLUNAS;
    float mediaTotal = (float)somaTotal / totalDeElementos;
    printf("\n--- Relatório da Matriz ---\n");
    printf("Quantidade de elementos pares: %d\n", quantidadePares);
    printf("Soma dos elementos ímpares: %d\n", somaImpares);
    printf("Média de todos os elementos: %.2f\n", mediaTotal);

    return 0;
}
