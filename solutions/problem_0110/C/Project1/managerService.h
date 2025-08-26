#include <stdlib.h>
#include <stdbool.h>
#include "counter.h"

typedef struct management* T_Management;


T_Management createManager();

void destroyManager(T_Management* manager);

char* includeClient(T_Management manager, bool isPriority);

char* callClient(T_Management manager, T_Counter counter);