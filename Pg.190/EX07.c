#include <stdio.h>
#define TAMANHO_VETOR 10

int main() {
    float numeros[TAMANHO_VETOR];
    int i;
    int quantidade_negativos = 0;
    float soma_positivos = 0.0f;

    printf("Por favor, insira %d números reais (ex: 5.5, -3.0, 7):\n", TAMANHO_VETOR);
    for (i = 0; i < TAMANHO_VETOR; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%f", &numeros[i]);
    }

    for (i = 0; i < TAMANHO_VETOR; i++) {
        if (numeros[i] < 0) {
            quantidade_negativos++;
        } 
        else if (numeros[i] > 0) {
            soma_positivos += numeros[i];
        }
    }
    printf("\n--- Resultados ---\n");
    printf("Quantidade de números negativos: %d\n", quantidade_negativos);
    printf("Soma dos números positivos: %.2f\n", soma_positivos);

    return 0;
}
