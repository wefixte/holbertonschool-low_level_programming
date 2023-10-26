#include "main.h"

/**
*cap_string - function that capitalizes all words of a string
*@ptr: string
*
*Return: char
*/

char *cap_string(char *ptr)
{
	int i;

	if (ptr[0] >= 'a' && ptr[0] <= 'z')
		ptr[0] = ptr[0] - 'a' + 'A';

	for (i = 1; ptr[i] != '\0'; i++)
	{
		if ((ptr[i] >= 'a' && ptr[i] <= 'z') &&
		(ptr[i - 1] == ' ' || ptr[i - 1] == '\t' || ptr[i - 1] == '\n' ||
		ptr[i - 1] == ',' || ptr[i - 1] == ';' || ptr[i - 1] == '.' ||
		ptr[i - 1] == '!' || ptr[i - 1] == '?' || ptr[i - 1] == '"' ||
		ptr[i - 1] == '(' || ptr[i - 1] == ')' || ptr[i - 1] == '{' ||
		ptr[i - 1] == '}'))
			ptr[i] = ptr[i] - 'a' + 'A';
	}
	return (ptr);
}
