#include <stdio.h>
/**
 * main - print it's name
 * @argc: number of string arguments
 * @argv: the array of string arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
