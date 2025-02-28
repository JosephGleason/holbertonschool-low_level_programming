#include "main.h"
#include "2-strlen.c"
/**
 * print_rev - Prints a string in reverse, followed by a new line.
 * @s: The string to be printed in reverse.
 *
 */
void print_rev(char *s)
{
	int i, j;

	i = _strlen(s);
	for (j = i; j >= 0; j--)
	{
		_putchar(s[j]);
	}
_putchar('\n');
}
