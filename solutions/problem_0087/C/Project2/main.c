#include <stdio.h>
#include <stdio_ext.h>
#include <string.h>
#include <strings.h>
#include <ctype.h>
#define MAXSIZE 20

struct carro{
    char marca[30];
    char modelo[30];
    char cor[15];
    char placa[8];
    int prontuario_motorista;
    char nome_motorista[50];
};

typedef struct carro TCarro;

int main(){
    TCarro array_estacionamento[MAXSIZE];   // Array que armazena todos os carros dentro do estacionamento.
    int carros_estacionados;                // Variável de controle do estacionamento.
    int opcao;

    carros_estacionados = 0;                // Define que no momento existe zero carros no estacionamento.

    do{
        printf("1 - Estacionar carro\n");
        printf("2 - Listar os carros da garagem\n");
        printf("3 - Sair carro por placa\n");
        printf("4 - Sair carro por aluno\n");
        printf("0 - Sair do sistema\n");
        printf("Opção: ");
        scanf("%d", &opcao);
        __fpurge(stdin);

        if (opcao == 1){

            if (carros_estacionados < MAXSIZE) {
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

                printf("Prontuario.......: ");
                scanf("%d", &variavel.prontuario_motorista);
                __fpurge(stdin);

                printf("Nome do aluno...: ");
                fgets(variavel.nome_motorista, 50, stdin);
                __fpurge(stdin);
                variavel.nome_motorista[strcspn(variavel.nome_motorista, "\n")] = '\0';

                array_estacionamento[carros_estacionados] = variavel;
                carros_estacionados += 1;
            } else {

                printf("*** Estacionamento cheio. ***\n");

            }
            
        } else if (opcao == 2) {

            for(int i = 0; i < carros_estacionados; i++){
                printf("> %s / %s \n", array_estacionamento[i].placa, array_estacionamento[i].cor);
                printf("> %s / %s\n", array_estacionamento[i].marca, array_estacionamento[i].modelo);
                printf("> %s (%d)", array_estacionamento[i].nome_motorista, array_estacionamento->prontuario_motorista);
                printf("\n--------------------\n");
            }

        } else if (opcao == 3) {

            char placa[8];
            printf("Informar a placa: ");
            fgets(placa, 8, stdin);
            __fpurge(stdin);
            placa[strcspn(placa, "\n")] = '\0';

            int i, pos = -1;
            i = 0;
            while (i < carros_estacionados && pos == -1) {
                if ( strcmp(array_estacionamento[i].placa, placa) == 0){
                    pos = i;
                }
                i++;
            }
            if (pos != -1) {
                for (i = pos; i < carros_estacionados - 1; i++){
                    array_estacionamento[i] = array_estacionamento[i+1];
                }
                carros_estacionados -= 1;
            }

        } else if (opcao == 4) {
            int pront;
            printf("Prontuário.: ");
            scanf("%d", &pront);
            __fpurge(stdin);

            int i, pos = -1;
            i = 0;
            while (i < carros_estacionados && pos == -1){
                if ( array_estacionamento[i].prontuario_motorista == pront){
                    pos = i;
                }
                i++;
            }
            if (pos != -1){
                for (i = pos; i < carros_estacionados - 1; i++){
                    array_estacionamento[i] = array_estacionamento[i+1];
                }
                carros_estacionados -= 1;
            }
    
        }

    } while (opcao != 0);

    return 0;
}
