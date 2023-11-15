#include "function_pointers.h"

/**
 * array_iterator - function that executes a function
 * giver as a parameter on each element of an array
 * @array: array
 * @size: size of the array
 * @action: function pointer
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action != NULL && array != NULL && size != 0)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
	else
		return;
}
