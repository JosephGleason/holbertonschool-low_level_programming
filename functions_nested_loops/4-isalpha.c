#include "main.h"
/**
 * _isalpha - checks if character is letter, lowercase or uppercase.
 * @c: character to be checked
 *
 * Return: 1 value if character a letter, uppercase or lowercase, 0 if not.
 *
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
