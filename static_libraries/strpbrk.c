#include "main.h"

/**
*_strpbrk - function that searches a string for any of a set of bytes
*@s: string
*@accept: bytes
*Return: pointer to s or NULL
*/

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
				return (s);
		}
		s++;
	}
	return ('\0');
}
