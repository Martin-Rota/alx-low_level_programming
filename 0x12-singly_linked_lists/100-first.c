#include <stdio.h>

/**
 * print_before_main - Function to be executed before main.
 */
void __attribute__((constructor)) print_before_main()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
