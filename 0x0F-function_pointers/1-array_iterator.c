#include "function_pointers.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * array_iterator - loop through an array, taking
 * actions specified in last parameter on each
 * @array: the array of intsto process
 * @size: the size of the array
 * @action: pointer to a function that carries out the action
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{

	if (array != NULL && action != NULL)
	{
	size_t i;
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
