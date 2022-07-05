#include <stdio.h>

/**
 * main - print all letters of alphabet in lower case
 *
 * Return: 0
 */

int main(void)
{
	int ch;

	for (ch = 97; ch <= 122; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
