#include "main.h"

/**
 * clear_bit - set the bit at a certain index to 0
 * @n: the number to operate on
 * @index: the position of the bit to clear
 *
 * Return: 1 if successful, -1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i, fit, test;

	if (index > MAX_BITS)
		return (-1);
	i = fit = 1;

	while (i <= index)
	{
		fit *= 2;
		i++;
	}
	test = *n >> index;
	if (test & 1)
		*n = *n - fit;
	return (1);
}
