#include "main.h"

/**
 * print_triangle - prints triangle with the character #
 * @size: size of triangle to draw
 */

void print_triangle(int size)
{
	int length, width;

	if (size > 0)
		for (length = 0; length < size; length++)
		{
			for (width = 0; width < size - length; width++)
				_putchar(' ');

			for (width = 0; width <= length; width++)
				_putchar('#');

			_putchar('\n');
		}

	_putchar('\n');
}
