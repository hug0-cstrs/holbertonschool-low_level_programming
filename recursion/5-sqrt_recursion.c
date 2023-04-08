#include "main.h"

/**
 * square - another func
 * Description: i use another function because you
 * can't do it with only one
 * @x: number
 * @guess: the multiply by
 * Return: a number
 */
int square(int x, int guess)
{
	if ((guess * guess) == x)
	{
		return (guess);
	}
	if ((guess * guess) > x)
	{
		return (-1);
	}
	else
	{
		return (square(x, guess + 1));
	}
}

/**
 * _sqrt_recursion - square root but recursive
 * @n: take number to square it
 * Return: the square root of n
 */
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}
