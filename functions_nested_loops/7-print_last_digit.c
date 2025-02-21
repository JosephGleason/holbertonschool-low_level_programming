#include "main.h"
/**
 * print_last_digit - prints last digit
 * @r: integer to be checked
 *
 * Return: Always 0
 */
int print_last_digit(int r)
{
	int n = r % 10;

	if (n < 0)
	{
		n = -n;
	}
	_putchar('0' + n);

	return (n);
}
