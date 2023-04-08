#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - concatenate 2 strings, only n bytes of s2
 * @s1: string 1
 * @s2: string 2
 * @n: bytes to include of s2
 * Return: NULL if fail, else pointer to malloc memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j, x, y;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
	}
	/* If the maximum number of characters to use (n) is greater than or equal to j (the length of s2), n takes the value of j */
	if (n >= j)
	{
		n = j;
	}
	/* Otherwise, the value of j (the length of s2) is adjusted to match n */
	else
	{
		j = n;
	}
	ptr = malloc(sizeof(char) * (i + j) + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	/* copy s1 to the new string (ptr) */
	for (x = 0; x < i; x++)
	{
		ptr[x] = s1[x];
	}
	/* copy s2 to length n or the end of string s2 the new string (ptr) */
	for (y = 0; y < j; y++, x++)
	{
		ptr[x] = s2[y];
	}
	/* The null character is added at the end of the string to end it */
	ptr[x] = '\0';
	return (ptr);
}
