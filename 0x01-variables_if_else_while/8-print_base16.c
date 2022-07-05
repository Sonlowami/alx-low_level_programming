#include <stdio.h>

/**
 * main - print all digits of base 16
 *
 * Return: 0
 */

int main(void)
{
	int n;

	for (n = 0x00; n <= 0x09; n++)
		putchar(n + '0');
	for (n = 'a'; n <= 'f'; n++)
		putchar(n);

	putchar('\n');

	return (0);
}
