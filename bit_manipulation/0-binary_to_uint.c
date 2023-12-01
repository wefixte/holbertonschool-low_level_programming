#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: pointeur to a string of 0 and 1 chars
 * Return: the converted number or 0 if fail
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int value = 0;
	unsigned int index = 0;

	if (b == NULL)
		return (0);

	while (b[index] != '\0')
	{
		if (b[index] != '0' && b[index] != '1')
			return (0);

		else if (b[index] == '0')
			value = (value << 1);

		else if (b[index] == '1')
			value = (value << 1) | 1;

		index++;
	}
	return (value);
}
