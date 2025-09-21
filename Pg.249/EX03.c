#include <stdio.h>

#define NUM_LINHAS 6
#define NUM_COLUNAS 3

int main() {
    int matriz[NUM_LINHAS][NUM_COLUNAS];
    int i, j;
    
    printf("--- Preenchimento da Matriz %d x %d ---\n", NUM_LINHAS, NUM_COLUNAS);
    for (i = 0; i < NUM_LINHAS; i++) {
        for (j = 0; j < NUM_COLUNAS; j++) {
            printf("Digite o elemento da linha %d, coluna %d: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }
    int maior_elemento = matriz[0][0];
    int linha_maior = 0;
    int coluna_maior = 0;

    int menor_elemento = matriz[0][0];
    int linha_menor = 0;
    int coluna_menor = 0;
    for (i = 0; i < NUM_LINHAS; i++) {
        for (j = 0; j < NUM_COLUNAS; j++) {
            if (matriz[i][j] > maior_elemento) {
                maior_elemento = matriz[i][j];
                linha_maior = i;
                coluna_maior = j;
            }

            if (matriz[i][j] < menor_elemento) {
                menor_elemento = matriz[i][j];
                linha_menor = i;
                coluna_menor = j;
            }
        }
    }
    printf("\n--- Relatório da Matriz ---\n\n");
    printf("Maior elemento: %d\n", maior_elemento);
    printf("Posição: Linha %d, Coluna %d\n", linha_maior + 1, coluna_maior + 1);

    printf("\n");

    printf("Menor elemento: %d\n", menor_elemento);
    printf("Posição: Linha %d, Coluna %d\n", linha_menor + 1, coluna_menor + 1);

    return 0;
}
