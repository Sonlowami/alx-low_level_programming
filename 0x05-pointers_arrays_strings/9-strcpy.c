/**
 * _strcpy - copies a string from one address to another address
 * @src: the source address
 * @dest: the destination address
 *
 * Return: address of the destination
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	if (src[i] == '\0')
		dest[i] = '\0';
	return (dest);
}
