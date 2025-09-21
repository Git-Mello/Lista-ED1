#include <stdio.h>

#define TAMANHO_VETOR 5

int main() {
    int numeros[TAMANHO_VETOR];
    int soma = 0;
    int i;
    
    for (i = 0; i < TAMANHO_VETOR; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &numeros[i]);
        soma += numeros[i];
    }
    printf("\nOs números digitados foram: ");

    for (i = 0; i < TAMANHO_VETOR; i++) {
        printf("%d", numeros[i]);
        if (i < TAMANHO_VETOR - 1) {
            printf(" + ");
        }
    }
    printf(" = %d\n", soma);

    return 0;
}
