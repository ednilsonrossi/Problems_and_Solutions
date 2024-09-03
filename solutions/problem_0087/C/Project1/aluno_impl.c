#include "aluno.h"

TAluno scan_aluno(){
    TAluno variavel;
    printf("Novo aluno:\n");
    
    printf("Sigla do campus.: ");
    scanf("%s", variavel.n_prontuario.campus);
    __fpurge(stdin);

    variavel.n_prontuario.campus[0] = toupper(variavel.n_prontuario.campus[0]);
    variavel.n_prontuario.campus[1] = toupper(variavel.n_prontuario.campus[1]);

    printf("Sequencia.......: ");
    scanf("%d", &variavel.n_prontuario.sequencia);
    __fpurge(stdin);

    printf("Nome do aluno...: ");
    fgets(variavel.nome, 50, stdin);
    __fpurge(stdin);
    variavel.nome[strcspn(variavel.nome, "\n")] = '\0';

    return variavel;
}

TAluno novo_aluno(char sigla[3], int sequencia, char nome[50]){
    TAluno variavel;
    strcpy(variavel.n_prontuario.campus, sigla);
    variavel.n_prontuario.sequencia = sequencia;
    strcpy(variavel.nome, nome);
    return variavel;
}

void print_aluno(TAluno natan){
    printf("> %s%d - %s",
        natan.n_prontuario.campus, 
        natan.n_prontuario.sequencia,
        natan.nome);
}