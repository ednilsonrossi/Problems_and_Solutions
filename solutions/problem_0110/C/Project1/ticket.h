#include <stdlib.h>
#include <stdbool.h>

typedef struct ticket* T_Ticket;

T_Ticket createTicket(bool isPriority, int sequenceNumber);

void destroyTicket(T_Ticket* pass);

char* toString(T_Ticket pass);