#include "main.h"

/**
 * print_to_98 - print natural numbers from a point up to 98
 * @n: the integer starting point
 */
void print_to_98(int n)
{
	if (n <= 98 && n >= 0)
		print_positives(n);
	else if (n <= 98 && n < 0)
		print_negatives(n);
	else if (n > 98)
		print_aboves(n);
}

/**
 * print_aboves - print all numbers from a point
 * up to 98 in descending order
 * @n: starting integer
 */
void print_aboves(int n)
{
	/*first print numbers above 100*/
	int i;

	for (i = n; i > 99; i--)
	{
		_putchar('0' + i / 100);
		_putchar ('0' + (i % 100) / 10);
		_putchar('0' + i % 10);

		_putchar(',');
		_putchar(' ');
	}
	_putchar('9');
	_putchar('9');
	_putchar(',');
	_putchar(' ');


	_putchar('9');
	_putchar('8');
	_putchar(',');
	_putchar(' ');
	_putchar('\n');
}

/**
 * print_negatives - print all numbers less than0 to the screen
 * @n: the starting point
 */
void print_negatives(int n)

	{
		/* first print numbers up to zero */
		int i;

		for (i = n; i < 0; i++)
		{
			_putchar('-');
			/*ignore the first zero*/
			if (-i / 10 != 0)
				_putchar ('0' + (-i / 10));
			_putchar ('0' + (-i % 10));

			/* add separators*/
			_putchar(',');
			_putchar(' ');
		}
		/* then print all numbers after 0*/
		i = 0;
		print_positives(i);
	}

/**
 * print_positives - print positive numbers to stdout
 * @n: the starting point
 */
void print_positives(int n)
{
	int j;

	for (j = n; j <= 98; j++)
	{
		/* ignore the fromt zero*/
		if (j / 10 != 0)
			_putchar('0' + j / 10);
		_putchar('0' + j % 10);

		/* add separators*/
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');
}
