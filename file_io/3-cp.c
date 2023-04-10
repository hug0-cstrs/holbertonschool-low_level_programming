#include "main.h"
/**
 * error_file - checks if files can be opened.
 * @file_from: file_from.
 * @file_to: file_to.
 * @argv: arguments vector.
 * Return: no return.
 */
void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - function that copies the content of a file
 * @argc: is an integer
 * @argv: pointer to char
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int fd_file_from, fd_file_to, n;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	fd_file_from = open(argv[1], O_RDONLY);
	fd_file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	error_file(fd_file_from, fd_file_to, argv);

	while ((n = read(fd_file_from, buffer, 1024)) > 0)
	{
		if ((write(fd_file_to, buffer, n)) != n || fd_file_to < 0)
		{
			error_file(0, -1, argv);
		}
	}

	if (n < 0)
	{
		error_file(-1, 0, argv);
	}

	if (close(fd_file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_file_from);
		exit(100);
	}
	if (close(fd_file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_file_to);
		exit(100);
	}
	return (0);
}
