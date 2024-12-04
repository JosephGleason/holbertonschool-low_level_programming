#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - Executes a function on each element of an array.
 * @array: The array of integers to iterate over.
 * @size: The size of the array.
 * @action: A pointer to the function to apply to each element.
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
