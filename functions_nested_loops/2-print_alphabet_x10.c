#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - 10 times the alphabet, in lowercase
 */
void print_alphabet_x10(void)
{
	int x;
	char letter;

	for (x = 0; x <= 9; x++)
	{
		for (letter = 97; letter <= 122; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
