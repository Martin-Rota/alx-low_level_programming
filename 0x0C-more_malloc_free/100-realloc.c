#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - Reallocates memory block using malloc and free
 * @ptr: Pointer to memory block to be reallocated
 * @old_size: The size, in bytes, of allocated space for ptr
 * @new_size: The new size, in bytes, of new memory block
 *
 * Return: On success, a pointer to newly allocated memory block
 *         On failure or invalid size, NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int min_size;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == old_size)
		return (ptr);

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	min_size = (old_size < new_size) ? old_size : new_size;
	memcpy(new_ptr, ptr, min_size);
	free(ptr);

	return (new_ptr);
}
