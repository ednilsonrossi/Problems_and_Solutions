#include "estacionamento.h"

TEstacionamento criar_estacionamento(){
    TEstacionamento garage;
    garage.size = 0;
    return garage;
}

TEstacionamento entra_estacionamento(TEstacionamento garage, TCarro bubblebee){
    if (garage.size < MAXSIZE){
        garage.array[garage.size] = bubblebee;
        garage.size = garage.size + 1;
    }
    return garage;
}

void print_estacionamento(TEstacionamento garage){
    for(int i = 0; i < garage.size; i++){
        print_carro(garage.array[i]);
    }
}

TEstacionamento remover_posicao(TEstacionamento garage, int pos){
    for (int i = pos; i < garage.size - 1; i++){
        garage.array[i] = garage.array[i+1];
    }
    garage.size -= 1;
    return garage;
}

TEstacionamento sai_placa_estacionamento(TEstacionamento garage, char placa[8]){
    int i, pos = -1;
    i = 0;
    while (i < garage.size && pos == -1){
        if ( strcmp(garage.array[i].placa, placa) == 0){
            pos = i;
        }
        i++;
    }
    if (pos != -1){
        garage = remover_posicao(garage, pos);
    }
    return garage;
}

TEstacionamento sai_aluno_estacionamento(TEstacionamento garage, struct prontuario prontuario){
    int i, pos = -1;
    i = 0;
    while (i < garage.size && pos == -1){
        if ( strcmp(garage.array[i].motorista.n_prontuario.campus, prontuario.campus) == 0 && 
                                garage.array[i].motorista.n_prontuario.sequencia == prontuario.sequencia){
            pos = i;
        }
        i++;
    }
    if (pos != -1){
        garage = remover_posicao(garage, pos);
    }
    return garage;
}

