#include "queue.h"

Queue::Queue(int max_size) 
    :   max_size(max_size), 
        last(-1), 
        first(0), 
        size(0) {

    if (this->max_size < 1) {
        this->max_size = 1;
    }

    this->elements = new char[this->max_size];
}

Queue::~Queue() {
    delete [] this->elements;
}

bool Queue::is_full() const {
    return this->size == this->max_size;
}

bool Queue::is_empty() const {
    return this->size == 0;
}

bool Queue::enqueue(char element){
    if (is_full()){
        return false;
    }

    this->last += 1;
    if (this->last == this->max_size) {
        this->last = 0;
    }
    this->elements[this->last] = element;
    this->size += 1;
    return true;
}

bool Queue::dequeue(char *element){
    if (is_empty()){
        element = nullptr;
        return false;
    }

    *element = this->elements[this->first];
    this->first += 1;
    if (this->first == this->max_size) {
        this->first = 0;
    }
    this->size -= 1;
    return true;
}
    
bool Queue::jumped_queue(char element) {
    if (is_full()) {
        return false;
    }

    this->first -= 1;
    if (this->first == -1) {
        this->first = this->max_size - 1;
    }
    this->elements[this->first] = element;
    this->size += 1;
    return true;
}