#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates array of integers with min to max values
 * @min: The minimum value in the range
 * @max: The maximum value in the range
 *
 * Return: On success, pointer to the created array
 *         On failure or invalid range, NULL
 */
int *array_range(int min, int max)
{
	int size, *arr, i;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	arr = (int *)malloc(size * sizeof(int));

	if (arr == NULL)
		return (NULL);

	i = 0;
	while (min <= max)
	{
		arr[i] = min++;
		i++;
	}

	return (arr);
}
