#include "search_algos.h"

/**
 * binary_search - function that searches for a value in a sorted array
 * of integers using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: the value to search
 * Return: -1 if array is NULL or if value is not present in array,
 * else return the first index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	size_t index = 0;

	if (array == NULL)
		return (-1);

	index = binary_check(array, value, 0, size - 1, size);
	return (index);
}

/**
 * binary_check - function that searches for a value in a sorted array
 * of integers using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: the value to search
 * @low: index of low element
 * @high: index of high element
 * Return: -1 if array is NULL or if value is not present in array,
 * else return the first index where value is located
 */
int binary_check(int *array, int value, int low, int high, size_t size)
{
	int mid = low + (high - low) / 2;
	int i = 0;

	if (high >= low)
	{
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			if (i == high)
				printf("%d", array[i]);
			else
				printf("%d, ", array[i]);
		}
		printf("\n");

		if (array[mid] == value)
			return (mid);
		if (array[mid] > value)
			return (binary_check(array, value, low, mid - 1, size));
		return (binary_check(array, value, mid + 1, high, size));
	}
	return (-1);
}
