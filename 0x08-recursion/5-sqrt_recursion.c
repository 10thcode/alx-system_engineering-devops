#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: the number
 * Return: _/n
 */
int _sqrt_recursion(int n)
{
	return (is_root(n, 0));
}

/**
 * is_root - check for square root of a number.
 * @n: the number
 * @i: a number to check
 * Return: i if it is the square root of n.
 */
int is_root(int n, int i)
{
	if (i * i > n)
		return (-1);

	if (i * i == n)
		return (i);

	return (is_root(n, i + 1));
}
