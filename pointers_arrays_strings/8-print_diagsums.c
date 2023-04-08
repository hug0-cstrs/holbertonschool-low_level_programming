#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Entry point...
 * Description: 'the program desc'
 * Return: Always 0 (Success)
 * @a: pointer parmameter
 * @size: int parameter
 */

void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int sum_p = 0;
	int sum_s = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				sum_p += a[(size * i) + i];
			}
			if ((i + j) == (size - 1))
			{
				sum_s += a[(size * (i + 1)) - (i + 1)];
			}
		}
	}
	printf("%d, %d\n", sum_p, sum_s);
}
