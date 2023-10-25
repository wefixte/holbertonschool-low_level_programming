#include "main.h"

/**
*_strncpy - function that copies a string
*@dest: destination
*@src: source
*@n: nombre
*
*Return: char
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (; i < n && src[i] != '\0'; i++)
	dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
