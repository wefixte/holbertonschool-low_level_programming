#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid - function that returns a pointer
 * to a 2 dimensionnal array of integers
 * @width: lignes
 * @height: colonnes
 * Return: NULL or pointer
*/

int **alloc_grid(int width, int height)
{
	int **array;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = malloc(sizeof(int *) * height);
	/*allocate memory to hold "height" number of pointers to intergers*/

	if (array == NULL)
		return (NULL);
	/*if allocation not successful, fail, NULL*/

	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(int) * width);
		if (array[i] == NULL)
		{
		/*if allocation not successful, free allocated memory*/
			for (j = 0; j < height; j++)
				free(array[j]);

			free(array);
			return (NULL);
		}
	}
	return (array);
}
