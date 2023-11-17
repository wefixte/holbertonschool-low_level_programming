#include "variadic_functions.h"

/**
 * print_all - function that prints anything
 * @format: format
*/

void print_all(const char * const format, ...)
{
	int index = 0;
	char *s;
	char c;
	float f;
	int i;
	va_list allstrings;

	va_start(allstrings, format);
	while (format[index] != '\0')
	{
		switch (format[index])
		{
			case 's':
				s = va_arg(allstrings, char*);
				if (s == NULL)
				{
					printf("(nil)");
				}
				printf("%s", s);
				break;
			case 'c':
				c = va_arg(allstrings, int);
				printf("%c, ", c);
				break;
			case 'f':
				f = va_arg(allstrings, double);
				printf("%f, ", f);
				break;
			case 'i':
				i = va_arg(allstrings, int);
				printf("%d, ", i);
				break;
		}
		index++;
	}
	va_end(allstrings);
	printf("\n");
}
