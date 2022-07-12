
#include "stdio.h"

/**
 * main - print numbers from 1 to 100
 * print Fizz for multiplesof 3
 * print Buzz for multiplesof 5
 * print FizzBuzz for multiples of both 3 and 5
 *
 * Return: int 0
 */

int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);

		/*add a space after each output, except the last*/
		if (i != 100)
			printf("%c", ' ');
	}
	printf("%c", '\n');
	return (0);
}
