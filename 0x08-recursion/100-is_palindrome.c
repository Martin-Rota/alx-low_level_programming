#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: The string to calculate the length of.
 *
 * Return: The length of the string.
 */

int _strlen(char *s)

{
	int len = 0;

    while (*s != '\0')
    {
	    len++;
	    s++;
    }

    return (len);
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to check.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */

int is_palindrome(char *s)
{
	int len = 0;
	int start = 0;
	int end = 0;

	if (*s == '\0')
		return (1);

	len = _strlen(s);
	start = 0;
	end = len - 1;

	return (check_palindrome(s, start, end));
}

/**
 * check_palindrome - Checks if a string is a palindrome recursively.
 * @s: The string to check.
 * @start: The starting index of the substring to check.
 * @end: The ending index of the substring to check.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */

int check_palindrome(char *s, int start, int end)
{
	if (start >= end)
		return (1);

	if (s[start] != s[end])
		return (0);

	return (check_palindrome(s, start + 1, end - 1));
}
