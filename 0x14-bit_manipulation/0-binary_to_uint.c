#include "main.h"

/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: the character string containing binary number
 *
 * Return: unsigned int dec
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec, n, *bin;
	int i;

	if (!b)
		return (0);
	bin = malloc(sizeof(int) * strlen(b));
	for (i = 0; b + i; i++)
	{
		bin[i] = atoi(b + i);
	}
	n = 1, dec = 0;
	i--;
	for (; i >= 0; i--)
	{
		if (bin[i] > 2)
			continue;
		dec += bin[i] * n;
		n *= 2;
	}
	free(bin);
	return (dec);
}

