#include "main.h"
/**
 * print_most_numbers - prints the first 9 digits
 * except 2 and 4 in one line on the screen
 */
void print_most_numbers(void)
{
	int i;

	i = 48;
	while (i < 58)
	{
		if (i != 50 && i != 52)
			_putchar(i);
		i++;
	}
	_putchar('\n');
}
