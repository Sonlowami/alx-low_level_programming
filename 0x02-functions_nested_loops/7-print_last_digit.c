#include "main.h"

/**
 * print_last_digit - print the last digit in a number
 * @x: the number to extract last digit from
 *
 * Return: the last digit
 */

int print_last_digit(int x)
{
	if (x >= 0)
		_putchar('0' + (x % 10));
	else
		_putchar('0' + (-1 * (x % 10)));
	return (x % 10);
}
