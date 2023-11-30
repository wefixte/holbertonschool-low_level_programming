#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts new node at given position
 * @h: first node of the linked list
 * @idx: index of the list where the new node should be added
 * @n: data for new node
 * Return: NULL if fail, or new node
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp;
	unsigned int counter = 0;

	if (h == NULL)
		return (NULL);

	/*if index=0, call function add_dnodeint to add new node at the beginning*/
	if (idx == 0)
		return (add_dnodeint(h, n));

	/*traverse the list until reaches node before idx*/
	temp = *h;
	while (temp != NULL && counter < idx - 1)
	{
		temp = temp->next;
		counter++;
	}

	new_node = malloc(sizeof(dlistint_t)); /*allocate memory*/
	if (new_node == NULL)
		return (NULL);

	if (temp == NULL || counter < idx - 1)
	{
		free(new_node);
		return (NULL);
	}

	/*if current node is last node, call function insert new node at the end*/
	if (temp->next == NULL)
		return (add_dnodeint_end(h, n));

	new_node->n = n;
	/*connect pointers to integrade new node in the list*/
	new_node->prev = temp;
	new_node->next = temp->next;
	temp->next->prev = new_node; /*update prev pointer of the node after temp*/
	temp->next = new_node; /*update next pointer of temp*/

	return (new_node);
}
