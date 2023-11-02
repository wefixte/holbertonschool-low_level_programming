#include <stdio.h>

/**
*main - prints its name
*@argv: value argument
*@argc: nb arguments
*
*Return: 0
*/

int main(__attribute__((unused)) int argc, char **argv)
{
	printf("%s\n", argv[0]);

	return (0);
}
