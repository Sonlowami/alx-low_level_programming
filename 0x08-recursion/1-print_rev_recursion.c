#include "main.h"
#include <stdio.h>

/**
 * print_rev - recurse-print a string
 * @s: the string
 * @i: the size of the string
 */
void print_rev(char *s, int i)
{
	if (i == 0)
		_putchar(s[0]);
	else
	{
		_putchar(s[i - 1]);
		i--;
		print_rev(s, i);
	}
}
/**
 * _print_rev_recursion - print a string in reverse recursively
 * @s: string to print
 */

void _print_rev_recursion(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	print_rev(s, i);
}


