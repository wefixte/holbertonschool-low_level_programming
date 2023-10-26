#include "main.h"

/**
*leet - function that encodes a string into 1337
*@p: string
*
*Return: char
*/

char *leet(char *p)
{
	int tablet[11] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int tabchif[11] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	int i, j;

	for (i = 0; p[i] != '\0'; i++)
	{
		for (j = 0; tablet[j] != '\0'; j++)
		{
			if (p[i] == tablet[j])
				p[i] = tabchif[j];
		}
	}
	return (p);
}
