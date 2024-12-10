#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data (n)
 * of a dlistint_t linked list
 * @head: A pointer to the head of the list
 *
 * Return: The sum of all the data in the list, or 0 if the list is empty
 *
 * Description: This function traverses the doubly linked list and adds up the
 * values of each node's `n` field. If the list is empty, it returns 0.
 */
int sum_dlistint(dlistint_t *head)
{
	int counter = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (head != NULL)
	{
		counter += head->n;
		head = head->next;
	}

	return (counter);
}

