#include "lists.h"

/**
 * free_list - Frees a list_t list
 * @head: A pointer to the list to free
 *
 * Description: This function frees all nodes in the list, including the
 *              strings stored in each node.
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;

		free(head->str);

		free(head);

		head = temp;
	}
}
