#include <stdio.h>
#include <stdlib.h>

/**
*main - program that multiplies two numbers
*@argc: number
*@argv: value
*Return: 1 or 0
*/

int main(int argc, char **argv)
{
	int i, y, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	y = atoi(argv[2]);
	result = i * y;

	printf("%d\n", result);
	return (0);
}
