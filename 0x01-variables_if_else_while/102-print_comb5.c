#include <stdio.h>
/**
 * main - print a combination of two two-digit numbers
 *
 * Return: 0
 */
int main(void)
{
	int i, j, k, l;

	for (i = 0; i < 10; i++)
	{
		j = 0;
		for (; j < 10; j++)
		{
			k = 0;
			for (; k < 10; k++)
			{
				l = j + 1;
				for (; l < 10; l++)
				{

					putchar(i + '0');
					putchar(j + '0');
					putchar(' ');
					putchar(k + '0');
					putchar(l + '0');
					if (i * 1000 + j * 100 + k * 10 + l < 9899)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
