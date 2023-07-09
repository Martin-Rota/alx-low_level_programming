#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse recursively.
 * @s: The string to be printed.
 */

void _print_rev_recursion(char *s)
{
	putchar(*s);
	_print_rev_recursion(s + 1);
}
