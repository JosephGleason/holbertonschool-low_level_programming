#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * create_array - creates an array of chars and initial it with a specif char
 * @size: the size of the array to create
 * @c: the character to initialize the array with
 *
 * Return: pointer to the array, or NULL if size is 0 or if malloc fails
 */
char *create_array(unsigned int size, char c)
{
        unsigned int i;
        char *arr;

        if (size == 0)
                return (NULL);

        arr = malloc(sizeof(char) * size);

        if (arr == NULL)
        {
        return (NULL);
        }

        for (i = 0; i < size; i++)
        {
                arr[i] = c;
        }

        return (arr);
}
