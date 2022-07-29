#include <stdlib.h>

char *_memset(char *s, char b, unsigned int n);

/**
 * _calloc - allocate a contiguous block of memory to
 * an array
 * @nmemb: the number of elements of the array
 * @size: the size of each element
 *
 * Return: void pointer to new array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	return (_memset(p, 0, nmemb * size));
}


/**
 * _memset - fills n parts of memory with a constant value
 * @s: the character array that contain a block of memory
 * @b: the character value
 * @n: unsigned int for number of addresses to fill
 *
 * Return: pointer to string s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{

		*(s + i) = b;
	}
	return (s);
}
