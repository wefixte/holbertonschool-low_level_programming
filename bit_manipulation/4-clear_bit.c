#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @n: pointer to number
 * @index: index
 * Return: 1 if it worked, or -1 if an error occurred
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bitmask;
	unsigned int size = sizeof(n) * 8 - 1;

	if (index > size)
		return (-1);

	bitmask = 1 << index;
	*n = *n & ~bitmask;

	return (1);
}
