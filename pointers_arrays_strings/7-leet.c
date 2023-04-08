#include "main.h"

/**
 * leet - function that encodes a string into 1337
 * @s: string being converted into 1337
 *
 * Return: s
 */
char *leet(char *s)
{
	int i, x;
	char letters[] = "AaEeOoTtLl";
	char numbers[] = "4433007711";

	for (i = 0; s[i]; i++)
	{
		for (x = 0; letters[x]; x++)
		{
			if (letters[x] == s[i])
			{
				s[i] = numbers[x];
			}
		}
	}
	return (s);
}
