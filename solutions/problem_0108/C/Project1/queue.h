#include <stdlib.h>
#include <stdbool.h>

typedef struct queue* T_Queue;

typedef char T_Info;

T_Queue init(int max_size);

void destroy(T_Queue queue);

bool is_full(T_Queue queue);

bool is_empty(T_Queue queue);

bool enqueue(T_Queue queue, T_Info element);    // Entra na fila

bool dequeue(T_Queue queue, T_Info* element);  // Sai da fila

bool jumped_queue(T_Queue queue, T_Info element);  // Furar a fila
