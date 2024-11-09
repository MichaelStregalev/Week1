#include "LinkedList.h"

Node* createNode(unsigned int value)
{
	Node* newNode = new Node(); // allocating memory for a new node

	newNode->next = nullptr; // reseting the next pointer to null
	newNode->value = value; // inputting the value

	return newNode; // returning the new node created
}

void addNode(Node** head, unsigned int value)
{
	Node* newNodeToAdd = createNode(value); // creating the new node to add

	if (!*head) // if the linked list is empty...
	{
		*head = newNodeToAdd; // return the new head of the linked list
	}
	else
	{	
		newNodeToAdd->next = *head; // making the newNode point to the previous head, making NewNodeToAdd the new head of the list.

		(*head) = newNodeToAdd; // updating that the new head is NewNodeToAdd
	}
}

void deleteNode(Node** head)
{
	Node* temp = *head; // temporary holding of the head node

	if (*head) // if the list is not empty..
	{
		*head = (*head)->next; // changing the new head to the node after the previous head
	}

	delete temp;
}

void printNodeList(Node** head)
{
	Node* curr = *head; // current node we are at - will be of use in the loop.

	if (*head) // if the list isn't empty
	{
		while (curr)
		{
			std::cout << curr->value << " "; // printing the value of the current node

			curr = curr->next; // going to the next node
		}
	}
}

void deleteList(Node** head)
{
	while (*head) // while the list isn't empty...
	{
		deleteNode(head); // delete the head of the node list
	}
}