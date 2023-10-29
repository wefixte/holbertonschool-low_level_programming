#include "main.h"

/**
*_atoi - function that convert a string to an integer
*@s: string
*
*Return: int
*/

int _atoi(char *s)
{
	int i = 0;
	int signe = 1;
	int resultat = 0;

	if (s[0] == '-')
	{
		signe = -1;
		i++;
	}

	for (; s[i] != '\0'; ++i)
		resultat = resultat * 10 + s[i] - '0';

	return (signe * resultat);
}
