#include "lists.h"
#include <stdlib.h>  /* For malloc */

/**
 * add_node - Adds a new node at the beginning of the list
 * @head: A pointer to the head of the list
 * @str: The string to store in the new node
 *
 * Return: A pointer to the new node
 *
 * Description: This function creates a new node, stores
 * the provided string
 *              in the new node, and adds it at the beginning of the list.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int len = 0;
	int i;
	char *str_copy;

	new_node = (list_t *)malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	while (str[len] != '\0')
	{
		len++;
	}

	str_copy = (char *)malloc(sizeof(char) * (len + 1));
	if (str_copy == NULL)
	{
		free(new_node);
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		str_copy[i] = str[i];
	}
	str_copy[len] = '\0';

	new_node->str = str_copy;
	new_node->len = len;
	new_node->next = *head;

	*head = new_node;
	return (new_node);
}
