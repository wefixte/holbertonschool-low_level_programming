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
	int i = atoi(argv[1]);
	int y = atoi(argv[2]);
	int result = i * y;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", result);
	return (0);
}
