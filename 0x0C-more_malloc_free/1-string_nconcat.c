#include <stdlib.h>
#include "main.h"

/**
 * _strlen - calculate and return string length
 * @string: string
 * Return: string length
 */
int _strlen(char *string)
{
	int len;

	for (len = 0; string[len] != '\0'; len++)
		;
	return (len);
}

/**
 * string_nconcat - concatenate s1 and n bytes of s2; return ptr to string
 * @s1: string 1
 * @s2: string 2
 * @n: n bytes to concat from string 2
 * Return: pointer to concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int s1_len, s2_len, idx1, idx2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s1_len = _strlen(s1);
	s2_len = _strlen(s2);

	if (n >= s2_len)
		n = s2_len;

	ptr = malloc(sizeof(*ptr) * (s1_len + n + 1));
	if (ptr == NULL)
		return (NULL);

	for (idx1 = 0; s1[idx1] != '\0'; idx1++)
		ptr[idx1] = s1[idx1];

	for (idx2 = 0; idx2 < n; idx2++)
		ptr[idx1 + idx2] = s2[idx2];

	ptr[idx1 + idx2] = '\0';

	return (ptr);
}
