#include "lists.h"

/**
 * get_dnodeint_at_index - Write a function that returns the nth node of a list
 * @head: first node
 * @index: index of the node, starting from 0
 * Return: NULL or the nth node
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t counter = 0;

	if (head == NULL)
		return (NULL);

	while (head != NULL)
	{
		if (counter == index)
			return (head);
		
		head = head->next;
		counter++;
	}
	return (NULL);
}
