#include <stdio.h>

/**
 * main - print alphabet lower case, then upper case
 *
 * Return: (0)
 */

int main(void)
{
	int ch;
	
	for (ch = 97; ch < 123; ch++)
		putchar(ch);
	for (ch = 65; ch <= 90; ch++)
		putchar(ch);
	putchar('\n');
}
