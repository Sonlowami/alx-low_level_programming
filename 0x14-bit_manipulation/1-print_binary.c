#include "main.h"

/**
 * print_binary -print to stdout the binary representation of
 * a number
 * @n: the number in question
 */

void print_binary(unsigned long int n)
{
	int i, state;
	unsigned long int shifted;

	i = MAX_BITS - 1;
	state = OUT;

	for (; i >= 0; i--)
	{
		shifted = n >> i;
		if (shifted & 1)
		{
			putchar('1');
			state = IN;
		}

		else if (state)
			putchar('0');
	}
	if (!state)
		putchar ('0');
}

