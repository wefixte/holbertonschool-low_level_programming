#include "main.h"

/**
*_strcat - function that concatenates two strings
*@src: source
*@dest: destination
*
*Return: pointer to dest
*/

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int length;

	for (length = 0; dest[length] != '\0'; length++)
	;

	while (src[i] != '\0')
	{
		dest[length + i] = src[i];
		i++;
	}

	for (length = 0; dest[length] != '\0'; length++)
	;

	dest[length + 1] = '\0';

	return (dest);
}
