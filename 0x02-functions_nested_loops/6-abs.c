#include "main.h"

/**
 * _abs - compute the absolute value of a number
 * @x: a number to compute the absolute value against
 *
 * Return: an int value of the absolute value
 */
int _abs(int x)
{
	if (x < 0)
		return (x * (-1));
	else
		return (x);
}
