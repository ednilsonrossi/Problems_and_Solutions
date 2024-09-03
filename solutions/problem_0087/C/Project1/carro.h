#include "aluno.h"


struct carro{
    char marca[30];
    char modelo[30];
    char cor[15];
    char placa[8];
    TAluno motorista;
};

typedef struct carro TCarro;

TCarro scan_carro();
void print_carro(TCarro bubblebee);
