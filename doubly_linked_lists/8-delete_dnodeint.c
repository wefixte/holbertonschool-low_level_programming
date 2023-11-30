#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes the node of a linked list
 * @head: double pointer first node
 * @index: index of node to delete
 * Return: 1 if it succeeded, -1 if it failed
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int counter = 0;
	dlistint_t *temp = *head;
	dlistint_t *previousnode;

	if (*head == NULL || head == NULL)
		return (-1);

	/*if index=0, head node needs to be deleted*/
	if (index == 0)
	{
		*head = temp->next;
		if (temp->next != NULL)
			temp->next->prev = NULL;

		free(temp);
		return (1);
	}

	/*traverse the list to reach index*/
	while (temp != NULL && counter < index)
	{
		/*keep track previous node*/
		previousnode = temp;
		temp = temp->next;
		counter++;
	}

	if (temp == NULL)
		return (-1);

	/*adjust pointers to skip the node to be deleted*/
	previousnode->next = temp->next;
	if (temp->next != NULL)
		temp->next->prev = previousnode;

	free(temp);
	return (1);
}
