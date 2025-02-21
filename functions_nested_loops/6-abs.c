#include <stdio.h>

/**
 *_abs - computes absolute value.
 *@r: The integer to compute the absolute value of * Return: Always 0.
 *
 *  Return: Absoulte value of r.
 */
int _abs(int r)
{
	if (r < 0)
	{
		return (-r);
	}
	return (r);
}
