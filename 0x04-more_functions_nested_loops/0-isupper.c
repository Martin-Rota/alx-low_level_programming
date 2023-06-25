#include "main.h"

/**
 * _isupper - Checks if uppercase
 *
 * returns 1, 0 if lowercase
 *
 * @c: entry to be checked
 **/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	return (0);
}
