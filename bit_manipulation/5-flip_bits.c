#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would need to flip
 * to get from one number to another
 * @n: number 1
 * @m: number 2
 * Return: counter
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int counter = 0, flipbitscount = 0;
	unsigned long int size = sizeof(n) * 8;

	while (counter < size)
	{
		if ((n & 1) != (m & 1))
			flipbitscount++;
		n >>= 1;
		m >>= 1;
		counter++;
	}
	return (flipbitscount);
}
