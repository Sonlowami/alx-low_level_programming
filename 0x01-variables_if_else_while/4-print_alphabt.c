#include <stdio.h>

/**
 *main - function prints all lower case alphabets except q and e
 *
 *Return: 0
 */

int main(void)
{
	int ch;

	for (ch = 97; ch <= 122; ch++)
	{
		if (ch == 'e' || ch == 'q')
			;
		else
			putchar(ch);
	}
	putchar('\n');
	return (0);
}
