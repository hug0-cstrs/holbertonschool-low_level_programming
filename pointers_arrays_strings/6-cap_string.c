#include "main.h"
/**
 * *cap_string - function that capitalizes all words of a string
 * @cap: pointor
 * Return: cap
 */
char *cap_string(char *cap)
{
	int i;

	for (i = 0; cap[i] != '\0'; i++)
	{
		if (cap[i] >= 'a' && cap[i] <= 'z' &&
				(cap[i - 1] == ' ' || cap[i - 1] == '\t' ||
				 cap[i - 1] == '\n' || cap[i - 1] == ',' ||
				 cap[i - 1] == ';' || cap[i - 1] == '.' ||
				 cap[i - 1] == '!' || cap[i - 1] == '?' ||
				 cap[i - 1] == '"' || cap[i - 1] == '(' ||
				 cap[i - 1] == ')' || cap[i - 1] == '{' ||
				 cap[i - 1] == '}' || i == 0))
		{
			cap[i] = cap[i] - 32;
		}
	}
	return (cap);
}
