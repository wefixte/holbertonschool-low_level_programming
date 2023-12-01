#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 * @n: pointer to number
 * @index: index
 * Return: 1 if it worked, or -1 if an error occurred
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int size = sizeof(n) * 8;
	unsigned int bitmask;

	if (index > size)
		return (-1);

	bitmask = 1 << index;
	*n = *n | bitmask;
	return (1);
}
