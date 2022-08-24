#include "main.h"

/**
 * set_bit - change the bit at index to 1
 * @n: the number to change
 * @index: the bit position to change
 *
 * Return: 1 on success, -1 on failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i, fit;

	if (index > MAX_BITS)
		return (-1);
	i = fit = 1;
	while (i <= index)
	{
		fit *= 2;
		i++;
	}
	*n = *n | fit;

	return (1);
}
