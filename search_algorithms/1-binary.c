#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 * Return: index of the value or -1 if not found
 */

int binary_search(int *array, size_t size, int value)
{
	size_t index, left, right, mid;

	if (!array)
		return (-1);

	left = 0;
	right = size - 1;

	/*loop runs as the search range is valid*/
	while (left <= right)
	{
		printf("Searching in array: ");

		for (index = left; index < right; index++)
			printf("%d, ", array[index]);

		printf("%d\n", array[index]);

		/* calculate midpoint */
		mid = (left + right) / 2;

		/* if value at midpoint is equal to the target*/
		if (array[mid] == value)
			return (mid);
		/*if value less, update left*/
		if (array[mid] < value)
			left = mid + 1;
		/*if value greater, update right*/
		else
			right = mid - 1;
	}
	/*if value not found*/
	return (-1);
}
