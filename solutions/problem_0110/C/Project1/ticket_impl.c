#include "ticket.h"
#include <stdio.h>

struct ticket {
    char letter;
    int sequence;
};

T_Ticket createTicket(bool isPriority, int sequenceNumber) {
    if (sequenceNumber < 1 || sequenceNumber > 99999) {
        return NULL;
    }

    T_Ticket ticket = malloc(sizeof(struct ticket));
    if (ticket == NULL) {
        return NULL;
    }

    ticket->letter = isPriority ? 'P' : 'C';
    ticket->sequence = sequenceNumber;
    return ticket;
}

void destroyPassword(T_Ticket* ticket) {
    if (*ticket != NULL) {
        free(*ticket);
        *ticket = NULL;
    }
}


char* toString(T_Ticket ticket) {
    if (ticket == NULL) {
        return "Ticket error";
    }
    
    char* string = malloc(sizeof(char) * 8);
    sprintf(string, "%c-%d", ticket->letter, ticket->sequence);
    return string;
}