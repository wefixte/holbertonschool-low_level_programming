#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: n bytes of s2
 * Return: NULL or pointer
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int i, j, lenght1, lenght2, lenght3;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	lenght1 = strlen(s1);
	lenght2 = strlen(s2);

	if (n >= lenght2)
	{
		n = lenght2;
		lenght3 = lenght1 + lenght2 + 1;
		s3 = malloc(sizeof(lenght3));
	}
	else
	{
		lenght3 = lenght1 + n + 1;
		s3 = malloc(sizeof(lenght1 + n + 1));
	}

	for (i = 0; i < lenght1; i++)
	{
		s3[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		s3[i + j] = s2[j];
	}
	s3[lenght3 - 1] = '\0';

	return (s3);
	free(s3);
}
