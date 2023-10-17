#include <unistd.h>
#include <stdio.h>

/**
 * print_alphabet - print alphabet in lowercase followed by a new line
 *
 * Return: 0.
 */

void print_alphabet(void)
{
	char C;

	for (C = 'a' ; C <= 'z' ; C++)
	{
		putchar(C);
	}
	putchar('\n');
}
