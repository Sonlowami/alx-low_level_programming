#include <stdlib.h>
/**
 * alloc_grid - create a 2D array of ints
 * snd return a pointer to it
 * @width: number of columns of the array
 * @height: number  of rows of the array
 *
 * Return: a pointer to the array, p
 */
int **alloc_grid(int width, int height)
{
	int i, j, k;
	int **p;

	if (width <= 0 || height <= 0)
		return (NULL);
	p = (int **) malloc(sizeof(int *) * height);

	if (p)
	{
		for (i = 0; i < height; i++)
		{
			p[i] = malloc(sizeof(int) * width);
		}

		for (k = 0; k < height; k++)
		{
			for (j = 0; j < width; j++)
			{
				p[k][j] = 0;
			}
		}
		return (p);
	}
	return (NULL);
}
