#include "dog.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - Creates a new dog_t structure.
 * @name Pointer to the name of the new dog.
 * @age Age of the new dog.
 * @owner Pointer to the owner's name of the new dog.
 *
 * Return: Pointer to the new dog_t structure, NULL if allocation fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = (dog_t *)malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	new_dog->name = (char *)malloc(strlen(name) + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	strcpy(new_dog->name, name);

new_dog->owner = (char *)malloc(strlen(owner) + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	strcpy(new_dog->owner, owner);

	new_dog->age = age;

	return (new_dog);
}
