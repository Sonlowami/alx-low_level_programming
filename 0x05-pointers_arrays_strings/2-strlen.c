/**
 * _strlen - computes and returns the length of a string
 * @s: the character array (string) to be computed
 *
 * Return: int len for string length
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (*(s + len) != '\0')
	{
		len++;
	}
	return (len);
}
