#include "main.h"

/**
 * _isalpha - check if c is an upper case or lower case or something else
 * @c: integer argument
 *
 * Return: 1 if true; 0 if false
 */
int _isalpha(int c)
{
	if (c > 64 && c < 91 || c > 96 && c < 123)
		return (1);
	else
		return (0);
}
