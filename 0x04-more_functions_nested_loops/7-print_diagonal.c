#include "main.h"

/**
 * print_diagonal - write a diagonal line to the standard output
 * @n: length of the line
 */

void print_diagonal(int n)
{
	int i;

	if (n > 0)
	{
	for (i = 0; i < n; i++)
		print_slash(i);
	}
	else
		_putchar('\n');
}

/**
 * print_slash - write one backslash on one line
 * Should be called recursively to create a diagonal line
 * @x: number of spaces before the backslash
 */

void print_slash(int x)
{
	int j;

	for (j = 0; j < x; j++)
		_putchar(' ');
	_putchar('\\');
	_putchar('\n');
}
