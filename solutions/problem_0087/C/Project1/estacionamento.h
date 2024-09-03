#include "carro.h"
#include <stdbool.h>
#define MAXSIZE 20

struct estacionamento {
    TCarro array[MAXSIZE];
    int size;
};

typedef struct estacionamento TEstacionamento;



TEstacionamento criar_estacionamento();

TEstacionamento entra_estacionamento(TEstacionamento garage, TCarro bubblebee);

void print_estacionamento(TEstacionamento garage);

TEstacionamento sai_placa_estacionamento(TEstacionamento garage, char placa[8]);

TEstacionamento sai_aluno_estacionamento(TEstacionamento garage, struct prontuario prontuario);
