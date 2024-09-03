#include "estacionamento.h"

int main(){
    char continuar;
    int opcao;
    TEstacionamento estacionamento;

    estacionamento = criar_estacionamento();

    do{
        printf("1 - Estacionar carro\n");
        printf("2 - Listar os carros da garagem\n");
        printf("3 - Sair carro por placa\n");
        printf("4 - Sair carro por aluno\n");
        printf("Opção: ");
        scanf("%d", &opcao);
        __fpurge(stdin);

        switch (opcao) {
            case 1:
                TCarro bubblebee = scan_carro();
                estacionamento = entra_estacionamento(estacionamento, bubblebee);
                break;

            case 2:
                print_estacionamento(estacionamento);
                break;

            case 3:
                char placa[8];
                printf("Informar a placa: ");
                fgets(placa, 8, stdin);
                __fpurge(stdin);
                placa[strcspn(placa, "\n")] = '\0';

                estacionamento = sai_placa_estacionamento(estacionamento, placa);
                break;

            case 4: 
                char sigla[3];
                printf("Sigla do campus.: ");
                scanf("%s", sigla);
                __fpurge(stdin);
                sigla[0] = toupper(sigla[0]);
                sigla[1] = toupper(sigla[1]);

                int seq;
                printf("Sequencia.......: ");
                scanf("%d", &seq);
                __fpurge(stdin);

                struct prontuario pront;
                strcpy(pront.campus, sigla);
                pront.sequencia = seq;
                estacionamento = sai_aluno_estacionamento(estacionamento, pront);
                break;
        }

        printf("Encerrar sistema (s/N): ");
        continuar = getchar();
        __fpurge(stdin);
        continuar = toupper(continuar);
    } while (continuar != 'S');

    return 0;
}
