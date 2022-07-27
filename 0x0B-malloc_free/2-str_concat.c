#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * str_concat - concat strings into new memory and
 * return pointer to new memory
 * @s1: the first string
 * @s2: the second string
 *
 * Return: pointer, p if successful
 *	Null otherwise
 */
char *str_concat(char *s1, char *s2)
{
	unsigned long int i, j;
	char *p;

	p = (char *) malloc(sizeof(*s1) * (strlen(s1) + strlen(s2) + 1));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < strlen(s1); i++)
	{
		p[i] = s1[i];
	}
	for (j = 0; j < strlen(s2); j++)
	{
		p[i + j] = s2[j];
	}
	p[strlen(s1) + strlen(s2)] = '\0';
	return (p);
}

