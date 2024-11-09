#include "Utils.h"
#include "Stack.h"

void reverse(int* nums, unsigned int size)
{
	int i = 0; // loop variable
	Stack stackOfReversedArray = {}; // introducing a stack! Will help us reverse the array.

	initStack(&stackOfReversedArray); // initializing the stack

	for (i = 0; i < size; i++) // going through the nums array
	{
		push(&stackOfReversedArray, nums[i]); // pushing the elements of the array into the stack
	}

	// Now - we have a stack full of the elements in the nums array - but reversed!

	for (i = 0; i < size; i++) // going through the nums array
	{
		nums[i] = pop(&stackOfReversedArray); // inputting the values in the stack into the nums array.
		// this means that if the stack is reversed - the values that will be inputted into the array is
		// the same values it had - but in reverse order!
	}
}

int* reverse10()
{
	int i = 0; // loop variable

	int* reversedArray = new int[AMOUNT_OF_SCANS]; // introducing the array that will be reversed at the end of the function.

	std::cout << "Enter " << AMOUNT_OF_SCANS << " numbers:" << std::endl;

	for (i = 0; i < AMOUNT_OF_SCANS; i++) // going through all of the array
	{
		std::cout << "Number " << i + 1 << ":" << std::endl;
		std::cin >> reversedArray[i]; // inputting into each cell of the array
	}

	reverse(reversedArray, AMOUNT_OF_SCANS); // reversing the array

	return reversedArray; // returning the reversed array!
}