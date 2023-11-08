#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - function that create an array of chars
 * @size: size of the array
 * @c: spectific char
 * Return: NULL or pointer to the array
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *array;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);
	/**allocate memory to have 'size' number of char*/
	if (array == NULL)
		return (NULL);
	for (; i < size; i++)
		array[i] = c;
	return (array);
	free(array);
}
