#include "lists.h"

/**
 * print_dlistint - function that prints all elements of a list
 * @h: linked list create from dlistint_t
 * Return: the number of nodes, so the length of the linked list
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t length = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		length++;
	}
	return (length);
}
