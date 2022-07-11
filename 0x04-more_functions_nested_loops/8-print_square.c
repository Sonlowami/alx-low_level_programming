#include "main.h"

/**
 * print_square - writes a square using # to the screen
 * @size: the width and height of the square; should be int
 */

void print_square(int size)
{
	int w, h;

	if (size > 0)
	{
		for (h = 0; h < size; h++)
		{
			for (w = 0; w < size; w++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
