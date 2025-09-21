#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define NUM_ALUNOS 8
#define TAMANHO_NOME 50
#define TAMANHO_BUFFER_TEMP 20

int main() {
    char nomes[NUM_ALUNOS][TAMANHO_NOME];
    float notas[NUM_ALUNOS];
    char buffer_temp[TAMANHO_BUFFER_TEMP];
    float soma_notas = 0.0f;
    float media_classe;
    int i;
    
    for (i = 0; i < NUM_ALUNOS; i++) {
        printf("Digite o nome do %dº aluno: ", i + 1);
        fgets(nomes[i], TAMANHO_NOME, stdin);
        nomes[i][strcspn(nomes[i], "\n")] = 0;

        printf("Digite a nota de %s: ", nomes[i]);
        fgets(buffer_temp, TAMANHO_BUFFER_TEMP, stdin);
        notas[i] = atof(buffer_temp);
    }
    for (i = 0; i < NUM_ALUNOS; i++) {
        soma_notas += notas[i];
    }
    media_classe = soma_notas / NUM_ALUNOS;
    printf("\nRelatórios de notas\n");
    for (i = 0; i < NUM_ALUNOS; i++) {
        printf("%s %.1f\n", nomes[i], notas[i]);
    }
    
    printf("..\n");
    printf("..\n");
    printf("..\n");
    printf("Média da classe = %.2f\n", media_classe);

    return 0;
}