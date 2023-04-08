#include "main.h"

/**
 * _strpbrk - that searches a string for any of a set of bytes
 * @s: String being evaluated
 * @accept: input string
 *
 * Return: Pointer thet matches one of the bytes in accept
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	while (s[i] != '\0')
	{
		int j = 0;

		while (accept[j] != 0)
		{
			if (s[i] == accept[j])
			{
			return (s + i);
			}
			j++;
		}
		i++;
	}
	return (0);
}
