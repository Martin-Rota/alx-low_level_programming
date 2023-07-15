#include <stdlib.h>
#include <stdio.h>

/**
 * is_space - Checks if character is a space character
 * @c: Character to check
 *
 * Return: 1 if the character is a space character, 0 otherwise
 */
int is_space(char c)
{
	return (xc == ' ' || c == '\t' || c == '\n');
}

/**
 * count_words - Counts the number of words in a string
 * @str: String to count words from
 *
 * Return: Number of words in the string.
 */
int count_words(char *str)
{
	int count;
	int i;

	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (!is_space(str[i]) && (is_space(str[i + 1]) || str[i + 1] == '\0'))
			count++;
		i++;
	}

	return (count);
}

/**
 * strtow - Split string into words
 * @str: String to split
 *
 * Return: Pointer to array of strings (words)
 *         Returns NULL if str == NULL or str == "".
 *         Returns NULL on failure.
 */
char **strtow(char *str)
{
	int words, i, j, k, l;
	char **result;
	
	if (str == NULL || *str == '\0')
		return (NULL);

	words = count_words(str);
	result = malloc((words + 1) * sizeof(char *));
	if (result == NULL)
		return (NULL);

	i = 0;
	j = 0;
	k = 0;

	while (str[i] != '\0')
	{
		if (!is_space(str[i]))
		{
			j = i;
			while (!is_space(str[j]) && str[j] != '\0')
				j++;

			result[k] = malloc((j - i + 1) * sizeof(char));
			if (result[k] == NULL)
			{
				while (k > 0)
					free(result[--k]);
				free(result);
				return (NULL);
			}

			l = 0;
			while (i < j)
			{
				result[k][l] = str[i];
				i++;
				l++;
			}
			result[k][l] = '\0';
			k++;
		}
		i++;
	}

	result[k] = NULL;
	return (result);
}
