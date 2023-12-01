#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number
 * @n: number
*/

void print_binary(unsigned long int n)
{
	int index, bit;
	unsigned long int temp = n, value;

	while (temp >>= 1)
	{
		bit++;
	}

	for (index = bit; index >= 0; index--)
	{
		value = (n >> index) & 1;
		if (value == 1)
			_putchar('1');
		else
			_putchar('0');
	}
}
