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
	int n, i, count, j;
	
	if(!filename)
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
	if (read(n, str, 1) == -1)
	{
		free(str);
		return (0);
	}
	i = 1;
	j = read(n, str + i, 1);
	while (j < (int)letters)
	{
		i++;
		j = read(n, str + i, 1);
	}
	count = i;
	i = 1;
	if (write(STDOUT_FILENO, str, 1) == -1)
	{
		free(str);
		return (0);
	}
	while (i < count)
	{
		j = write(STDOUT_FILENO, str + i, 1);
		i++;
	}
	close(n);
	free(str);
	if (i = count)
		return (count);
	return (0);
}
