#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * op_add - add 2 int
 * @a: first int
 * @b: second int
 * Return: returns the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract 2 int
 * @a: first int
 * @b: second int
 * Return: returns the difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply 2 int
 * @a: first int
 * @b: second int
 * Return: returns the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide 2 int
 * @a: first int
 * @b: second int
 * Return: returns the result of the division of a by b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - modulo 2 int
 * @a: first int
 * @b: second int
 * Return: returns the remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
