#include <stdio.h>
/**
 * main - print the first 50 fib numbers
 *
 * Return: 0
 */
int main(void)
{
	long int i, j, k, next;

	i = j = 1;
	k = 2;
	for (; i <= 50; i++)
	{
		printf("%ld,", j);

		if (j != 20365011074)
			printf(" ");

		next = j + k;
		j = k;
		k = next;
	}
	printf("\n");
	return (0);
}

