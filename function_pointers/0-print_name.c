#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - Prints a name using a function pointer.
 * @name: The name to print.
 * @f: A pointer to the function to use for printing.
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
