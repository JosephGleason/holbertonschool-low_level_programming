#include "function_pointers.h"

/**
 * int_index - recieve a array and compare is same number
 *
 * @array: array need to search
 * @size: size of element in the array
 * @cmp: pointer to function to coompare the numbers
 *
 * Return: if fount matches the index of this matches else return -1 no matches
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
