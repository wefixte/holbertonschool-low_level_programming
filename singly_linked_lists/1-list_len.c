#include "lists.h"

/**
 * list_len - function that returns the number of elements in a linked list
 * @h: node
 * Return: number of elements of the list
*/

size_t list_len(const list_t *h)
{
	size_t lengthlinkedlist = 0;

	if (h == NULL)
		return (0);

	while (h)
	{
		lengthlinkedlist++;
		h = h->next;
	}
	return (lengthlinkedlist);
}
