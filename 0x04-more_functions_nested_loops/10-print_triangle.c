#include "main.h"

/**
 * print_triangle - uses # and space to print a triangle on the screen
 * @size: the number of lines the triangle should be tall
 */

void print_triangle(int size)
{
	int b, i;

	for (b = size - 1; b >= 0; b--)
	{
		for (i = b; i > 0; i--)
			_putchar(' ');
		print_h(size - b);
		_putchar('\n');
	}

	if (size <= 0)
		_putchar ('\n');

}

/**
 * print_h - prints # to the screen
 * @sz: number of # characters to print
 */
void print_h(int sz)
{
	int h;

	for (h = 1; h <= sz; h++)
		_putchar('#');
}
