#include <stdio.h>

/**
*main - program prints number of arguments passed into it
*@argv: value
*@argc: number
*
*Return: 0.
*/

int main(int argc, __attribute__((unused))  char **argv)
{
	printf("%d\n", (argc - 1));

	return (0);
}
	