#include "Queue.h"

void initQueue(Queue* q, unsigned int size)
{
	int i = 0; // loop variable

	q->queueArray = new unsigned int[size]; // the q will now have an initialized dynamic array of unsigned ints
	q->size = size; // the q will now have the size initialized

	// we will now initialize the queue array with values of 0 - in order to prevent junk values.

	for (i = 0; i < q->size; i++) // going through all of the queue array
	{
		q->queueArray[i] = EMPTY_SPOT; // inputting the empty spot into all of the cells of the queue array
	}
}

void cleanQueue(Queue* q)
{
	int i = 0; // loop variable

	for (i = 0; i < q->size; i++) // going through all of the queue array
	{
		q->queueArray[i] = EMPTY_SPOT; // inputting empty spots into all of the cells of the queue array
	}
}

void enqueue(Queue* q, unsigned int newValue)
{
	int i = 0; // loop variable
	bool flag = false; // flag variable - if we found an empty spot - change to true.
	// prevents inputting the same value into all the empty spots in the queue array - and to only one.

	for (i = q->size - 1; i >= 0 && !flag; i--) // going from the start of the line to the end of the line - reversed
	{
		if (q->queueArray[i] == EMPTY_SPOT) // if the spot is empty - place the new value in it
		{
			q->queueArray[i] = newValue;
			flag = true;
		}
	}
}

int dequeue(Queue* q)
{
	int i = 0; // flag variable
	int dequeuedValue = EMPTY_SPOT; // the value that just got out of the queue - default value is the empty spot

	if (isEmpty(q)) // if the queue is empty - return -1
	{
		return -1;
	}

	dequeuedValue = q->queueArray[q->size - 1]; // getting the first value in the queue array

	for (i = q->size - 1; i > 0; i--) // changing the values in the queue array accordingly
	{
		q->queueArray[i] = q->queueArray[i - 1]; // each value goes up in the queue
	}

	q->queueArray[0] = EMPTY_SPOT; // the last spot will now be empty!

	return dequeuedValue;
}

bool isEmpty(Queue* s)
{
	int i = 0; // loop variable

	for (i = 0; i < s->size; i++) // going through the whole queue array
	{
		if (s->queueArray[i] != EMPTY_SPOT) // if the value in the queue array ISNT an empty spot - the queue array ISN'T empty.
		{
			return false; // the queue array isn't empty!
		}
	}

	return true; // if until now the function didn't end - the queue array is empty - all values are 0.
}

bool isFull(Queue* s)
{
	int i = 0; // loop variable

	for (i = 0; i < s->size; i++) // going through the whole queue array
	{
		if (s->queueArray[i] == EMPTY_SPOT) // if there is a value of an empty spot in the queue array - the queue array IS NOT FULL!
		{
			return false; // found an empty spot - the queue isn't full.
		}
	}

	return true; // if the function didn't end until now - the queue array is full.
}