#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements in a linked list
 * @h: linked list
 * Return: number of elements, so the number of nodes
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t length = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		length++;
		h = h->next;
	}
	return (length);
}
