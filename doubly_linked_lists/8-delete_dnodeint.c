#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at a given
 * index in a dlistint_t list
 * @head: A pointer to the head of the list
 * @index: The index of the node to be deleted (starting from 0)
 *
 * Return: 1 if it succeeded, -1 if it failed
 *
 * Description: This function deletes the node at the specified
 * index in a doubly
 *              linked list. If the index is invalid or the
 *              node cannot be deleted,
 *              it returns -1. Otherwise, it returns 1 to indicate success.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int counter = 0;

	if (*head == NULL)
		return (-1);

	temp = *head;

	if (index == 0)
	{
		*head = temp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}

	while (temp != NULL && counter < index)
	{
		temp = temp->next;
		counter++;
	}

	if (temp == NULL)
		return (-1);

	if (temp->next != NULL)
		temp->next->prev = temp->prev;
	if (temp->prev != NULL)
		temp->prev->next = temp->next;

	free(temp);
	return (1);
}
