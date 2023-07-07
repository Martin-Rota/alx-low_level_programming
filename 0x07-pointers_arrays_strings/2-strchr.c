/**
 * _strchr - Locates a character in a string
 * @s: Pointer to the string to be searched
 * @c: Character to be located
 *
 * Description: This function searches for the first occurrence of the character
 * c in the string s. It returns a pointer to the first occurrence of c in s, or
 * NULL if the character is not found.
 *
 * Return: A pointer to the first occurrence of c in s, or NULL if not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return s;
		s++;
	}

	if (*s == c)
		return s;

	return NULL;
}
