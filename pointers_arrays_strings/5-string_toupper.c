#include "main.h"
/**
 * *string_toupper - changes all lowercase letters of a string to uppercase
 * @uper: pointor
 * Return: uper
 */
char *string_toupper(char *uper)
{
	int i;

	for (i = 0; uper[i] != '\0'; i++)
	{
		if (uper[i] >= 97 && uper[i] <= 122)
		{
			uper[i] = uper[i] - 32;
		}
	}
	return (uper);
}
