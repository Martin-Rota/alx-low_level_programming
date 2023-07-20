#include "dog.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_dog - Prints the elements of a struct dog.
 *
 * @d: Pointer to the dog structure to be printed
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	printf("Age: %.6f\n", d->age);

	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
