#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - search an int in an array of ints
 * @array: the array of ints to scrumble
 * @size: the size oth array
 * @cmp: the pointer to function that compare
 *
 * Return: index of the first match
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size == 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
