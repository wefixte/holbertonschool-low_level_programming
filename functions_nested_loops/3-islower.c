#include <unistd.h>
#include <stdio.h>
#include <ctype.h>

/**
 * _islower - check for lowercase character
 * @c : character to verified
 *
 * Return: 1 or 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
