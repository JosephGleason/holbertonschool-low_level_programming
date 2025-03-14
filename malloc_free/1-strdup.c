#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: the string to duplicate
 * Return: pointer to the duplicated string, or NULL if
 */
char *_strdup(char *str)
{
	char *copy;
	unsigned int i, len = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		len++;

	copy = malloc(sizeof(char) * len + 1);

	if (copy == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		copy[i] = str[i];
	}

	copy[len] = '\0';

	return (copy);
}
