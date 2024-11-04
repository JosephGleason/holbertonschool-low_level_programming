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
	if (c >= 'A' && c <= 'Z')

		return (1);

	else

		return (0);
}
