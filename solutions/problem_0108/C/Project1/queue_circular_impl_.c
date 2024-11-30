#include "queue.h"

struct queue {
    T_Info* elements;
    int maxsize;
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
        queue->maxsize = max_size;
        queue->elements = malloc (sizeof(T_Info) * queue->maxsize);
        if (queue->elements == NULL) {
            free(queue);
            queue = NULL;
        } else {
            queue->first = 0; 
            queue->last = -1;
            queue->size = 0;
        }
    }

    return queue;
}

void destroy(T_Queue queue) {
    free(queue->elements);
    free(queue);
}

bool is_full(T_Queue queue) {
    return queue->size == queue->maxsize;
}

bool is_empty(T_Queue queue) {
    return queue->size == 0;
}

bool enqueue(T_Queue queue, T_Info element) {
    if (queue == NULL) {
        return false;
    }

    if (!is_full(queue)) {
        queue->last += 1;
        if (queue->last == queue->maxsize) {
            queue->last = 0;
        }
        queue->elements[queue->last] = element;
        queue->size += 1;
        return true;
    }

    return false;
}

bool dequeue(T_Queue queue, T_Info* element) {
    if (queue != NULL) {
        if (!is_empty(queue)) {
            *element = queue->elements[queue->first];
            queue->first += 1;
            if (queue->first == queue->maxsize) {
                queue->first = 0;
            }
            queue->size -= 1;
            return true;
        }
    }

    return false;
}

bool jumped_queue(T_Queue queue, T_Info element) {
    if (queue != NULL) {
        if (!is_full(queue)) {
            queue->first = queue->first - 1;
            if (queue->first == -1) {
                queue->first = queue->maxsize - 1;
            }
            queue->elements[queue->first] = element;
            queue->size += 1;
            return true;
        }
    }

    return false;
}