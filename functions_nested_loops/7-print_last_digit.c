#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @c: character to print
 *
 * Return: the value of the last digit
 */

int print_last_digit(int c)
{
	int last_d = c % 10;

	if (last_d < 0)
	{
		last_d *= -1;
	}

	_putchar(last_d + '0');

	return (last_d);
}
