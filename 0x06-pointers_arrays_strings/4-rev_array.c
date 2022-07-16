#include "main.h"

/**
 * reverse_array - reverse an array of ints
 * @a: the array to be reversed
 * @n: the size of a
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - 1 - i] = temp;
	}
}
