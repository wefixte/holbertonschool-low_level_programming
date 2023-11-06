#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: string of characters
 *
 * Return: length of the string
 */

int _strlen(char *s)
{
	int length;

	for (length = 0; s[length] != '\0' ; length++)
		;
	return (length);
}

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

	for (; i <= _strlen(src); i++)
		dest[i] = src[i];

	return (dest);
}
