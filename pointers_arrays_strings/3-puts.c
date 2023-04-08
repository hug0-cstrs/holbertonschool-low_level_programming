#include "main.h"
#include <stdio.h>
/**
 * _puts - prints a string, followed by a new line.
 * @str: input string.
 * Return: no return.
 */
void _puts(char *str)
{
	int x = 0;

	for (x = 0; (str[x]) != '\0'; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}

