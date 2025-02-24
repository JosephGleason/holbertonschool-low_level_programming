#include "main.h"
/**
 * _isdigit - checking for a digit
 *
 * @c: init used to check the value
 *
 * Return: 1 or 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
