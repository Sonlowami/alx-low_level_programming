
/**
 * _strlen_recursion - find the length of a string by recursion
 * @s: the pointer to a string
 *
 * Return: length of string
 */


int _strlen_recursion(char *s)
{
	static int len;

	if (*s == '\0')
		return (len);
	s++;
	len++;
	return (_strlen_recursion(s));
}


