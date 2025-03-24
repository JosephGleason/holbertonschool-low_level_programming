#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - Sums all its parameters.
 * @n: Number of parameters.
 *
 * Return: Sum of parameters, or 0 if n is 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list holder;

	va_start(holder, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(holder, int);
	}

	va_end(holder);
	return (sum);
}
