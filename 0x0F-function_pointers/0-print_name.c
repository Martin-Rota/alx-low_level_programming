#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Prints a name using the provided function pointer.
 * @name: Pointer to the name to be printed.
 * @f: Pointer to the function that will print the name.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
