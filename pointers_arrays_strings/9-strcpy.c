#include "main.h"
/**
 * _strcpy - copy the string *src to the buffer *dest.
 * @dest: input string pointer
 * @src: input string pointer
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int x;

	for (x = 0; src[x] != '\0'; x++)
	{
		dest[x] = src[x];
	}
	dest[x] = '\0';
	return (dest);
}
