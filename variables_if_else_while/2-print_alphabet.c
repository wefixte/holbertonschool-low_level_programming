#include <stdio.h>

/**
 * main - putchar fonction to print alphabet in lowercase with newline
 *
 * Return: Always 0.
 */

int main(void)
{
	char C;

	for (C = 'a' ; C <= 'z' ; C++)
	{
		putchar(C);
	}
	putchar('\n');
	return (0);
}
