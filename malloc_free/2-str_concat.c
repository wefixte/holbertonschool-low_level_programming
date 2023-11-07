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
	int i, len1, len2, len3;
	len1 = strlen(s1);
	len2 = strlen(s2);
	len3 = len1 + len2 +1;

	s3 = malloc(len3);

	for (i = 0; i < len1; i++)
	{
		s3[i] = s1[i];
	}
	for (i = 0; i < len2; i++)
	{
		s3[i + len1] = s2[i];
	}
	s3[len3 - 1] = '\0';

	return (s3);
}
