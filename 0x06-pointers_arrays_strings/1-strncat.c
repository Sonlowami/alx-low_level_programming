#include "main.h"

/**
 * _strncat - concatenate n bytes of chars from src
 * address to dest address
 * @src: address to copy from
 * @dest: address to append to
 * @n: number of bytes to append
 *
 * Return: destination address
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;

	char *end = dest + _strcount(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
		*end++ = src[i];

	if (i < n && src[i] == '\0')
		*end++ = '\0';
	return (dest);
}

/**
 * _strcount - counts the characters in a string
 * @source: the string to calculate
 *
 * Return: size of the string
 */

int _strcount(char *source)
{
	int i;

	for (i = 0; source[i] != '\0'; i++)
		;
	return (i);
}
