#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

#define NUM_ALUNOS 7
#define TAMANHO_NOME 50
#define TAMANHO_BUFFER_TEMP 20
#define MEDIA_APROVACAO 7.0
#define MEDIA_EXAME 5.0

int main() {
    char nomes[NUM_ALUNOS][TAMANHO_NOME];
    float medias[NUM_ALUNOS];
    char buffer_temp[TAMANHO_BUFFER_TEMP];
    int i;
    printf("--- Cadastro de Notas de Alunos ---\n");
    for (i = 0; i < NUM_ALUNOS; i++) {
        printf("Digite o nome do %dº aluno: ", i + 1);
        fgets(nomes[i], TAMANHO_NOME, stdin);
        nomes[i][strcspn(nomes[i], "\n")] = 0;

        printf("Digite a média final de %s: ", nomes[i]);
        fgets(buffer_temp, TAMANHO_BUFFER_TEMP, stdin);
        medias[i] = atof(buffer_temp);
    }
    printf("\n--- Análise de Desempenho ---\n");
    
    float maiorMedia = medias[0];
    int indiceMaiorMedia = 0;

    for (i = 1; i < NUM_ALUNOS; i++) {
        if (medias[i] > maiorMedia) {
            maiorMedia = medias[i];
            indiceMaiorMedia = i;
        }
    }
    printf("Aluno com a maior média: %s (Média: %.2f)\n", nomes[indiceMaiorMedia], maiorMedia);
    printf("\n--- Alunos em Exame Final ---\n");
    bool algumAlunoEmExame = false;

    for (i = 0; i < NUM_ALUNOS; i++) {
        if (medias[i] < MEDIA_APROVACAO) {
            algumAlunoEmExame = true;
            float notaNecessaria = (MEDIA_EXAME * 2) - medias[i];
            
            printf("%s (média %.2f) precisa tirar %.2f no exame final para ser aprovado.\n", 
                   nomes[i], medias[i], notaNecessaria);
        }
    }

    if (!algumAlunoEmExame) {
        printf("Todos os alunos foram aprovados diretamente!\n");
    }

    return 0;
}