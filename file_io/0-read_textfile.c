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

	/* Check if filename is NULL */
	if (filename == NULL)
	{
		/* If filename is NULL, return 0 to indicate an error */
		return (0);
	}

	/* Open the file with O_RDONLY flag to allow read-only access to the file */
	fd = open(filename, O_RDONLY);

	/* Check if the file could be opened */
	if (fd == -1)
	{
		/* If the file could not be opened, return 0 to indicate an error */
		return (0);
	}

	/* Allocate memory for the buffer to hold the file contents */
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		/* If memory allocation fails, return 0 to indicate an error */
		return (0);
	}

	/* Read the specified number of letters from the file into the buffer */
	rcount = read(fd, buffer, letters);
	if (rcount == -1)
	{
		/* If the read operation failed, return 0 to indicate an error */
		return (0);
	}

	/* Write the contents of the buffer to the standard output */
	wcount = write(STDOUT_FILENO, buffer, rcount);
	if (wcount == -1)
	{
		/* If the write operation failed, return 0 to indicate an error */
		return (0);
	}

	/* Close the file descriptor */
	close(fd);

	/* Free the memory allocated for the buffer */
	free(buffer);

	/* Return the number of bytes written to the standard output */
	return (wcount);
}
