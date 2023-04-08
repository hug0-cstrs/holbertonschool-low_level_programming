#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/**
 * main - Prints all the numbers of base 16 in lowercase.
 *
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */
int main(void)
{
	char digit = '0';
	char letter = 'a';

	while (digit <= '9')
	{
		putchar(digit);
		digit++;
	}
		while (letter <= 'f')
	{
		putchar(letter);
		letter++;
	}
		putchar('\n');
		return (0);
}
