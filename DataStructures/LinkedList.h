#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <iostream>

/* a linked list that contains positive integer values. */
typedef struct Node
{
	unsigned int value;
	Node* next;

} Node;

/*
This function creates a node and resets it with the following:
next = nullptr
value = the value which was given in the parameters

Returns the node that was created
*/
Node* createNode(unsigned int value);

/*
This function gets the double pointer of the head of the linked list, and a value.

This functions creates a new node with the new value given, and links it as the new head of the linked list -
and also changes the head to be the new node created.
*/
void addNode(Node** head, unsigned int value);

/*
This functions gets the double pointer of the head of the linked list.

This function is responsible for the deletion of the head node of the linked list, and updating the head of the linked list
the the next node after the head.

This function returns the value that was held by the node that was just deleted.

****The function also releases the memory used****

*/
unsigned int deleteNode(Node** head);

/*
This function gets the double pointer of the head of the linked list.

This function is responsible for printing the linked list.
*/
void printNodeList(Node** head);

/*
This function gets the double pointer of the head of the linked list.

This function is responsible for deleting all of the linked list.
*/
void deleteList(Node** head);

#endif /* LINKED_LIST_H */