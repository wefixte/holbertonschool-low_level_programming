#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - programm assign random number and print the last digit of number n.
 *
 * Return: Always 0.
 */

int main(void)
{
	int n, last_d;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	last_d = n % 10;

	if (last_d > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last_d);
	}
	else if (last_d == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last_d);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_d);
	}

	return (0);
}
