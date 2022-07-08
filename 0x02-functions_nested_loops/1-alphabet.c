#include <stdio.h>
#include "main.h"


void print_alphabet(void);


/**
 * print_alphabet - print lower case alphabets
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
		_putchar(i);
	_putchar('\n');
}
