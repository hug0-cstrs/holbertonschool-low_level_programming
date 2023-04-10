#include "main.h"
/**
 * create_file - Create a function that creates a file
 * @filename: name of the file to create
 * @text_content: string to write to file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, writing;

	if (filename == NULL)
	{
		return (-1);
	}

	/* Open the file with O_CREAT flag to create a new file if it doesn't exist and O_WRONLY to allow write-only access to the file */
	/* Use O_TRUNC to truncate the file to length 0 if it already exists */
	/* Use 0600 as the mode to set the file permissions to rw------- (read and write only for owner) */
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	/* Check if the file could be opened */
	if (fd == -1)
	{
		/* If the file could not be opened, return -1 to indicate an error */
		return (-1);
	}

	/* Check if text_content is NULL */
	if (text_content == NULL)
	{
		/* If text_content is NULL, set it to an empty string */
		text_content = "";
	}

	/* Write the text_content to the file */
	writing = write(fd, text_content, strlen(text_content));

	/* Check if the write operation was successful */
	if (writing == -1)
	{
		/* If the write operation failed, return -1 to indicate an error */
		return (-1);
	}

	close(fd);

	return (1);
}
