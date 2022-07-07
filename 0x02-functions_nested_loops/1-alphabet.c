#include <stdio.h>
#include "main.h"


void print_alphabet(void);


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

/**
 * main - serve as entry point for the compiler
 *
 * Return: 0
 */


int main(void)
{
	print_alphabet();
	return (0);
}
