# include <stdio.h>
# include <stdlib.h>
/**
 * interpolation_search - search through a sorted, regularly spaced array
 * @array: the array to search
 * @size: the size of the array in question
 * @value: the value to search
 *
 * Description: This algorithm will try to estimate the position of the
 *		value given, and narrow down the range
 *
 * Return: the position of the value if found, 0 otherwise
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t high, low, probe;

	if (!array || size == 0)
		return (-1);
	high = size - 1, low = 0;
	while (low <= high && value >= array[low] && value <= array[high])
	{
		probe = low + ((high - low) * ((double)(value - array[low]) /
				(array[high] - array[low])));

		printf("Value checked array[%ld] = [%d]\n", probe, array[probe]);
		if (value == array[probe])
			return (probe);
		else if (value > array[probe])
			low = probe + 1;
		else if (value < array[probe])
			high = probe - 1;
	}
	return (-1);
}
