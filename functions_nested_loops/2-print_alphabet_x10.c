#include <unistd.h>
#include <stdio.h>

/**
 * print_alphabet_x10 - print alphabet ten times followed by new line
 *
 * Return: 0.
 */

void print_alphabet_x10(void)
{
	char C;
	int i = 0;

	while(i <= 9)
	{
		for (C = 'a' ; C <= 'z' ; C++)
		{
			putchar(C);
		}
		putchar('\n');
		i++;
	}
}
