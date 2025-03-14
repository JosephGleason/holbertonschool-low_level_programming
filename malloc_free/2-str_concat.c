#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings into a newly allocated
 * space in memory.
 * @s1: the first string
 * @s2: the second string
 *
 * Return: pointer to the concatenated string, or NULL if malloc fails.
 */
char *str_concat(char *s1, char *s2)
{
	int s1len = 0;
	int s2len = 0;
	int i;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		s1len++;
	for (i = 0; s2[i] != '\0'; i++)
		s2len++;

	concat = malloc(sizeof(char) * (s1len + s2len) + 1);

	if (concat == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		concat[i] = s1[i];

	for (i = 0; s2[i] != '\0'; i++)
		concat[s1len + i] = s2[i];

	return (concat);
}
