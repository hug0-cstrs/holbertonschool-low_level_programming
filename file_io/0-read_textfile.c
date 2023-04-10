#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: char string of files name
 * @letters: number of letters to read and print
 * Return: number of letters read and printed, or 0 if error
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t rcount, wcount;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		return (0);
	}

	rcount = read(fd, buffer, letters);
	if (rcount == -1)
	{
		return (0);
	}

	wcount = write(STDOUT_FILENO, buffer, rcount);
	if (wcount == -1)
	{
		return (0);
	}

	close(fd);
	free(buffer);

	return (wcount);
}
