#include "main.h"

/**
 * jack_bauer - print all minutes in a day
 */

void jack_bauer(void)
{
	int i, j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			_putchar('0' + i);
			_putchar(':');
			_putchar('0' + j);
			_putchar('\n');
		}
	}
}
