#include <stdlib.h>
#include <stdio.h>
/**
 * mul - multiply 2 CL arguments
 * @n1: argument 1
 * @n2: argument 2
 *
 * Return: product of n1 and n2
 */
int mul(int n1, int n2)
{
	return (n1 * n2);
}
/**
 * main - get commandline arguments
 *@argc: number of arguments
 *@argv: array of commandline arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	if (!atoi(argv[1]) || !atoi(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}
	printf("%d\n", mul(atoi(argv[1]), atoi(argv[2])));
	return (0);
}
