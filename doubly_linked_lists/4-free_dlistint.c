#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - Frees a dlistint_t list
 * @head: A pointer to the head of the list to free
 *
 * Description: This function frees all nodes in the list, including the memory
 *              allocated for each node.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *store;

	while (head != NULL)
	{
		store = head->next;
		free(head);
		head = store;
	}
}
