#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings, using at most n bytes from s2.
 * @s1: First string.
 * @s2: Second string.
 * @n: Number of bytes from s2 to concatenate.
 *
 * Return: Pointer to the new allocated concatenated string, or NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1 = 0, len2 = 0;
	char *concat;

	/* Treat NULL as empty string */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Get lengths of s1 and s2 */
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	/* Use full s2 if n >= len2 */
	if (n > len2)
		n = len2;

	/* Allocate memory for concatenated string (+1 for '\0') */
	concat = malloc((len1 + n + 1) * sizeof(char));
	if (concat == NULL)
		return (NULL);

	/* Copy s1 into concat */
	for (i = 0; i < len1; i++)
		concat[i] = s1[i];

	/* Copy first n bytes of s2 into concat */
	for (j = 0; j < n; j++, i++)
		concat[i] = s2[j];

	/* Null-terminate the new string */
	concat[i] = '\0';

	return (concat);
}
