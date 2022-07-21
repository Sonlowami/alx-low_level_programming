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
 * len_recourse - find length of string
 * @s: pointer to the string
 * @len: the length of array of characters
 *
 * Return: int len
 */
int len_recourse(char *s, int len)
{
	if (*s != '\0')
	{
		len++;
		s++;
		return (len_recourse(s, len));
	}


	else
	{
		return (len);
	}
}
/**
 * _print_rev_recursion - print a string in reverse recursively
 * @s: string to print
 */

void _print_rev_recursion(char *s)
{
	int i, x;

	x = 0;
	i = len_recourse(s, x);
	print_rev(s, i);
}
