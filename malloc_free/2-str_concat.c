#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - function that concanates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: NULL or pointer on newly allocated space
*/

char *str_concat(char *s1, char *s2)
{
	char *s3;
	int i, j, len1, len2, len3;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);
	len3 = len1 + len2 + 1;
	/*+1 for the '\0'*/

	s3 = malloc(len3);

	if (s3 == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
	{
		s3[i] = s1[i];
	}

	for (j = 0; j < len2; j++)
	{
		s3[i + j] = s2[j];
	}
	
	s3[len3 - 1] = '\0';

	return (s3);
}
