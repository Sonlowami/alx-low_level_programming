#include <stdio.h>
/**
 * main - print a combination of two unique digits
 *
 * Return: 0
 */
int main(void)
{
	int i, j, k;

	for (i = 0; i < 8; i++)
	{
		for (j = i + 1; j < 9; j++)
		{
			for (k = j + 1; k < 10; k++)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');
				if (i * 100 + j * 10 + k < 789)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
