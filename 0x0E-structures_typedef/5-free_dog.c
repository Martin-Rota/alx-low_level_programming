#include "dog.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * free_dog - Function frees dog
 * @d: pointer to dog_t structure
 *
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
