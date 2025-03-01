#include "main.h"
/**
 * puts2 - prints every other char of sting
 * @str: string to get chars
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n')
}
