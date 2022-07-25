#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the sum of two CL arguments
 * @argc: number of arguments
 * @argv: array of string arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i, sum;

	sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) > 0)
			sum += atoi(argv[i]);
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);


	return (0);
}

