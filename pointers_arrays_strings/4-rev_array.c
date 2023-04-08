#include "main.h"
/**
 * reverse_array - function that reverses the content of an array of integers
 * @n: parameter
 * @a: pointor
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp;
	int max;

	max = n - 1;
	for (i = 0; i < (n / 2); i++)
	{
		temp = a[i];
		a[i] = a[max];
		a[max] = temp;
		max--;
	}
}
