# include <stdio.h>
# include <stdlib.h>
/**
 * linear_search - Find the element in an array using linear search
 * @array: the array to search
 * @size: the size of parameter array
 * @value: the value to look for
 *
 * Return: index of the value on success, -1 otherwise
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
