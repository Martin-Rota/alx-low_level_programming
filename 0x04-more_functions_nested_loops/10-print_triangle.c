#include "main.h"

/**
 * print_triangle - prints triangle with the character #
 * @size: size of triangle to draw
 */

void print_triangle(int size)

{
	int replay, count;

	if (size < 1)
	{
		_putchar('\n');
	}

	for (replay = 0; replay < size; replay++)
	{
		for (count = size - replay; count > 1; count--)
			_putchar(' ');
		for (count = replay; count >= 0; count--)
			_putchar('#');
		_putchar('\n');
	}
}
