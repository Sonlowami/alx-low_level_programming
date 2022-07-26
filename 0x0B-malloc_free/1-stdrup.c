#include <stdlib.h>
/**
 * _strdup - copy a string and return a pointer
 * to a memory location of that copy
 * @str: the string to copy
 *
 * Return: pointer, p if successful
 *	NULL otherwise
 */
char *_strdup(char *str)
{
	unsigned long int i;

	char *p = (char *) malloc(sizeof(str));

	if (p == NULL)
		return (0);
	for (i = 0; i < sizeof(str); i++)
	{
		p[i] = str[i];
	}
	return (p);
}
