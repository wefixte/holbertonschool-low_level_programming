#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
*main - program that adds positive numbers
*@argv: value
*@argc: number
*
*Return: 0 et 1
*/

int main(int argc, char **argv)
{
	int i;
	int result = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1 ; i < argc ; i++)
		{
			if (isdigit(*argv[i]) == 0)
			{
				printf("Error\n");
				return (1);
			}
			result = result + atoi(argv[i]);
		}
		printf("%d\n", result);
	}
	return (0);
}
