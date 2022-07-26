#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the number of coins to make a change
 * @argc: number of arguments
 * @argv: array of string arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i, coins, n;
	int c[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	n = atoi(argv[1]);
	coins = 0;

	for (i = 0; i < 5; i++)
	{
		if (n / c[i] > 0)
		{
			coins += n / c[i];
			n = n % c[i];
		}

	}
	printf("%d\n", coins);


	return (0);
}

