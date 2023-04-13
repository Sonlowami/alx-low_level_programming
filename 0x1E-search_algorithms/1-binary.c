#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * binary_search - search an element from an array using binary search
 * @array: the array to search
 * @size: the size of the array
 * @value: the item to look for
 *
 * Return: the index of the array, or -1 if nothing found
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, mid = size / 2;

	if (!array)
		return (-1);

	if (size == 1 && array[0] != value)
		return (-1);
	printf("Searching in array: ");
	for (i = 0; i < size; i++)
	{
		if (i < size - 1)
			printf("%d, ", array[i]);
		else
			printf("%d\n", array[i]);
	}
	if (array[mid] == value)
		return (mid);
	else if (array[mid] > value)
		return (binary_search(array, mid, value));
	else if (array[mid] < value)
		return (binary_search(array + mid, mid, value));
	return (-1);
}
