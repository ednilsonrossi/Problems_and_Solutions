#include <stdlib.h>
#include <stdbool.h>

typedef struct counter* T_Counter;

T_Counter createCounter(int number, bool isPriority);

int getCounterNumber(T_Counter conter);

bool isConterPriority(T_Counter counter);

void destroyCounter(T_Counter* counter);