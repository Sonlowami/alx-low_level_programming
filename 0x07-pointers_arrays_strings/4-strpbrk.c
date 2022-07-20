#include <stddef.h>
#include <stdio.h>

/**
 * _strpbrk - searches a string for any set of bytes
 * @s: the string to search from
 * @accept: the byte set to look for
 *
 * Return: pointer to one of bytes in both s and accept
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*(s + i) == accept[j])
				return (s + i);
		}
	}
	return (NULL);
}
