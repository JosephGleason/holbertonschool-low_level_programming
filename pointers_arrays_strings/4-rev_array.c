#include "main.h"

/**
 * reverse_array - Reverses the content of an integer array
 * @a: Pointer to an array of integers
 * @n: Number of elements in the array
 *
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
        int i = 0, b, tmp;

        for (b = n - 1; b > i; b--)
        {
                tmp = a[b];
                a[b] = a[i];
                a[i] = tmp;
                i++;
        }
}
