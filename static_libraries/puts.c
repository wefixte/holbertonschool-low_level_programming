#include "main.h"

/**
*_puts_recursion - function that prints a string
*@s: string
*
*Return: void
*/

void _puts(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
	_putchar(*s);
	_puts((s + 1));
	}
}
