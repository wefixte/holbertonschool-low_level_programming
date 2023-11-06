#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - function that returns a pointer to a newly
 * allocated space in memory
 * which contains a copy of the string given as a parameter
 * @str: string
 * Return: NULL or pointer to the duplicated string
*/

char *_strdup(char *str)
{
	char *strbis;

	if (str == NULL)
		return (NULL);

	strbis = malloc(strlen(str) + 1);
	/*add +1 to count the \0 character*/

	if (strbis == NULL)
		return (NULL);

	strcpy(strbis, str);
	return (strbis);
}
