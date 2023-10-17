#include <stdio.h>

/**
 * main - prints lowercase alphabet in reverse
 * plus new line
 *
 * Return: Always 0.
 */

int main(void)
{
	char C;
	
	for (C = 'z' ; C >= 'a'; C--)
	{
		putchar(C);
	}
	putchar('\n');
	return (0);
}
