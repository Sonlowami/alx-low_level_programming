#include <stdio.h>

/**
 * main - print all possible combinations of digits
 *
 * Return: 0
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (i > 0)
				putchar(i + '0');
			putchar(j + '0');
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
