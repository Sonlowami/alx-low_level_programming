#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - concatenate s1 with n
 * bytes of s2
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 * @n: the number of bytes of s2 to append
 *
 * Return: pointer to new string if successful
 *	NULL if malloc fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i;
	unsigned int j;
	char *p;

	p = malloc(sizeof(*s1) * _strlen(s1) + sizeof(*s2) * n);
	if (p)
	{
		if (s1)
		{
			for (i = 0; i < _strlen(s1); i++)
				p[i] = s1[i];
		}
		if (s2)
		{
			for (j = 0; j < n; j++)
			{
				if (s2[j] == '\0')
					break;
				p[i + j] = s2[j];
			}
			p[i + j + 1] = '\0';
		}
		return (p);
	}
	return (NULL);
}
/**
 * _strlen - computes and returns the length of a string
 * @s: the character array (string) to be computed
 *
 * Return: int len for string length
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (*(s + len) != '\0')
	{
		len++;
	}
	return (len);
}
