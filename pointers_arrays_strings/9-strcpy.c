#include "main.h"

/**
 * _strcpy - function that copies the string
 * @dest: pointeur
 * @src: pointeur
 *
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	do {
		dest[i] = src[i];
		i++;
	} while(src[i] != '\0');

	return (dest);
}
