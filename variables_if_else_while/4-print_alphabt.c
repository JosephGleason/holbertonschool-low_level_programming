#include <stdio.h>
/**
 * main - This is the entry point of the code
 *
 * Return: (0)
 *
 **/
int main(void)
{
	char letters = 97;

	while (letters < 123)
	{
		if (letters != 101 && letters != 113)
		{
			putchar(letters);
		}
		letters++;
	}
	putchar('\n');
	return (0);
}
