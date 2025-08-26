#include <stdio.h>
#include "managerService.h"
#include "counter.h"


int main(int argc, char const *argv[]) {
    
    T_Management manager = createManager();


    int option;
    do {
        printf("MENU\n");
        printf("1. Nova senha normal\n");
        printf("2. Nova senha prioritária\n");
        printf("3. Chamar cliente\n");
        printf("0. Encerrar o sistema\n");
        printf("Seleção: ");
        scanf("%d", &option);

        if (option == 1) {
            printf("Senha gerada: %s.\nAguarde ser chamado.\n", includeClient(manager, false));
        } else if (option == 2) {
            printf("Senha prioritária gerada: %s.\nAguarde ser chamado.\n", includeClient(manager, true));
        } else if (option == 3) {
            int number;
            int prio;

            printf("Informações do caixa:\n");
            printf("Caixa prioritário (1. sim / 0, NÃO): ");
            scanf("%d", &prio);
            printf("Caixa número: ");
            scanf("%d", &number);

            T_Counter counter = createCounter(number, prio == 1 ? true : false);
            printf("ATENÇÃO:\n%s\n", callClient(manager, counter));
            destroyCounter(&counter);
        }

        
    } while (option != 0);

    destroyManager(&manager);
    printf("Obrigado por utilizar o sistema.");

    return 0;
}
