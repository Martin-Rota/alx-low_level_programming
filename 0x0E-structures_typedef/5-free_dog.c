#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Function frees dog
 * @d: pointer to dog_t structure
 *
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
