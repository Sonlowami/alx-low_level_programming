/**
 * len - return the length of a string
 * @s: the pointer to the string
 *
 * Return: length of the string
 */
int len(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + len(s + 1));
}
/**
 * compare - compare two characters in a string
 * @s: pointer to a string to compare
 * @n: the end of the string
 * @x: the start of the array
 * Return: 1 if they are same, 0 if otherwise
 */
int compare(char *s, int n, int x)
{
	if ((n == x) || (x + 1 == n))
	{
		if (s[n] == s[x])
			return (1);
		else
			return (0);
	}
	return (1 * compare(s, n - 1, x + 1));
}
/**
 * is_palindrome - check if a string is a palindrome
 * @s: pointer to the string in question
 *
 * Return: 1 if so, 0 otherwise
 */
int is_palindrome(char *s)
{
	if (len(s) == 1)
		return (1);
	return (compare(s, len(s) - 1, 0));
}
