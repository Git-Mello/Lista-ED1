#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

#define NUM_PRODUTOS 5
#define TAMANHO_NOME 50
#define TAMANHO_BUFFER_TEMP 20

int main() {
    char nomes[NUM_PRODUTOS][TAMANHO_NOME];
    float precos[NUM_PRODUTOS];
    char buffer_temp[TAMANHO_BUFFER_TEMP];
    int i;
    printf("--- Cadastro de Produtos e Preços ---\n");
    for (i = 0; i < NUM_PRODUTOS; i++) {
        printf("Digite o nome do %dº produto: ", i + 1);
        fgets(nomes[i], TAMANHO_NOME, stdin);
        nomes[i][strcspn(nomes[i], "\n")] = 0;

        printf("Digite o preço de %s: ", nomes[i]);
        fgets(buffer_temp, TAMANHO_BUFFER_TEMP, stdin);
        precos[i] = atof(buffer_temp);
    }
    printf("\n--- Relatório de Produtos ---\n\n");
    int qtd_abaixo_50 = 0;
    for (i = 0; i < NUM_PRODUTOS; i++) {
        if (precos[i] < 50.0) {
            qtd_abaixo_50++;
        }
    }
    printf("Quantidade de produtos com preço inferior a R$ 50,00: %d\n", qtd_abaixo_50);
    printf("\nProdutos com preço entre R$ 50,00 e R$ 100,00:\n");
    bool encontrou_entre_50_100 = false;
    for (i = 0; i < NUM_PRODUTOS; i++) {
        if (precos[i] >= 50.0 && precos[i] <= 100.0) {
            printf("- %s\n", nomes[i]);
            encontrou_entre_50_100 = true;
        }
    }
    if (!encontrou_entre_50_100) {
        printf("- Nenhum produto encontrado nesta faixa de preço.\n");
    }
    float soma_acima_100 = 0.0f;
    int qtd_acima_100 = 0;
    for (i = 0; i < NUM_PRODUTOS; i++) {
        if (precos[i] > 100.0) {
            soma_acima_100 += precos[i];
            qtd_acima_100++;
        }
    }
    
    printf("\nMédia dos preços dos produtos superiores a R$ 100,00:\n");
    if (qtd_acima_100 > 0) {
        float media_acima_100 = soma_acima_100 / qtd_acima_100;
        printf("- A média de preços é: R$ %.2f\n", media_acima_100);
    } else {
        printf("- Nenhum produto encontrado com preço superior a R$ 100,00.\n");
    }

    return 0;
}
