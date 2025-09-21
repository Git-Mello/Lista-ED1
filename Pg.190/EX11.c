#include <stdio.h>

#define TAMANHO_VETOR 10

int main() {
    int numeros[TAMANHO_VETOR];
    int pares[TAMANHO_VETOR];
    int impares[TAMANHO_VETOR];
    int i;
    int contadorPares = 0;
    int contadorImpares = 0;

    printf("Por favor, insira %d números inteiros:\n", TAMANHO_VETOR);
    for (i = 0; i < TAMANHO_VETOR; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &numeros[i]);
    }
    for (i = 0; i < TAMANHO_VETOR; i++) {
        if (numeros[i] % 2 == 0) {
            pares[contadorPares] = numeros[i];
            contadorPares++;
        } else {
            impares[contadorImpares] = numeros[i];
            contadorImpares++;
        }
    }
    printf("\n--- Vetor de Pares ---\n");
    if (contadorPares == 0) {
        printf("Nenhum número par foi digitado.\n");
    } else {
        
        for (i = 0; i < contadorPares; i++) {
            printf("%d ", pares[i]);
        }
        printf("\n");
    }

    printf("\n--- Vetor de Ímpares ---\n");
    if (contadorImpares == 0) {
        printf("Nenhum número ímpar foi digitado.\n");
    } else {
        for (i = 0; i < contadorImpares; i++) {
            printf("%d ", impares[i]);
        }
        printf("\n");
    }

    return 0;
}
