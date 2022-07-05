#include <stdio.h>

/**
 * main - print all single digits
 *
 * Return: 0
 */

int main(void)
{
	int c;

	c = 0;
	while (c < 10)
	{
		printf("%d", c);
		c++;
	}
	putchar('\n');
	return (0);
}
