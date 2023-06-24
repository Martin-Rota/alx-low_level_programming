#include "main.h"

/**
 * _isdigit - function checks if an entry is a digit(0 - 9)
 *
 * @c: this is the entry
 *
 * Return: 0
 *
 **/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}
