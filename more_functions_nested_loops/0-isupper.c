#include "main.h"
/**
 * _isupper - checking for an uppercase charecter
 *
 * @c: int used to check the value
 *
 * Return: void
 */
int _isupper(int c)
{
	int i;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (c == i)
			return (1);
	}
	return (0);
}
