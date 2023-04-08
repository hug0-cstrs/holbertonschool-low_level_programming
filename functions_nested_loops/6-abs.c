#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _abs - Computes the absolute value of an integer.
 * @x: The integer to be computed.
 *
 * Return: The absolute value of the integer.
 */
int _abs(int x)
{
	if (x >= 0)
	{
		return (x);
	}
	else
	{
		return (-x);
	}
}
