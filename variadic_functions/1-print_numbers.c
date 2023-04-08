#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_numbers - function that print number, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	if (separator == NULL)
	{
		separator = "";
	}

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		if (i > 0)
		{
			printf("%s%d", separator, va_arg(list, int));
		}
		else
		{
			printf("%d", va_arg(list, int));
		}
	}

	va_end(list);
	printf("\n");
}
