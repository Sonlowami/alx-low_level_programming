#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

int binary(int *array, size_t start, size_t end, int value);
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
		return (binary(array, 0, mid, value));
	else if (array[mid] < value)
		return (binary(array, mid, size - 1, value));
	return (-1);
}
/**
 * binary - binary search an array from index a to b
 * @array: the array to search
 * @start: where to begin
 * @end: where to end the search, index excluded
 * @value: the item to search
 *
 * Return: index of the value found, 0 otherwise
 */
int binary(int *array, size_t start, size_t end, int value)
{
	printf("Value found between indexes [%ld] and [%ld]\n", start, end);
	while (start <= end && value >= array[start] && value <= array[end])
	{
		size_t i, mid = start + (end - start) / 2;

		printf("Searching in array: ");
		for (i = start; i <= end; i++)
			(i == end) ? printf("%d\n", array[i]) : printf("%d, ", array[i]);
		if (value == array[mid])
			return (mid);
		else if (value < array[mid])
			end = mid - 1;
		else if (value > array[mid])
			start = mid + 1;
	}
	return (-1);
}
