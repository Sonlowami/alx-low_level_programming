#include <stddef.h>
/**
 * _strchr - search for the first occurance of a character in a string
 * @s: the string to look into
 * @c:the character to look for
 *
 * Return: address of the first occurance
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}
	return (NULL);
}
