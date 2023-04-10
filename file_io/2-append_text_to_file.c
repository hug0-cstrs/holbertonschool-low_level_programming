#include "main.h"
/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: name of the file
 * @text_content: string to add to end of file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, writing;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		return (1);
	}

	/* Open the file in append mode and write-only mode */
	fd = open(filename, O_APPEND | O_WRONLY);
	
	/* Check if the file could be opened */
	if (fd == -1)
	{
		return (-1);
	}
	
	/* Write the text_content to the file */
	writing = write(fd, text_content, strlen(text_content));
	/* Check if the write operation was successful */
	if (writing == -1)
	{
		return (-1);
	}

	close(fd);

	return (1);
}
