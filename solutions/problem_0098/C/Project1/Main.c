#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>


struct aluno {
    char nome[50];
    float media;
    int faltas;
};

typedef struct aluno T_Aluno;

/**
 * Função realiza a leitura dos dados de um aluno e retorna uma variável
 * com os dados lidos.
 */
T_Aluno ler() {
    T_Aluno aluno;                                      // A variável aluno é declarada no escopo da função, assim, é retornada
                                                        // uma cópia dessa variável para a chamada da função.

    __fpurge(stdin);
    printf("Nome: ");
    fgets(aluno.nome, 50, stdin);
    aluno.nome[strcspn(aluno.nome, "\n")] = '\0';       // o fgets() encerra a string com '\n', porém o printf() imprime até o '\0', assim altera-se o \n pelo \0.
    
    printf("Média: ");
    scanf("%f", &aluno.media);

    printf("Faltas: ");
    scanf("%d", &aluno.faltas);

    return aluno;
}

/**
 * Método de classificação InserSort implementado utilizando
 * aritmética de ponteiros, além disso, a função utiliza como
 * campo de ordenação decrescente a média de T_Aluno.
 */
void sort(T_Aluno *dataset, int n) {
    T_Aluno elemento_auxiliar;
    T_Aluno *ptr;

    dataset++;
    for (int i = 1; i < n; i++, dataset++) {
        elemento_auxiliar = *dataset;

        ptr = dataset - 1;
        for(int j = i - 1; j >= 0 && ptr->media < elemento_auxiliar.media; j--, ptr--) {
            *(ptr + 1) = *ptr;
        }
        *(ptr + 1) = elemento_auxiliar;
    }
}

int main() {
    int n;
    T_Aluno *dataset;
    T_Aluno *aux;

    printf("Quantidade de alunos: ");
    scanf("%d", &n);

    dataset = malloc(sizeof(struct aluno) * n);

    aux = dataset;
    for (int i = 0; i < n; i++) {
        *aux = ler();
        aux ++;
    }

    sort(dataset, n);

    printf("Relatório:\n");
    aux = dataset;
    for (int i = 0; i < n; i++) {
        printf("[%s \t %f \t %d]\n", aux->nome, aux->media, aux->faltas);
        aux ++;
    }

    return 0;
}
