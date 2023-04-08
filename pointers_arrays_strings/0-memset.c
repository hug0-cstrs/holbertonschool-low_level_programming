#include "main.h"

/**
 * *_memset - function that fills memory with a constant byte
 * @b: constant char string
 * @s: char string
 * @n: unsigned integer variable
 * Return: pointer to resulting string `s`
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
