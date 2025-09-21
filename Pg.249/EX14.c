#include <stdio.h>

#define NUM_LINHAS 2
#define NUM_COLUNAS 3
#define INTERVALO_MINIMO 5
#define INTERVALO_MAXIMO 15

int main() {
    int matriz[NUM_LINHAS][NUM_COLUNAS];
    int i, j;
    int contadorForaIntervalo = 0;
    
    printf("--- Preenchimento da Matriz %d x %d ---\n", NUM_LINHAS, NUM_COLUNAS);

    for (i = 0; i < NUM_LINHAS; i++) {
        for (j = 0; j < NUM_COLUNAS; j++) {
            printf("Digite o elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]); 
            if (matriz[i][j] < INTERVALO_MINIMO || matriz[i][j] > INTERVALO_MAXIMO) {
                contadorForaIntervalo++;
            }
        }
    }
    printf("\n--- Resultado ---\n");
    printf("A quantidade de elementos que NÃO pertencem ao intervalo [%d, %d] é: %d\n", 
           INTERVALO_MINIMO, INTERVALO_MAXIMO, contadorForaIntervalo);

    return 0;
}
