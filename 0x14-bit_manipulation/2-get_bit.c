#include "main.h"

/**
 * get_bit - get bit at index
 * @n: the number whose bits shalll be searched
 * @index: the position of the bit we are interested in
 *
 * Return: the bit at position index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int shifted;

	shifted = n >> index;
	if (shifted & 1)
		return (1);
	else if ((~shifted) & 1)
		return (0);
	else
		return (-1);
}
