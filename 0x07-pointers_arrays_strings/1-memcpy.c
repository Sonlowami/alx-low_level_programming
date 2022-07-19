/**
 * _memcpy - copies a memory area from one area of memory
 * to another
 * @src: the pointer to the source array
 * @dest: a pointer to the destination
 * @n: unassigned int for quantity of copy
 *
 * Return: pointer to the destination memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest++) = *(src + i);
	}
	return (dest);
}

