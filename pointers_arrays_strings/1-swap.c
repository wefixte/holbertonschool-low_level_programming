#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 * @a: first integer to swap
 * @b: second integer to swap
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c = 0;

	c = *b;
	*b = *a;
	*a = c;
}
