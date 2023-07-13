#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * is_space - Checks if a character is a space character.
 * @c: The character to check.
 *
 * Return: 1 if c is a space character, 0 otherwise.
 */
int is_space(char c)
{
	return c == ' ' || c == '\t' || c == '\n';
}

/**
 * count_words - Counts the number of words in a string.
 * @str: The input string.
 *
 * Return: The number of words.
 */
int count_words(char *str)
{
	int count = 0;
	int is_word = 0;

	for (int i = 0; str[i] != '\0'; i++)
	{
		if (is_space(str[i]))
		{
			is_word = 0;
		}
		else if (is_word == 0)
		{
			is_word = 1;
			count++;
		}
	}

	return (count);
}

/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: A pointer to an array of strings (words).
 *         Returns NULL if str == NULL or str == "" or if memory allocation fails.
 */
char **strtow(char *str)
{
	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}

	int word_count = count_words(str);
	char **words = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (words == NULL)
	{
		return (NULL);
	}

	int word_index = 0;
	int word_length = 0;
	int is_word = 0;

	for (int i = 0; str[i] != '\0'; i++)
	{
		if (is_space(str[i]))
		{
			is_word = 0;
		}
		else if (is_word == 0)
		{
			is_word = 1;
			word_length = 1;

			int j;
			for (j = i + 1; str[j] != '\0' && !is_space(str[j]); j++)
			{
				word_length++;
			}

			words[word_index] = (char *)malloc(sizeof(char) * (word_length + 1));
			if (words[word_index] == NULL)
			{
				for (int k = 0; k < word_index; k++)
				{
					free(words[k]);
				}
				free(words);
				return (NULL);
			}

			strncpy(words[word_index], &str[i], word_length);
			words[word_index][word_length] = '\0';
			word_index++;

			i = j - 1;
		}
	}

	words[word_index] = NULL;

	return (words);
}
