#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @f: function pointers
 * @name: nom à print
 * Return: nothing if f or name is null
*/

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
	else
		return;
}
