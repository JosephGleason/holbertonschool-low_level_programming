#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints the details of a struct dog
 * @d: Pointer to the struct dog to print
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}

	else if (d->name == NULL)
	{
		printf("Name: (nil)");
	}
	else if (d->age < 0)
	{
		printf("Age: (nil)");
	}
	else if (d->owner == NULL)
	{
		printf("Owner: (nil)");
	}

	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
