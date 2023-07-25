#include "function_pointers.h"

/**
* int_index - Function searches for an integer in array.
* @size: Number of elements in the array
* @array: Pointer to array
* @cmp: Pointer to the function to be used to compare values
* 
*Return - -1 if no element matches or if size <= 0
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}

	for (i = 0; size > i; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}

	return (-1);
}
