#include "main.h"

/**
 * rev_string - reverses the order of characters in a
 * string in the calling function.
 * @s: the string to reverse
 */

void rev_string(char *s)
{
	int l, j, temp;

	for (l = 0; s[l] != '\0'; l++)
		;
	for (j = 0; j <= l / 2; j++)
	{
		temp = s[j];
		s[j] = s[l - j - 1];
		s[l - j - 1] = temp;
	}
}
