#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - function that creates an array of integers
 * @min: valeur minimale
 * @max: valeur maximale
 * Return: NULL or array
*/

int *array_range(int min, int max)
{
	int *array, i, width;

	if (min > max)
		return (NULL);

	width = max - min + 1;
	array = malloc(sizeof(int) * width);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < width; i++)
		array[i] = min + i;
	/**nb consécutifs, on add i à chaque fois pour avancer à partir de min*/
	return (array);
}
