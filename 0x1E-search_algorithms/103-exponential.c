# include <stdio.h>
# include <stdlib.h>

int binary(int *array, size_t start, size_t end, int value);
/**
 * exponential_search - find the value in a sorted array of integers
 * @array: the array to search
 * @size: the size of the array
 * @value: the value to look for
 *
 * Description: This algorithm combines linear and binary search
 *
 * Return: index of the value if found, -1 otherwise
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array || size == 0)
		return (-1);

	if (array[0] == value)
	{
		printf("Value checked array[0] = [%d]", array[0]);
		return (0);
	}

	i = 1;
	while (i < size)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		else if (value > array[i])
			i *= 2;
		else if (value < array[i])
		{
			i /= 2;
			return (binary(array, i, 2 * i, value));
		}
	}
	return (binary(array, i / 2, size - 1, value));
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
