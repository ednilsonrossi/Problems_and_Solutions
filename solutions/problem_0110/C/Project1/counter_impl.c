#include "counter.h"


struct counter {
    int number;
    bool isPriority;
};

T_Counter createCounter(int number, bool isPriority) {
    if (number < 1) {
        return NULL;
    }

    T_Counter counter = malloc(sizeof(struct counter));
    if (counter == NULL) {
        return NULL;
    }

    counter->number = number;
    counter->isPriority = isPriority;
    return counter;
}

void destroyCounter(T_Counter* counter) {
    if (*counter != NULL) {
        free(*counter);
        *counter = NULL;
    }
}

int getCounterNumber(T_Counter counter) {
    return counter->number;
}

bool isConterPriority(T_Counter counter) {
    return counter->isPriority;
}