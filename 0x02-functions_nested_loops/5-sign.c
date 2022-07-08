#include "main.h"

/**
 * print_sign - checks if the number is positive, negative or 0 and
 * print it's sign
 * @n: an integer to check the sign against
 *
 * Return: 1 if positive
 *	0 if 0
 *	-1 if negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
