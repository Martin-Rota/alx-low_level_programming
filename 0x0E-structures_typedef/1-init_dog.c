#include "dog.h"
#include <stddef.h>

/**
 * init_dog - Initializes a dog structure with the provided values
 *
 * @d: Pointer to the dog structure to be initialized
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;

}
