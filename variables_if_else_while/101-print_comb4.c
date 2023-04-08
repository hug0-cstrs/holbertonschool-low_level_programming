#include <stdio.h>
/**
 * main - Prints all possible combinations of tre digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int first, second, third;

	for (first = 0; first < 8; first++)
	{
		for (second = 0; second < 9; second++)
		{
			for (third = 0; third < 10; third++)
			{
				if (second == 0)
					second = first + 1;
				if (third == 0)
					third = second + 1;
				putchar(first + '0');
				putchar(second + '0');
				putchar(third + '0');
				if (first == 7)
					break;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
