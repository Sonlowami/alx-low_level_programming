
/**
 * _strlen_recursion - find the length of a string by recursion
 * @s: the pointer to a string
 *
 * Return: length of string
 */


int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (1 + (_strlen_recursion(s)));
}


