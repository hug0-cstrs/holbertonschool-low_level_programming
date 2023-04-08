#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 * @n: number to evaluate
 * @index: index starting from 0, of the bit we want to get
 *
 * Return: Value of bit at index, or -1 if error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
	{
		return (-1);
	}

	*n = ((1 << index) | *n);

	return (1);
}
