#include <stdio.h>

/**
 * main - print the largest prime factor  of a number
 * on the screen
 * Return: 0
 */

int main(void)
{
	long int i, l, n;

	n = 612852475143;
	for (i = 2; i < n; i++)
	{
		while (n % i == 0)
		{
			n = n / i;
			l = i;
		}
	}
	printf("%ld\n", l);
	return (0);
}
