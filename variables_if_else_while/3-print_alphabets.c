#include <stdio.h>

/**
 * main - putchar fonction to print alphabet in lowercase and uppercase
 * with newline
 *
 * Return: Always 0.
 */

int main(void)
{
	char C;
	char D;

	for (D = 'a' ; D <= 'z' ; D++)
	{
		putchar(D);
	}

	for (C = 'A' ; C <= 'Z' ; C++)
	{
		putchar(C);
	}

	putchar('\n');
	return (0);
}
