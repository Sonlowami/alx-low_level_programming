#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - simulates a chessboard in terminal
 * @a: the number of rows
 */

void print_chessboard(char (*a)[8])
{
	int i, j;
	char (*p)[8];

	p = a;
	for (j = 0; (*p)[j]; j++)
	{
		for (i = 0; i < 8; i++)
		{
			_putchar((*p)[i]);
		}
		p++;
		_putchar('\n');
	}
}
