#include "lists.h"

/**
 * add_dnodeint - function that adds a new node at the beginning of a list
 * @head: pointer to the beginning of the list
 * @n: int to stored in the new node
 * Return: new node
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->n = n;
	/*set prev node to NULL because new_node is at the beginning*/
	new_node->prev = NULL;
	new_node->next = *head;

	/*if NULL, there are nodes in list*/
	/*prev pointer of current head needs to point to new_node*/
	if (*head != NULL)
		(*head)->prev = new_node;

	(*head) = new_node;

	return (new_node);
}
