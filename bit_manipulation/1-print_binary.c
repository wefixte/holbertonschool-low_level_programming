#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number
 * @n: number
*/

void print_binary(unsigned long int n)
{
	int i, bits = 0;
	unsigned long int temp = n, bitValue;

	while (temp >>= 1)
	{
		bits++;
	}

	for (i = bits; i >= 0; i--)
	{
		bitValue = (n >> i) & 1;

		if (bitValue == 1)
		{
			putchar('1');
		}
		else
		{
			putchar('0');
		}
	}
}
