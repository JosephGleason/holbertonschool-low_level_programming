#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list
 *
 * @head: A pointer to the head of the list
 * @index: The index of the node to return (starting from 0)
 *
 * Return: The node at the specified index, or NULL if the node does not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *get;
	unsigned int counter = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	while (head != NULL)
	{
		if (counter == index)
		{
			get = head;
			break;
		}
		head = head->next;
		counter++;
	}

	if (index > counter)
	{
		return (NULL);
	}
	return (get);
}
