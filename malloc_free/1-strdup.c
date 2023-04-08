#include <stdio.h>
#include <stdlib.h>

/**
 *_strdup - function returns a pointer to a newly allocated space in memory
 *@str: string to duplicate
 *Return: NULL or a pointer to the duplicated string
 */

char *_strdup(char *str)
{
	int i;
	int j;
	int size_str;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
	}
	size_str = i;

	s = malloc(size_str * sizeof(char) + 1);

	if (s == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < i; j++)
	{
		s[j] = str[j];
	}
	return (s);
}
