#include "lists.h"

/**
 * print_list - function that prints all the elements of a list
 * @h: node
 * Return: number of nodes
*/

size_t print_list(const list_t *h)
{
	size_t lengthlinkedlist = 0;

	if (h == NULL)
		return (0);

	while (h)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");

		/*if not null, print the length and the string of the current node*/
		else
			printf("[%d] %s\n", h->len, h->str);

		lengthlinkedlist++;
		/*move pointer h to the next node*/
		h = h->next;
	}
	return (lengthlinkedlist);
}
