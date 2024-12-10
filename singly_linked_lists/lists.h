#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>  /* For size_t */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * struct list_s - Singly linked list node structure
 * @str: The string stored in the node
 * @len: The length of the string
 * @next: Pointer to the next node in the list
 *
 * Description: A structure used to represent a node in a singly linked list.
 *              Each node stores a string, its length, and a pointer to the
 *              next node in the list.
 */
typedef struct list_s
{
	char *str;        /**< String stored in the node */
	unsigned int len; /**< Length of the string */
	struct list_s *next; /**< Pointer to the next node in the list */
} list_t;

/**
 * print_list - Prints all elements of a list_t list
 * @h: A pointer to the head node of the list
 *
 * Return: The number of nodes printed
 *
 * Description: This function iterates through a list of nodes, printing each
 *              node's string (`str`) and its length (`len`), then returns
 *              the number of nodes printed.
 */
size_t print_list(const list_t *h);

/**
 * list_len - Returns the number of elements in a linked list
 * @h: A pointer to the head of the list
 *
 * Return: The number of elements in the list
 *
 * Description: This function traverses through the entire linked list and
 *              counts the number of nodes. It returns the number of nodes
 *              in the list.
 */
size_t list_len(const list_t *h);

/**
 * add_node - Adds a new node at the beginning of the list
 * @head: A pointer to the head of the list
 * @str: The string to store in the new node
 *
 * Return: A pointer to the new node
 *
 * Description: This function adds a new node to the beginning of a singly
 *              linked list. It stores the provided string (`str`) and
 *              calculates the length of the string (`len`), then returns
 *              a pointer to the newly created node.
 */
list_t *add_node(list_t **head, const char *str);

/**
 * add_node_end - Adds a new node at the end of the list
 * @head: A pointer to the head of the list
 * @str: The string to store in the new node
 *
 * Return: A pointer to the new node
 *
 * Description: This function appends a new node at the end of a singly
 *              linked list, storing the provided string (`str`) and
 *              calculating the length of the string (`len`).
 */
list_t *add_node_end(list_t **head, const char *str);

/**
 * free_list - Frees a list_t list
 * @head: A pointer to the list to free
 *
 * Description: This function frees all nodes in the list, including the
 *              strings stored in each node. The pointer to the head of
 *              the list is passed, and after the function completes, the
 *              entire list is freed.
 */
void free_list(list_t *head);

#endif /* LISTS_H */

