#include "lists.h"
/* 
 * dlistint_len - returns the num of elements in dlistint_t list
 * @h: pointer to head
 *
 * Return: num of nodes in list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		num++;
		h = h->next;
	}
	return (num);
}
