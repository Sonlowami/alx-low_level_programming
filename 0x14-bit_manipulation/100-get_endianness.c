#include "main.h"
/**
 * get_endianness - check endianness
 *
 * Return: 1 for big endian system, 0 for a little endian system
 */
int get_endianness(void)
{
	int i;
	char *p;

	i = 3;
	p = (char *)&i;
	if (*p)
		return (1);
	return (0);
}
