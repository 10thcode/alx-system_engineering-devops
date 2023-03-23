#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - adds two integers.
 * @a: first number
 * @b: second number
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract two integers.
 * @a: the first number.
 * @b: the second number.
 * Return: deference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply two integers
 * @a: first number
 * @b: second number
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide two integers
 * @a: first number
 * @b: second number
 * Return: quotient of a divided by b
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
 * op_mod - calculate the remainder after dividing two integers
 * @a: first number
 * @b: second number
 * Return: the remainder of a divided by b
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
