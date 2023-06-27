#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse followed by a new line.
 * @s: Pointer to the string to be printed.
 */

void _print_rev(char *s)
{
	if (*s)
	{
		_print_rev(s + 1);
		_putchar(*s);
	}
	else
	{
		_putchar('\n');
	}
}
