#include <stdio.h>

/**
 * fib - find fibunocci number
 * @n: number of fibs
 *
 * Return: integer representing the fibunnoocci number
 */
int fib(int n)
{
	if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	else
		return (fib(n - 1) + fib(n - 2));
}
/**
 * main - print the first 50 fib numbers
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 2; i < 52; i++)
	{
		printf("%d, ", fib(i));
	}
	putchar('\n');
	return (0);
}
