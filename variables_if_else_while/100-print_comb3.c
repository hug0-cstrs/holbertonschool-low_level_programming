#include <stdio.h>
/**
 * main - Prints all possible combinations of two digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x, y;

	for (x = 0; x < 9; x++)
	{
		for (y = 0; y < 10; y++)
		{
			if (y == 0)
			{
				y = x + 1;
			}
			putchar(x + '0');
			putchar(y + '0');
			if (x == 8)
			{
				break;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
