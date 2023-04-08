#include "main.h"

/**
 * _strstr - function that locates a substring
 * @haystack: Input string
 * @needle: Input string
 *
 * Return: Pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (*needle == '\0')
		return (haystack);
	for (i = 0; haystack[i]; ++i)
	{
		if (haystack[i] == needle[0])
		{
			for (j = 0; haystack[i] == needle[j]; ++i, ++j)
			{
				if (haystack[i] == needle[j] && needle[j + 1] == '\0')
				{
					return (haystack + (i - j));
				}
			}

		}
	}
	return (0);
}
