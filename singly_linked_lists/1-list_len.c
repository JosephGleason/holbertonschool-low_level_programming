#include "lists.h"

/**
 * list_len - Counts the number of elements in a linked list_t list.
 * @h: Pointer to the head of the list.
 *
 * Description:
 * Iterates through the linked list and counts the number of nodes
 * present in the list.
 *
 * Return: The total number of elements (nodes) in the list.
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	for (; h != NULL; h = h->next)
		count++;

	return (count);
}
