#include "main.h"

/**
*_strncar - function that concatenates two strings
*@src: source
*@dest: destination
*@n: nombre de bytes
*
*Return: pointer to dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int length;

	for (length = 0; dest[length] != '\0'; length++)
	;
	
	for (; i < n && src[i] != '\0'; i++)
	{
			dest[length + i] = src[i];
	}

	for (length = 0; dest[length] != '\0'; length++)
	;

	dest[length + 1] = '\0';

	return (dest);
}
