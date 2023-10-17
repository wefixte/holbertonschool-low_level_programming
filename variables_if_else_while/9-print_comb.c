#include <stdio.h>

/**
 * main - prints all combinations single-digit numbers with ,
 * in ascending order
 *
 * Return: Always 0.
 */

int main(void)
{
	int n = 0;

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
		if (n < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
