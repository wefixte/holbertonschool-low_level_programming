#include "main.h"

/**
 * times_table - prints the 9 tables starting with 0
 *
 * Return: void
 */

void times_table(void)
{
	int x, y, z;

	x = 0;
	while (x <= 9)
	{
		y = 1;
		_putchar('0');
		_putchar(',');
		while (y <= 9)
		{
			z = x * y;
			if (z <= 9)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(z + '0');
				if (y < 9)
				{
					_putchar(',');
				}
			}
			else
			{
				_putchar(' ');
				_putchar((z / 10) + '0');
				_putchar((z % 10) + '0');
				if (y < 9)
				{
					_putchar(',');
				}
			}
			y++;
		}
		x++;
		_putchar('\n');
	}
}
