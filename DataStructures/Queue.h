#ifndef QUEUE_H
#define QUEUE_H

#define EMPTY_SPOT -1


/* a queue contains positive integer values. */
typedef struct Queue
{
	unsigned int* queueArray;
	unsigned int size;
	
} Queue;

void initQueue(Queue* q, unsigned int size);
void cleanQueue(Queue* q);

void enqueue(Queue* q, unsigned int newValue);
int dequeue(Queue* q); // return element in top of queue, or -1 if empty

bool isEmpty(Queue* s);
bool isFull(Queue* s);

#endif /* QUEUE_H */