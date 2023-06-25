#include "main.h"

/**
 * print_square - prints a square, followed by a new line.
 * @size: size of square
 */

void print_square(int size)
{
	int row, column;

	if (size > 0)
	{
		for (row = 0; row < size; row++)
		{
			for (column = 0; column < size; column++)
				_putchar(35);

			_putchar('\n');
		}
	}
	_putchar('\n');
}
