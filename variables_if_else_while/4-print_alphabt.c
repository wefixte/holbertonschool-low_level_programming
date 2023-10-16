#include <stdio.h>

/**
 * main - putchar fonction to print alphabet in lowercase with newline
 * except q and e
 *
 * Return: Always 0.
 */

int main(void)
{
	char C;

	for (C = 'a' ; C <= 'z'; C++)
	{
		if (C != 'e' && C != 'q')
		{
			putchar(C);
		}
	}
	putchar('\n');
	return (0);
}
