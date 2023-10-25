#include "main.h"

/**
*_strcmp - function that compares two strings
*@s1: string1
*@s2: string2
*
*Return: if same : 0, if different: s1-s2
*/

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (0);
}
