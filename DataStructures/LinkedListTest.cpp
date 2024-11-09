#include "LinkedList.h"

int main()
{
	unsigned int popOne = 0; // introducing variables which will hold the values of the deleted nodes - like a pop function.
	unsigned int popTwo = 0;
	unsigned int popThree = 0;

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

	popOne = deleteNode(&head);
	popTwo = deleteNode(&head);
	popThree = deleteNode(&head);

	printNodeList(&head);

	std::cout << std::endl;

	std::cout << "Printing all of the values of the nodes that were just deleted - pop values:" << std::endl;

	std::cout << "First pop was: " << popOne << std::endl;
	std::cout << "Second pop was: " << popTwo << std::endl;
	std::cout << "Third pop was: " << popThree << std::endl;

	std::cout << std::endl;

	std::cout << "Deleting all the rest of the linked list:" << std::endl;

	deleteList(&head);

	printNodeList(&head);
}