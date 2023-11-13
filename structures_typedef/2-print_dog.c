#include "dog.h"
#include <stdio.h>

/**
 * print_dog - function that prints a struct dog
 * @d: pointeur struct
 * Return: 0
*/

void print_dog(struct dog *d)
{
	if (d == NULL)
		printf(" ");

	printf("Name: %s\n", d->name ? d->name : "(nil)");

	if (d->age)
		printf("Age: %f\n", d->age);
	else
		printf("Age: (nil)\n");

	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
