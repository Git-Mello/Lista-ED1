#include <stdio.h>
#include <stdbool.h>

#define TAMANHO_LOGICA 15
#define TAMANHO_LP 10

int main() {
    int matriculas_logica[TAMANHO_LOGICA];
    int matriculas_lp[TAMANHO_LP];
    int i, j;
    
    printf("--- Cadastro de Alunos de Lógica ---\n");
    for (i = 0; i < TAMANHO_LOGICA; i++) {
        printf("Digite a matrícula do %dº aluno: ", i + 1);
        scanf("%d", &matriculas_logica[i]);
    }

    printf("\n--- Cadastro de Alunos de Linguagem de Programação ---\n");
    for (i = 0; i < TAMANHO_LP; i++) {
        printf("Digite a matrícula do %dº aluno: ", i + 1);
        scanf("%d", &matriculas_lp[i]);
    }

    printf("\n--- Matrículas de alunos que cursam AMBAS as disciplinas ---\n");
    
    bool encontrou_comum = false;
    
    for (i = 0; i < TAMANHO_LOGICA; i++) {
        for (j = 0; j < TAMANHO_LP; j++) {
            if (matriculas_logica[i] == matriculas_lp[j]) {
                printf("%d\n", matriculas_logica[i]);
                encontrou_comum = true;
                break; 
            }
        }
    }
    if (!encontrou_comum) {
        printf("Nenhum aluno foi encontrado cursando as duas disciplinas simultaneamente.\n");
    }

    return 0;
}