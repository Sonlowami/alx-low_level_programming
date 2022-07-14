#include "main.h"
#include <stdio.h>

/**
 * print_array - print a certain number of elements from
 * an array of integers
 * @a: the integer array to print from
 * @n: the number of elements to print
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;

	if (i >= n)
		printf("\n");
	for (i = 0; i < n; i++)
	{
		if (i < n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d\n", a[i]);
	}
}
