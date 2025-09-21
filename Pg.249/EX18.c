#include <stdio.h>

// Constante para a dimensão da matriz quadrada.
#define DIMENSAO 5

int main() {
    // Declaração da matriz para números reais (float).
    float matriz[DIMENSAO][DIMENSAO];
    int i, j; // Variáveis de controle para os laços.

    // Acumulador para a soma da diagonal secundária.
    float soma_diagonal_secundaria = 0.0f;

    // --- 1. Preenchimento da Matriz ---
    printf("--- Preenchimento da Matriz %d x %d ---\n", DIMENSAO, DIMENSAO);
    // A lógica de preenchimento com laços aninhados é descrita na Seção 7.3.5 do livro.
    for (i = 0; i < DIMENSAO; i++) {
        for (j = 0; j < DIMENSAO; j++) {
            printf("Digite o elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%f", &matriz[i][j]);
        }
    }

    // --- 2. Cálculo da Soma da Diagonal Secundária ---
    // Percorre a matriz para somar os elementos da diagonal secundária.
    // Um elemento [i][j] está na diagonal secundária se i + j == DIMENSAO - 1.
    for (i = 0; i < DIMENSAO; i++) {
        for (j = 0; j < DIMENSAO; j++) {
            if (i + j == DIMENSAO - 1) {
                soma_diagonal_secundaria += matriz[i][j];
            }
        }
    }

    // --- 3. Exibição do Resultado ---
    printf("\n--- Resultado ---\n");
    printf("A soma dos elementos da diagonal secundária é: %.2f\n", soma_diagonal_secundaria);

    return 0;
}