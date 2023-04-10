#include "main.h"
/**
 * create_file - Create a function that creates a file
 * @filename: name of the file to create
 * @text_content: string to write to file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i, writing;

	if (filename == NULL)
	{
		return (0);
	}

	fd = creat(filename, O_RDONLY | O_WRONLY | O_TRUNC | 0600);

	if (fd == -1)
	{
		return (0);
	}

	if (text_content == NULL)
	{
		text_content = "";
	}

	for (i = 0; text_content[i] != '\0'; i++)
	{
		writing = write(fd, text_content, strlen(text_content));
	}

	if (writing == -1)
	{
		return (-1);
	}

	close(fd);
	return (1);
}
