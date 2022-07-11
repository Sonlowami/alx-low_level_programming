#include "main.h"

/**
 * print_line - print a streight line on screen
 * @n: length of the line
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar('_');
	_putchar('\n');
}
