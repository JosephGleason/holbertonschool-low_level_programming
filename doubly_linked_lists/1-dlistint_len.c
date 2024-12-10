#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a linked dlistint_t list
 * @h: A pointer to the head of the doubly linked list
 *
 * Return: The number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	/* Traverse the list and count the nodes */
	while (h != NULL)
	{
		count++;  /* Increment the count for each node */
		h = h->next;  /* Move to the next node */
	}

	return (count);  /* Return the total count */
}
