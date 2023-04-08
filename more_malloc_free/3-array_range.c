#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - create an array of integers inclusive of min and max
 * @min: min value to include
 * @max: max value to include
 * Return: pointer to newly created array
 */

int *array_range(int min, int max)
{
	int i;
	int *ptr = NULL;

	if (min > max)
	{
		return (NULL);
	}

	ptr = malloc(((max - min) + 1) * sizeof(int));

	if (ptr == NULL)
	{
		free(ptr);
		ptr = NULL;
		return (NULL);
	}

	for (i = 0; min <= max; i++)
	{
		ptr[i] = min;
		min++;
	}

	return (ptr);
}
