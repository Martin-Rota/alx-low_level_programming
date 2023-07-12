#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: On success, returns a pointer to the concatenated string.
 *         If s1 or s2 is NULL, treats it as an empty string.
 *         If memory allocation fails, returns NULL.
 */

char *str_concat(char *s1, char *s2)
{
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	size_t s1_len = strlen(s1);
	size_t s2_len = strlen(s2);

	char *concat = (char *)malloc((s1_len + s2_len + 1) * sizeof(char));
	if (concat == NULL)
	{
		return NULL;
	}

	strcpy(concat, s1);
	strcat(concat, s2);

	return (concat);
}
