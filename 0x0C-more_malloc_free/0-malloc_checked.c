#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: the size or number of bytes to allocate
 *
 * Return: void pointer
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
