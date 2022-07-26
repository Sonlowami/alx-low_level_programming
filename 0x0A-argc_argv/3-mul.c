#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the product of two CL arguments
 * @argc: number of arguments
 * @argv: array of string arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}

