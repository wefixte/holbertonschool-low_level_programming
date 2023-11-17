#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: unsigned int that contain all variables
 * Return : sum
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;
	unsigned int index = 0;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(numbers, n);

	for (; index < n; index++)
		sum += va_arg(numbers, unsigned int);
	va_end(numbers);
return (sum);
}
