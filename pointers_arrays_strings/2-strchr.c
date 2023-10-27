#include "main.h"
#include <stddef.h>

/**
*_strchr - function that locates a character in a string
*@s: string
*@c: character
*Return: a pointer to the first occurence of c or NULL
*/

char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + 2);
		}
	}
	if (c == '\0')
	{
		return (s + 2);
	}
	return (NULL);
}
