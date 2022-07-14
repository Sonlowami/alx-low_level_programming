#include "main.h"

/**
 * puts_half - prints the last half of the string from the calling function
 * @str: the string to be sectioned
 */
void puts_half(char *str)
{
	int i, x;

	i = 0;
	while (*(str + i) != '\0')
	{
		i++;
	}
	x = i;
	for (i = x / 2; i <= x - 1; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
