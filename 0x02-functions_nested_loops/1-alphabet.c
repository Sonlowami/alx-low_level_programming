#include <stdio.h>
#include "main.h"

/**
 * main - serve as entry point for the compiler
 *
 * Return: 0
 */

void print_alphabet(void);

int main(void)
{
	print_alphabet();
	return (0);
}

/**
 * print_alphabet - print lower case alphabets
 */

void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
		putchar(i);
	putchar('\n');
}
