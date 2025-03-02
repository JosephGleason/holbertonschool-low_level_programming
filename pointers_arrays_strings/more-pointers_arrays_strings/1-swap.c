#include "main.h"
/**
 * swap_int - swaps values of two integers
 * @a: first int value
 * @b: second int value
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

