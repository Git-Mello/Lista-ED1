#include <stdio.h>

#define NUM_LINHAS 3
#define NUM_COLUNAS 5
#define VALOR_MINIMO 15
#define VALOR_MAXIMO 20

int main() {
    int matriz[NUM_LINHAS][NUM_COLUNAS];
    int i, j;
    int contador = 0;

    printf("Por favor, preencha a matriz %d x %d com números inteiros:\n", NUM_LINHAS, NUM_COLUNAS);

    for (i = 0; i < NUM_LINHAS; i++) {
        for (j = 0; j < NUM_COLUNAS; j++) {
            printf("Digite o elemento da linha %d, coluna %d: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
            if (matriz[i][j] >= VALOR_MINIMO && matriz[i][j] <= VALOR_MAXIMO) {
                contador++;
            }
        }
    }
    printf("\n--- Resultado ---\n");
    printf("A quantidade de elementos entre %d e %d é: %d\n", VALOR_MINIMO, VALOR_MAXIMO, contador);

    return 0;
}
