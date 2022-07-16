/**
 * string_toupper - changes all lower-case ti upper
 * @x: the string to convert
 *
 * Return: the address x
 */
char *string_toupper(char *x)
{
	int i;

	for (i = 0; x[i] != '\0'; i++)
	{
		if (x[i] >= 97 && x[i] <= 122)
			x[i] -= 32;
	}
	return (x);
}
