#include "main.h"
#include "2-strlen.c"
/**
 * puts_half - prints half of a string
 * @str: holds the string
 */
void puts_half(char *str)
{
	int i = _strlen(str);
	int j;

	if (i % 2 == 0)
	{
		for (j = i / 2; j < i; j++)
		{
			_putchar(str[j]);
		}
	}
	else
	{
		for (j = (i + 1) / 2; j < i; j++)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}
