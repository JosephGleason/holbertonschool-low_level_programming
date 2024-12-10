#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: A read-only pointer to the head node of a singly linked list.
 *
 * Return: The number of nodes printed.
 */
size_t print_list(const list_t *h)
{
	size_t node_count = 0;

	while (h)
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}

		node_count++;

		h = h->next;
	}
	return (node_count);
}
