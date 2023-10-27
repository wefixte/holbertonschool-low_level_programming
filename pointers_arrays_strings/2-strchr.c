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
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
