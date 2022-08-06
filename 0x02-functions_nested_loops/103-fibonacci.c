#include <stdio.h>
/**
 * main - print all even fib numbers below 4 millions
 *
 * Return: 0
 */
int main(void)
{
	long int j, k, next;

	j = 1;
	k = 2;

	while (j < 4000000)
	{
		printf("%ld", j);

		if (j != 3524578)
			printf(", ");
		next = j + k;
		j = k;
		k = next;
	}
	printf("\n");
	return (0);
}
