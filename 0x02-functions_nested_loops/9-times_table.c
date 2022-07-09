#include "main.h"

/**
 * times_table - print multiplication table from 0 to 9
 */
void times_table(void)
{
	int i, j, c;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			c = i * j;

			/*format the output*/
			if (c / 10 != 0)
				_putchar('0' + (c / 10));
			if ((c == 0) || (c % 9 != 0))
			{
			_putchar('0' + (c % 10));
			_putchar(',');
			_putchar(' ');
			}
			else if ((c != 0) && (c % 9 == 0) && (i == 9 || j == 9))
			{
				_putchar('0' + (c % 10));
				_putchar('\n');
			}
		}
	}
}
