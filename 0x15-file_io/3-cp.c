#include "main.h"
/**
 * copy - copy text from one file into another
 * @file_from: string representing source file
 * @file_to: string representing destination file
 */
void copy(char *file_from, char *file_to)
{
	int fd, fd2, rd, wrote;
	int closed, closed2;
	char buffer[1024];

	fd = open(file_from, O_RDONLY);
	if (fd == -1)
	{
		dprintf(2, "Error: can't read from file %s\n", file_from);
		exit(98);
	}
	rd = read(fd, buffer, 1024);
	if (rd == -1)
	{
		dprintf(2, "Error: can't read from file %s\n", file_from);
		exit(98);
	}

	fd2 = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 00664);
	if (fd2 == -1)
	{
		dprintf(2, "Error: can't write to file %s\n", file_to);
		close(fd);
		exit(99);
	}

	while (rd != 0)
	{
		wrote = write(fd2, buffer, rd);
		if (wrote == -1)
		{
			close(fd);
			dprintf(2, "Error: can't write to file %s\n", file_to);
			exit(99);
		}
		rd = read(fd, buffer, 1024);
	}
	closed = close(fd);
	closed2 = close(fd2);
	if (closed == -1 || closed2 == -1)
	{
		dprintf(2, "Error: can't close fd %d\n", (closed == -1) ? closed : closed2);
		exit(100);
	}
}
/**
 * main - serve as entry port to the copy program
 * @argc: number of commandlline arguments
 * @argv: array of commandline arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(2, "Usage:cp file_from file_to\n");
		exit(97);
	}
	copy(argv[1], argv[2]);
	return (0);
}
