#include "LinkedList.h"

int main()
{

	std::cout << "Inputting the first number into a node list:" << std::endl;

	Node* head = createNode(8);

	printNodeList(&head);

	std::cout << std::endl;

	std::cout << "Inputting more numbers to show that the addition is to the head of the list:" << std::endl;

	addNode(&head, 9);
	addNode(&head, 10);
	addNode(&head, 11);
	addNode(&head, 12);

	printNodeList(&head);

	std::cout << std::endl;

	std::cout << "Removing nodes from the list - to show that the deletion is from the head of the list:" << std::endl;

	deleteNode(&head);
	deleteNode(&head);
	deleteNode(&head);

	printNodeList(&head);

	std::cout << std::endl;

	std::cout << "Deleting all the rest of the linked list:" << std::endl;

	deleteList(&head);

	printNodeList(&head);
}