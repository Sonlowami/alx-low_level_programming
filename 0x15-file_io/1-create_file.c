#include "main.h"
/**
 * _strlen - find the length of a string
 * @str: the string
 *
 * Return: the length of the string
 */
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		;
	}
	return (i);
}
/**
 * create_file - create a file and write to it
 * @filename: path to the file
 * @text_content: content to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, n;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 00600);
	if (fd == -1)
		return (-1);
	if (!text_content)
		return (1);
	n = write(fd, text_content, _strlen(text_content));
	if (n == -1)
		return (-1);
	return (1);
}
