#include <stddef.h>
#include <stdio.h>

/**
 * compare - compare two character array
 * @c: first character array
 * @ch: second character array
 *
 * Return: 1 if they are the same and
 * 0 if they differ
 */
int compare(char *c, char *ch)
{
	while (*c && *ch)
	{
		if (*c == *ch)
		{
			(c++);
			(ch++);
		}
		else
			return (0);
	}
	return (1);
}
/**
 * _strstr - locate a substring in a large string
 * @haystack: the larger string
 * @needle: the smaller string *
 * Return: pointer to the first occuranceof the substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i, r;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			r = compare(haystack + i, needle);
			if (r == 1)
				return (haystack + i);
		}
	}
	return (NULL);
}

