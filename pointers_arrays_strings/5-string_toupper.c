#include "main.h"

/**
*string_toupper - function that changes all lowercase in uppercase
*@ptr : string
*Return: char
*/

char *string_toupper(char *ptr)
{
	int i;

	for (i = 0; ptr[i] != '\0'; i++)
	{
		if (ptr[i] >= 'a' && ptr[i] <= 'z')
			ptr[i] -= 32;
	}
	return (ptr);
}
