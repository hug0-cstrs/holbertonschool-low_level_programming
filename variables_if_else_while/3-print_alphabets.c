#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase, and then in uppercase.
 *
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */
int main(void)
{
	char lowercase_letter = 'a';
	char upercase_letter = 'A';

	while (lowercase_letter <= 'z')
	{
		putchar(lowercase_letter);
		lowercase_letter++;
	}
	while (upercase_letter <= 'Z')
	{
		putchar(upercase_letter);
		upercase_letter++;

	}
	putchar('\n');
	return (0);
}
