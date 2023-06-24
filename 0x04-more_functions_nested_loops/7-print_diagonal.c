#include "main.h"

/**
 * print_diagonal - draws a diagonal line in the terminal
 * @n: number of times the character '\' should be printed
 */

void print_diagonal(int n)

{
	int draw;
	int spaces;

	if (n > 0)
	{
		for (draw = 0; draw < n; draw++)
		{
			for (space = 0; space < draw; space++)
				_putchar(' ');

			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
