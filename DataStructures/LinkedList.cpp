#include "LinkedList.h"

Node* createNode(unsigned int value)
{
	Node* newNode = new Node; // allocating memory for a new node // removed () - unnecessary

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

unsigned int deleteNode(Node** head)
{
	Node* temp = *head; // temporary holding of the head node
	unsigned int popValue = -1; // representing the value that is held by the node that is going to be deleted
	// default popValue -> -1!

	if (*head) // if the list is not empty..
	{
		popValue = temp->value; // changed the location - since if a linked list was empty you can not access a nullptr.

		*head = (*head)->next; // changing the new head to the node after the previous head
	}

	delete temp;

	return popValue;
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