#include "main.h"

/**
 * puts_half - function that prints half of a string
 * @str: string
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i = 0;
	int length;
	int n;

	for (length = 0; str[length] != '\0'; length++)
		;

	if (length % 2 == 0)
	{
		for (i = length / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (n = (length + 1) / 2; str[n] != '\0'; n++)
		{
			_putchar(str[n]);
		}
	}
	_putchar('\n');
}
