#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_char - print char type element from va_list
 * @list: va_list passed to function
 */
void print_char(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
 * print_int - print int type element from va_list
 * @list: va_list passed to function
 */
void print_int(va_list list)
{
	printf("%d", va_arg(list, int));
}

/**
 * print_str - print string element from va_list
 * @list: va_list passed to function
 */
void print_str(va_list list)
{
	char *string;

	string = va_arg(list, char*);
	if (string == NULL)
	{
		string = "(nil)";
	}
	printf("%s", string);
}

/**
 * print_float - print float type element from va_list
 * @list: va_list passed to function
 */
void print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
 * print_all - print anything passed if char, int, float, or string.
 * @format: string of formats to use and print
 */
void print_all(const char * const format, ...)
{
	unsigned int i, j;
	char *s;
	va_list list;

	checker storage[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_str},
		{'\0', NULL}
	};

	i = 0;
	j = 0;
	s = "";

	va_start(list, format);
	while (format != NULL && format[i] != '\0')
	{
		while (j < 4)
		{
			if (format[i] == *storage[j].type)
			{
				printf("%s", s);
				storage[j].function(list);
				s = ", ";
			}
			j++;
		}
		i++;
		j = 0;
	}

	printf("\n");
	va_end(list);
}
