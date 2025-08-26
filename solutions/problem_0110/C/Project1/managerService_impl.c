#include "managerService.h"
#include "queue.h"
#include "ticket.h"
#include <stdio.h>

struct management {
    T_Queue defaultQueue;
    T_Queue priorityQueue;
    int lastPasswordSequence;
};


T_Management createManager() {
    T_Management manager = malloc(sizeof(struct management));
    if (manager == NULL)
        return NULL;

    manager->defaultQueue = initQueue(200);
    manager->priorityQueue = initQueue(100);
    manager->lastPasswordSequence = 0;

    return manager;
}

void destroyManager(T_Management* manager) {
    if (*manager != NULL) {
        destroyQueue( (*manager)->defaultQueue);
        destroyQueue( (*manager)->priorityQueue);
        free(*manager);
        *manager = NULL;
    }
}

char* includeClient(T_Management manager, bool isPriority) {
    if (manager == NULL) {
        return "ERROR";
    }

    manager->lastPasswordSequence++;
    T_Ticket client = createTicket(isPriority, manager->lastPasswordSequence);

    if (isPriority) {
        enqueue(manager->priorityQueue, client);
    } else {
        enqueue(manager->defaultQueue, client);
    }

    return toString(client);
}

char* callClient(T_Management manager, T_Counter counter) {

    if (manager == NULL || counter == NULL) {
        return "ERROR";
    }

    T_Ticket client = NULL;
    if (isConterPriority(counter)) {
        dequeue(manager->priorityQueue, &client);
    }

    if (client == NULL) {
        dequeue(manager->defaultQueue, &client);
    }

    char* string = malloc(sizeof(char) * 42);
    sprintf(string, "Senha: %s - Dirija-se ao Caixa: %d", toString(client), getCounterNumber(counter));
    return string;

}