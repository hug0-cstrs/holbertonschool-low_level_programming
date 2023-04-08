#include "main.h"

/**
 *_pow_recursion - function that returns the factorial of a given number
 *@x: input integer
 *@y: input integer
 *Return: x * _pow_recursion(x, y - 1)
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	if (x == 0)
	{
		return (0);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
