#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: size memory to allocate
 * Return: a pointer to the allocated memory
*/

void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b);
	/**
	 * pointer mem, any type of data, malloc to dynamically allocate
	 * b bytes of memory and assigns the adress of the bloc to the pointer
	*/
	if (mem == NULL)
		exit(98);

	return (mem);
}
