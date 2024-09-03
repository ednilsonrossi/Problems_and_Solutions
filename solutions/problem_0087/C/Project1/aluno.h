#include <stdio.h>
#include <stdio_ext.h>
#include <string.h>
#include <strings.h>
#include <ctype.h>


struct prontuario{
    char campus[3];
    int sequencia;
};

struct aluno{
    struct prontuario n_prontuario;
    char nome[50];
};

typedef struct aluno TAluno;


TAluno novo_aluno(char sigla[3], int sequencia, char nome[50]);
TAluno scan_aluno();
void print_aluno(TAluno natan);