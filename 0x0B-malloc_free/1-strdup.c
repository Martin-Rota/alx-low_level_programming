#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 *           which contains a copy of the string given as a parameter.
 * @str: The string to duplicate.
 *
 * Return: On success, returns a pointer to the duplicated string.
 *         If str is NULL or if memory allocation fails, returns NULL.
 */

char *_strdup(char *str)
{
	if (str == NULL)
	{
		return (NULL);
	}

	char *duplicate
		*duplicate = malloc(strlen(str) + 1);

	if (duplicate == NULL)
	{
		return (NULL);
	}

	strcpy(duplicate, str);
	return (duplicate);
}
