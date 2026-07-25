#ifndef QUEUE_H
#define QUEUE_H

class Queue
{
private:
    char *elements;
    int max_size;
    int size;
    int last;
    int first;

public:
    Queue(int max_size = 1);
    ~Queue();
    bool is_full() const;
    bool is_empty() const;
    bool enqueue(char element);
    bool dequeue(char *element);
    bool jumped_queue(char element);
};

#endif