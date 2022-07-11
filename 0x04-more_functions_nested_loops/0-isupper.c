#include "main.h"

/**
 * _isupper - checks if a character is an upper case
 * @c: the integer representing the ASCII code for the character to check
 *
 * Return: 1 if c is uppercase
 *	0 otherwise
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}
