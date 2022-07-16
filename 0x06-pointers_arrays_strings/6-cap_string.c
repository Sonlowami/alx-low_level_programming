/**
 * cap_string - capitalize every word in the string
 * @s: the string to check into
 *
 * Return: the pointer to the string
 */

char *cap_string(char *s)
{
	int i, j;

	j =  0;

	/* when the starting letter is a lower case*/

	if (*s >= 97 && *s <= 122)
		*s -= 32;

	for (i = 0; s[i] != '\0'; i++)
	{
		/* check for the word separator*/
		if (s[i] == '\t' || s[i] == ' ' || s[i] == '\n' || s[i] == ',' || s[i] == '.'
			      || s[i] == '"' || s[i] == '(' || s[i] == ')' || s[i] == '{'
			      || s[i] == '}')
		{
			/* check if the next char is lower case*/
			j = i + 1;
			if (s[j] >= 97 && s[j] <= 122)
				s[j] -= 32;
		}
	}
	return (s);
}
