#include "main.h"

/**
 * print_last_digit - print the last digit in a number
 * @x: the number to extract last digit from
 *
 * Return: the last digit
 */

int print_last_digit(int x)
{
	_putchar((x % 10) + '0');
	return (x % 10);
}
