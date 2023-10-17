#include <unistd.h>
#include <stdio.h>
#include <ctype.h>

/**
 * _islower - check for lowercase character
 *
 * Return: 1 or 0
 */

int _islower(int c)
{
	
	if (c >= 'a' && c <= 'z')
	return (1);

	return (0);
}
