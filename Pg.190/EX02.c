#include <stdio.h>
#define TAMANHO_VETOR 7

int main() {
    int numeros[TAMANHO_VETOR];
    int i;
    
    printf("Por favor, insira %d números inteiros:\n", TAMANHO_VETOR);
    for (i = 0; i < TAMANHO_VETOR; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("\n--- Números Múltiplos de 2 ---\n");
    for (i = 0; i < TAMANHO_VETOR; i++) {
        if (numeros[i] % 2 == 0) {
            printf("%d ", numeros[i]);
        }
    }
    printf("\n");

    printf("\n--- Números Múltiplos de 3 ---\n");
    for (i = 0; i < TAMANHO_VETOR; i++) {
        if (numeros[i] % 3 == 0) {
            printf("%d ", numeros[i]);
        }
    }
    printf("\n");

    printf("\n--- Números Múltiplos de 2 e de 3 ---\n");
    for (i = 0; i < TAMANHO_VETOR; i++) {
        if ((numeros[i] % 2 == 0) && (numeros[i] % 3 == 0)) {
            printf("%d ", numeros[i]);
        }
    }
    printf("\n");

    return 0;
}