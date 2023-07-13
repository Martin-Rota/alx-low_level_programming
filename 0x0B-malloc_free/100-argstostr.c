#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - Concatenates all arguments of a program.
 * @ac: The argument count.
 * @av: Array of argument strings.
 *
 * Return: A pointer to the concatenated string.
 *         Returns NULL if ac == 0 or av == NULL or allocation fail
 */

char *argstostr(int ac, char **av)
{
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	int total_length = 0;
	int i, j, k;
	char *concatenated_str;

	/* Calculate the total length of the concatenated string */
	for (i = 0; i < ac; i++)
	{
		total_length += strlen(av[i]) + 1; /* +1 for '\n' */
	}

	/* Allocate memory for the concatenated string */
	concatenated_str = (char *)malloc(sizeof(char) * (total_length + 1));
	if (concatenated_str == NULL)
	{
		return (NULL);
	}

	/* Concatenate the arguments with '\n' separators */
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			concatenated_str[k] = av[i][j];
			k++;
		}
		concatenated_str[k] = '\n';
		k++;
	}
	concatenated_str[k] = '\0';

	return (concatenated_str);
}
