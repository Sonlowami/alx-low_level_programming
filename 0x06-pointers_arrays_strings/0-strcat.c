#include "main.h"
/**
 * _strcat - append text from one memory address
 * to text in another memory address, overwriting the '\0'
 * @src: source address
 * @dest: the destination address
 *
 * Return: destination address
 */
char *_strcat(char *dest, char *src)
{
	int i;

	char *end = dest + _strcount(dest);

	for (i = 0; src[i]  != '\0'; i++)
		*end++ = src[i];
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
