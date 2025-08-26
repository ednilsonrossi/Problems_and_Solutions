#include <stdlib.h>
#include <stdbool.h>
#include "ticket.h"

typedef struct queue* T_Queue;

typedef T_Ticket T_Info;

T_Queue initQueue(int max_size);

void destroyQueue(T_Queue queue);

bool isFull(T_Queue queue);

bool isEmpty(T_Queue queue);

bool enqueue(T_Queue queue, T_Info element);    // Entra na fila

bool dequeue(T_Queue queue, T_Info* elemento);  // Sai da fila