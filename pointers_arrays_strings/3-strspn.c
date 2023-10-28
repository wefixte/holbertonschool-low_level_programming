#include "main.h"

/**
*_strspn - function that gets the length of a prefix substring
*@s: segment
*@accept: accepted characters
*
*Return: number of bytes
*/

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	unsigned int length = 0;

	while (*s)
	{
		for (; accept[i] != '\0'; i++)
		{
			if (accept[i] == *s)
			{
				length++;
				break;
			}
			else if ((accept[i + 1]) == '\0')
			{
				return (length);
			}
		}
		s++;
	}
	return (length);
}
