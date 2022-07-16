#include "main.h"
/**
 * _strcmp - compare binary values of two strings
 * by the first unique character
 * @s1: the first string
 * @s2: the second string
 *
 * Return: -, 0, or + nbr if s1 <, ==, > s2
 *	respectively
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0'; i++)
	{
		/* if we reach s1 = null, s2 will be winner*/
		if (s1[i] == s2[i])
			;
		else
			break;
	}
	return (s1[i] - s2[i]);
}
