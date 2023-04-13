#include <stdio.h>
#include <stdlib.h>

int binary(int *array, int start, int end, int value);
/**
 * advanced_binary - search an element from an array using binary search
 * @array: the array to search
 * @size: the size of the array
 * @value: the item to look for
 *
 * Return: the index of the 1st occurance of value, or -1 if nothing found
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (!array)
		return (-1);

	if (size == 1 && array[0] != value)
		return (-1);
	return (binary(array, 0, size - 1, value));
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
int binary(int *array, int start, int end, int value)
{
	int i, mid = start + (end - start) / 2;

	printf("Searching in array: ");
	for (i = start; i <= end; i++)
		(i <= end - 1) ? printf("%d, ", array[i]) : printf("%d\n", array[i]);
	if (start >= end && array[start] != value)
		return (-1);
	if (array[mid] == value)
	{
		if (array[mid - 1] != value)
			return (mid);
		return (binary(array, start, mid, value));
	}
	else if (array[mid] > value)
		return (binary(array, start,  mid - 1, value));
	else if (array[mid] < value)
		return (binary(array, mid + 1, end, value));
	return (-1);
}
