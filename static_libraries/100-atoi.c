#include <limits.h>
#include "main.h"

/**
 * _atoi - Convert a string to an integer
 * @s: Input string
 * Return: Int
 */

int _atoi(char *s)
{
	int result = 0, sign = 1;

	/** Skip any character that is not a digit */
	while ((*s < '0' || *s > '9') && *s != '\0')
	{
		/** Take into account all the '-' before the number */
		if (*s == '-')
			sign *= -1;
		s++;
	}

	/** Check for digit, stop iterating once *s is not a digit */
	while (*s >= '0' && *s <= '9')
	{
		/** Handle overflow */
		if (result > INT_MAX / 10 ||
				(result ==  INT_MAX / 10 && *s - '0' > INT_MAX % 10))
		{
			if (sign == 1)
				return (INT_MAX);
			else
				return (INT_MIN);
		}

		/**
		 * Multiply result by 10 to shuffle numbers left and add the
		 * current value of *s minus '0' to get the numerical value,
		 * because s stores characters in ascii value
		 */
		result = 10 * result + (*s - '0');
		s++;
	}

	return (sign * result);
}
