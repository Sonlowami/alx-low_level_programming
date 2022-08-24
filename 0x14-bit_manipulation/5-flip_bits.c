#include "main.h"

/**
 * flip_bits - count the number of bit flips needed to change one
 * number into another
 * @n: the number to change
 * @m: the number to become
 *
 * Return: number of bit flips
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int m2;
	unsigned int fit_n, fit_m, state;
	int i, count;

	m2 = ~m;
	i = MAX_BITS - 1;
	state = OUT, count = 0;
	for (; i >= 0; i--)
	{
		fit_n = n >> i;
		fit_m = m2 >> i;
		if (!state && ((fit_n & 1) || (fit_m & 1)))
			state = IN;
		if (state)
		{
			if ((fit_n & 1) == (fit_m & 1))
				count++;
		}
	}
	return (count);
}
