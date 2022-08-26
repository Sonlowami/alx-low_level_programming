#include "main.h"
/**
 * read_textfile - read from a file and write to stdout
 * @filename: pointer to string containign file path
 * @letters: the number of characters to be printed
 *
 * Return: number of characters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *str;
	int n, i, count;

	if (!filename)
		return (0);
	str = malloc(sizeof(char) * letters + 1);
	if (!str)
		return (0);
	n = open(filename, O_RDONLY, 0);
	if (n == -1)
	{
		free(str);
		return (0);
	}
	i = read(n, str, letters);
	close(n);
	if (i == -1)
	{
		free(str);
		return (0);
	}
	str[i] = '\0';
	count = write(STDOUT_FILENO, str, i);
	if (count == -1)
	{
		free(str);
		return (0);
	}
	if (count == i)
		return ((size_t)count);
	return (0);
}
