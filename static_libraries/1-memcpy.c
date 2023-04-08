#include "main.h"

/**
 * *_memcpy - function that copies memory area
 * @src: char string
 * @dest: char string
 * @n: unsigned integer variable
 * Return: pointer to resulting string `dest`
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
