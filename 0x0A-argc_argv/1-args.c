#include <stdio.h>

/**
 * main - print the number of it's arguments
 * @argc: number of arguments
 * @argv: array of string arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	if (*argv)
		printf("%d\n", argc - 1);
	return (0);
}

