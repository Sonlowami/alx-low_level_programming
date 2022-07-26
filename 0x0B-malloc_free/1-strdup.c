#include <stdlib.h>
#include <string.h>
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
	char *p;

	if (str == NULL)
		return (NULL);
	p = (char *) malloc(sizeof(*str) * strlen(str) + 1);

	if (p == NULL)
		return (NULL);
	for (i = 0; i < strlen(str); i++)
	{
		p[i] = str[i];
	}
	return (p);
}
