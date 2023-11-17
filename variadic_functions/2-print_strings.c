#include "variadic_functions.h"

/**
 * print_strings - function that prints strings
 * @seperator: separation 
 * @n: contain strings
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list twostrings;
	char *str;
	unsigned int index = 0;

	va_start(twostrings, n);

	for (; index < n; index++)
	{
		str = va_arg(twostrings, char *);
			if (str == NULL)
				printf("(nil)");
			else
				printf("%s", str);
			if (index < n - 1 && separator != NULL)
				printf("%s", separator);
	}
	putchar ('\n');
}
