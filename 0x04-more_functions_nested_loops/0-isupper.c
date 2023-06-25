#include "main.h"

/**
 * _isupper - Checks if uppercase
 *
 * returns 1, 0 if lowercase
 *
 * @c: this is the entry
 **/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
	return (0);
}
