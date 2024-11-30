#include "queue.h"

struct queue {
    T_Info* elements;
    int size;
    int last;
    int first;
};

T_Queue init(int max_size) {
    if (max_size < 1) {
        return NULL;
    }

    T_Queue queue = malloc( sizeof(struct queue) );
    if (queue != NULL) {
        queue->size = max_size;
        queue->elements = malloc (sizeof(T_Info) * queue->size);
        if (queue->elements == NULL) {
            free(queue);
        } else {
            queue->first = 0; 
            queue->last = -1;
        }
    }

    return queue;
}

void destroy(T_Queue queue) {
    free(queue->elements);
    free(queue);
}

bool is_full(T_Queue queue) {
    return queue->last == queue->size - 1;
}

bool is_empty(T_Queue queue) {
    return queue->first > queue->last;
}

bool enqueue(T_Queue queue, T_Info element) {
    if (queue == NULL) {
        return false;
    }

    if (is_full(queue)) {
        if (queue->first != 0) {
            int space = queue->first;
            for (int i = 0; i < queue->size; i++) {
                queue->elements[i] = queue->elements[space + i];
            }
            queue->first = 0;
            queue->last = queue->last - space;
        }
    }

    if (!is_full(queue)) {
        queue->last += 1;
        queue->elements[queue->last] = element;
        return true;
    } 

    return false;
}

bool dequeue(T_Queue queue, T_Info* elemento) {
    if (queue != NULL) {
        if (!is_empty(queue)) {
            *elemento = queue->elements[queue->first];
            queue->first += 1;
            return true;
        }
    }

    return false;
}