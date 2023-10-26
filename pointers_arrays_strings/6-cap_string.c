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

	for (i = 0; ptr[i] != '\0'; i++)
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
