#include <stdio.h>

/**
 * main - print all it's arguments
 * @argc: number of arguments
 * @argv: array of string arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

