#include <stdlib.h>

/**
 * array_range -create an array of ints
 * @min: the minimum int to include
 * @max: the maximum int to include
 *
 * Return: pointer to newly created array
 *	Null if malloc fails or min > max
 */
int *array_range(int min, int max)
{
	int i, j;
	int *x;

	if (min > max)
		return (NULL);
	x = malloc(sizeof(int) * (max - min + 1));
	if (x == NULL)
		return (NULL);
	j = 0;
	for (i = min; i <= max; i++)
	{
		x[j] = i;
		j++;
	}
	return (x);
}

