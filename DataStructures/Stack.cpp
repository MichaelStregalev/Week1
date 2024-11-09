#include "Stack.h"

void initStack(Stack* s)
{
	s->head = nullptr; // initializing the head of the stack to be null
}

void cleanStack(Stack* s)
{
	deleteList(&(s->head)); // deleting all of the list inside the stack
	s->head = nullptr; // reseting the head to be null
}

void push(Stack* s, unsigned int element)
{
	addNode(&(s->head), element); // adding a node to the head of the list
}

int pop(Stack* s)
{
	return deleteNode(&(s->head)); // returning the value of the deleted node (which was the head)
}

bool isEmpty(Stack* s)
{
	return (s->head == nullptr); // if the head of the stack is null - the stack is empty..
}

bool isFull(Stack* s)
{
	return (s->head != nullptr); // if the head of the stack ISNT null - the stack is full.
}