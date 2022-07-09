#include "main.h"

/**
 * jack_bauer - print all minutes in a day
 */

void jack_bauer(void)
{
	int i, j, k;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 6; j++)
		{
			for (k = 0; k < 10; k++)
			{
				if (i < 10)
				{
					_putchar('0');
					_putchar('0' + i);
				}
				else if (i < 20 && i > 10)
				{
					_putchar('1');
					_putchar('0' + (i % 10));
				}
				else
				{
					_putchar('2');
					_putchar('0' + (i % 10));
				}
				_putchar(':');
				_putchar('0' + j);
				_putchar('0' + k);
				_putchar('\n');
			}
		}
	}
}
