# include <stdio.h>
# include <stdlib.h>
# include <math.h>


int linear(int *array, size_t start, size_t n, int value);

/**
 * jump_search - Search a value in a sorted array of integers
 * @array: the array to search
 * @size: the number of elements in the array
 * @value: the item to look for
 *
 * Return: index of value if found, -1 otherwise
 */
int jump_search(int *array, size_t size, int value)
{
	size_t m, i;

	if (!array)
		return (-1);
	m = sqrt(size);
	for (i = 0; i < size; i+=m)
	{
		if (array[i] >= value)
		{
			printf("Value found between indices [%ld] and [%ld]\n", i - m, i);
			return (linear(array, (i - m), i + 1, value));
		}
		printf("Value checked array[%ld]: [%d]\n", i, array[i]);
	}
	return (-1);
}

/**
 * linear - perform a linear search on a section of an array
 * @array: pointer to where the array begins
 * @start: index to start search on
 * @n: index to end search on
 * value: the actual thing we are looking for
 *
 * Return: the position of value, or -1 otherwise
 */
int linear(int *array, size_t start, size_t n, int value)
{
	size_t i;

	if (n == 0 || !array)
		return (-1);
	for(i = start; i < n; i++)
	{
		printf("Value ckecked array[%ld]: [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
