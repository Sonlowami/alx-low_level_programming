#include "main.h"
/**
 * print_numbers - prints the first 9 digits in one line on the screen
 */
void print_numbers(void)
{
	int i;

	i = 48;
	while (i < 58)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
