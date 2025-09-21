#include <stdio.h>
#include <stdbool.h>

#define TAMANHO_VETOR 15
#define NUMERO_BUSCADO 30

int main() {
    int numeros[TAMANHO_VETOR];
    int i;
    bool encontrou = false;

    printf("Por favor, insira %d números inteiros:\n", TAMANHO_VETOR);
    for (i = 0; i < TAMANHO_VETOR; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("\nVerificando a existência do número %d...\n", NUMERO_BUSCADO);
    
    for (i = 0; i < TAMANHO_VETOR; i++) {
        if (numeros[i] == NUMERO_BUSCADO) {
            encontrou = true;
            printf("O número %d foi encontrado na posição: %d\n", NUMERO_BUSCADO, i + 1);
        }
    }

    if (!encontrou) {
        printf("O número %d não foi encontrado no vetor.\n", NUMERO_BUSCADO);
    }

    return 0;
}