#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * Return: pointer of an array of chars
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, x, y, limit;
	char *s;

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

	s = malloc((i * sizeof(*s1)) + (j * sizeof(*s2)) + 1);

	if (s == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < i; x++)
	{
		s[x] = s1[x];
	}
	limit = j;

	for (y = 0; y <= limit; y++, x++)
	{
		s[x] = s2[y];
	}

	return (s);
}
