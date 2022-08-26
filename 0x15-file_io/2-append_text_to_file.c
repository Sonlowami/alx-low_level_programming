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

	if (!str)
		return (0);
	for (i = 0; str[i] != '\0'; i++)
	{
		;
	}
	return (i);
}
/**
 * append_text_to_file - does so
 * @filename: pointer to string representing filepath
 * @text_content: pointer to string to add at the end of the file
 *
 * Return: 1 on success,  -1 on any failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, n;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	n = write(fd, text_content, _strlen(text_content));
	if (n == -1)
		return (-1);
	return (1);
}

