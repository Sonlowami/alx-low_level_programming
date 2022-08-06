#include <stdio.h>
/**
 * main - print sum of even fib numbers below 4 millions
 *
 * Return: 0
 */
int main(void)
{
	long int j, k, next, sum;

	j = 1;
	k = 2;
	sum = 0;
	while (j < 4000000)
	{
		if (j % 2 == 0)
			sum += j;

		next = j + k;
		j = k;
		k = next;
	}
	printf("%ld\n", sum);
	return (0);
}
