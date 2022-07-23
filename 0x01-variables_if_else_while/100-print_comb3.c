#include <stdio.h>
#define IN 1
#define OUT 0
/**
 * print_chars - print characters on the board
 * @i: the tens
 * @j: the ones
 * @n: the needed combination of two digits
 */
void print_chars(int i, int j, int n)
{

	putchar(i + '0');
	putchar(j + '0');
	if (n != 89)
	{
		putchar(',');
		putchar(' ');
	}
}
/**
 * main - print a combination of two unique digits
 *
 * Return: 0
 */
int main(void)
{
	int x[200];
	int i, j, filled, n1, n2;
	int state = OUT;

	filled = 0;
	for (i = 0; i < 10; i++)
	{
		for (j = 1; j < 10; j++)
		{
			int k;

			n1 = i * 10 + j;
			n2 = j * 10 + i;
			for (k = 0; k <= filled && filled < 100; k++)
			{
				if (x[k] == n1 || x[k] == n2)
				{
					state = IN;
					break;
				}
				else if (state == IN)
					state = OUT;
			}
			if (state == IN)
				continue;
			if (state == OUT && i != j)
			{
				x[filled] = n1;
				x[filled + 1] = n2;
				filled += 2;
				print_chars(i, j, n1);
			}
		}
	}
	putchar('\n');
	return (0);
}
