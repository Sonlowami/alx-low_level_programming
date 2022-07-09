#include "main.h"

void print_to_98(int n)
{
	if (n <= 98 && n >= 0)
		print_positives(n);
	else if (n <= 98 && n < 0)
		print_negatives(n);
	else if (n > 98)
		print_aboves(n);
}
void print_aboves(int n)
{
	/*first print numbers above 100*/
	for (n; n > 99; n--)
	{
		_putchar('0' + n / 100);
		_putchar ('0' + (n % 100) / 10);
		_putchar('0' + n % 10);
		
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
}

/**
 * print_negatives - print all numbers less than0 to the screen
 * @n: the starting point
 */
void print_negatives(int n)

	{
		/* first print numbers up to zero */
		for (n; n < 0; n++)
		{
			_putchar('-');
			/*ignore the first zero*/
			if (-n / 10 != 0)
				_putchar ('0' + (-n / 10));
			_putchar ('0' + (-n % 10));

			/* add separators*/
			_putchar(',');
			_putchar(' ');
		}
		/* then print all numbers after 0*/
		n = 0;
		print_positives(n);
	}

/**
 * print_positives - print positive numbers to stdout
 * @n: the starting point
 */
void print_positives(int n)
{

	for (n; n < 98; n++)
	{
		/* ignore the fromt zero*/
		if (n / 10 != 0)
			_putchar('0' + n / 10);
		_putchar('0' + n % 10);

		/* add separators*/
		_putchar(',');
		_putchar(' ');
	}
}
