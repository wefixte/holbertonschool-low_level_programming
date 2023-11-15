#include "3-calc.h"

/**
 * main - main function
 * @argc: compte argument
 * @argv: arguments
 * Return: 0
*/

int main(int argc, char *argv[])
{
	int num1, num2;
	int (*operator)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	/*if number of argument wrong*/

	num1 = atoi(argv[1]);
	operator = get_op_func(argv[2]);
	num2 = atoi(argv[3]);
	/*convert num1 & 2 into intergers and function pointer for 2nd place arg*/

	if (operator == NULL || (argv[2][1] != '\0'))
	/*check the lenght of the operator string with argv*/
	{
		printf("Error\n");
		exit(99);
	}
	/*if operator not add, sub, mul, div ou modulo*/

	if ((argv[2][0] == '/' || argv[2][0] == '%') && (num1 == '0' || num2 == '0'))
	{
		printf("Error\n");
		exit(100);
	}
	/*if user tries to divide by 0*/

	printf("%d\n", operator(num1, num2));
	return (0);
}
