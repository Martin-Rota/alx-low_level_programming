#include "main.h"

/**
 * print_triangle - prints triangle with the character #
 * @size: size of triangle to draw
 */

void print_triangle(int size)
{
	int length, width;

	if (size <= 0)
		_putchar('\n');

	for (length = 1; length <= size; length++)
	{
		for (width = 1; width <= length; width++)
		{
			_putchar('#');
		}
		
		_putchar('\n');
	}
}
