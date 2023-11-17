#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers
 * @separator: string separate
 * @n: stock
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list print;
	unsigned int index = 0;

	va_start(print, n);

	for (; index < n; index++)
	{
		int num;

		num = va_arg(print, int);

		printf("%d", num);
		if (separator != NULL && index < n - 1)
			printf("%s", separator);
	}
	va_end(print);

	putchar ('\n');
}
