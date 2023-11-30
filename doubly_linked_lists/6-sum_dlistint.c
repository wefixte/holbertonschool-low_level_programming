#include "lists.h"

/**
 * sum_dlistint - function returns the sum of all the data (n) of a linked list
 * @head: linked list
 * Return: sum of all data, or 0 if empty
*/

int sum_dlistint(dlistint_t *head)
{
	int sumdata = 0;
	dlistint_t *temp;

	/*if the list is empty*/
	if (head == NULL)
		return (0);

	/*pointer set to the head*/
	temp = head;

	/*traverse the list*/
	while (temp != NULL)
	{
		/*add data (n) of current node to sumdata*/
		sumdata += temp->n;
		/*go to next node*/
		temp = temp->next;
	}
	return (sumdata);
}
