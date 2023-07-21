#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Function frees dog
 * @d: pointer to new_dog structure
 *
 */

void free_dog(dog_t *d)
{
	*d = &new_dog;
	free(new_dog);
}
