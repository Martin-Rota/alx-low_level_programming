#include "function_pointers.h"
#include <stdef.h>

/**
 * array_iterator - Executes a function on each element of an array.
 *
 * @array: Pointer to array.
 * @action: Pointer to function to be executed on each element of array
 * @size: Size of the array.
 * 
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && action != NULL)
	{
		int i;
		for (i = 0; i < size; i++)
		{
		action(array[i]);
		}
	}
}
