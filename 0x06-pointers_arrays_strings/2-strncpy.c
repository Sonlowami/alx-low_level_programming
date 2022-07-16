/**
 * _strncpy - copies a string from a source address to a buffer
 * @dest: the buffer to copy to. As a buffer, it should be
 * overwritten
 * @src: the source to copy from
 * @n: the number of bytes to copy
 *
 * Return: the dest address
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
