#include "lists.h"

/**
 * add_node_end - functiont that adds a new node at the end of the list
 * @head: first node of the list
 * @str: string of the new node
 * Return: new node
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;

	if (head == NULL)
		return (NULL);

	/*allocate memory*/
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	/*Duplicate the string*/
	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	/*Calculate length of the string*/
	new_node->len = strlen(str);
	/*set next pointer to NULL since it's the last node*/
	new_node->next = NULL;

	/*if list empty, set new node as head*/
	if (*head == NULL)
		*head = new_node;
	else
	{
		/*else, traverse the list, find the last node*/
		list_t *current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}
		/*we are at the end of the list, add new_node*/
		current->next = new_node;
	}
	return (new_node);
}
