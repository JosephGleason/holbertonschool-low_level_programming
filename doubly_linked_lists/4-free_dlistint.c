#include "lists.h"
#include <stdlib.h>  /* For free */

/**
 * free_dlistint - Frees a dlistint_t list
 * @head: A pointer to the head of the list to free
 *
 * Description: This function frees all nodes in the list, including the memory
 *              allocated for each node.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
