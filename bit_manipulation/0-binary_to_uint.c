#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: a pointer to char
 *
 * Return: converted decimal number
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0, result = 0, mul = 1;

	if (b == NULL)
	{
		return (0);
	}

	i = strlen(b);

	for (; i > 0; i--)
	{
		if (b[i - 1] == '0' || b[i - 1] == '1')
		{
			if (b[i - 1] == '1')
			{
				result += mul;
			}
			mul += mul;
		}
		else
		{
			return (0);
		}
	}
	return (result);
}
