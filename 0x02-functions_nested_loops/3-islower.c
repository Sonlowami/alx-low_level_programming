#include "main.h"

/**
 * _islower - chech if a character is lowercase
 * @c: integer that represent a lower case character
 *
 * Return: 1 if c is lowercase
 *	0 if c is in something else
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
