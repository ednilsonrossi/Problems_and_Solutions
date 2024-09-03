#include "carro.h"

TCarro scan_carro(){
    TCarro variavel;
    printf("Novo Carro: \n");
    
    printf("Marca..: ");
    fgets(variavel.marca, 30, stdin);
    __fpurge(stdin);
    variavel.marca[strcspn(variavel.marca, "\n")] = '\0';

    printf("Modelo.: ");
    fgets(variavel.modelo, 30, stdin);
    __fpurge(stdin);
    variavel.modelo[strcspn(variavel.modelo, "\n")] = '\0';

    printf("Cor....: ");
    fgets(variavel.cor, 15, stdin);
    __fpurge(stdin);
    variavel.cor[strcspn(variavel.cor, "\n")] = '\0';

    printf("Placa..: ");
    fgets(variavel.placa, 8, stdin);
    __fpurge(stdin);
    variavel.placa[strcspn(variavel.placa, "\n")] = '\0';

    variavel.motorista = scan_aluno();

    return variavel;
}

void print_carro(TCarro bubblebee){
    printf("> %s / %s \n", bubblebee.placa, bubblebee.cor);
    printf("> %s / %s\n", bubblebee.marca, bubblebee.modelo);
    print_aluno(bubblebee.motorista);
    printf("\n--------------------\n");

}