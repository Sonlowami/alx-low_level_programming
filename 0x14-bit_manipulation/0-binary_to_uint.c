#include "main.h"

int chr_to_int(const char *ch);
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
	for (i = 0; b[i] != '\0'; i++)
	{
		bin[i] = chr_to_int(b + i);
	}
	n = 1, dec = 0;
	i--;
	for (; i >= 0; i--)
	{
		if (bin[i] == INVALID)
		{
			free(bin);
			return (0);
		}
		dec += bin[i] * n;
		n *= 2;
	}
	free(bin);
	return (dec);
}
/**
 * chr_to_int - change a character into an int
 * @ch: pointer to the character
 * Return: 0 or 1, -1 if wrong
 */
int chr_to_int(const char *ch)
{
	if (*ch == '0')
		return (0);
	else if (*ch == '1')
		return (1);
	else
		return (INVALID);
}
