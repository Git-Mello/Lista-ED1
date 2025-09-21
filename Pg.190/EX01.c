#include <stdio.h>

#define TAMANHO_VETOR 6

int main() {

    int numeros[TAMANHO_VETOR];
    int i;

    printf("Por favor, insira %d números inteiros:\n", TAMANHO_VETOR);
    for (i = 0; i < TAMANHO_VETOR; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    int contadorPares = 0;
    printf("\n--- Números Pares ---\n");

    for (i = 0; i < TAMANHO_VETOR; i++) {
        if (numeros[i] % 2 == 0) {
            printf("%d ", numeros[i]);
            contadorPares++;
        }
    }
    printf("\nQuantidade de números pares: %d\n", contadorPares);

    int contadorImpares = 0;
    printf("\n--- Números Ímpares ---\n");

    for (i = 0; i < TAMANHO_VETOR; i++) {
        if (numeros[i] % 2 != 0) {
            printf("%d ", numeros[i]);
            contadorImpares++;
        }
    }
    printf("\nQuantidade de números ímpares: %d\n", contadorImpares);

    return 0;
}