#include "main.h"
#include <stdlib.h>

/**
*_strstr - function that locates a substring
*@haystack: string
*@needle: substring
*Return: pointer to the beginning of the located substring or NULL
*/

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int s = 0;

	while (needle[s] != '\0')
		s++;

	while (*haystack)
	{
		for (; needle[i]; i++)
		{
			if (haystack[i] != needle[i])
				break;
		}
		if (i != s)
			haystack++;
		else
			return (haystack);
	}
	return (NULL);
}
