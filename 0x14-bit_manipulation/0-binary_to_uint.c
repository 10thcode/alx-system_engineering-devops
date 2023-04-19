#include "main.h"
#include <stdio.h>
#include <stddef.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: the binary number
 * Return: decimal number
 */
unsigned int binary_to_uint(const char *b)
{
	int j, i, sum = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i]; i++)
		;

	for (j = 0, i -= 1; i >= 0; i--, j++)
	{
		if (b[i] == '0' || b[i] == '1')
			sum += (b[i] - '0') * _pow(2, j);
		else
			return (0);
	}

	return (sum);
}

/**
 * _pow - calculates the power of a number
 * @base: the base
 * @exponent: the exponent
 * Return: the result of base to the power of exponent
 */
int _pow(int base, int exponent)
{
	if (exponent == 0)
		return (1);

	return (base * _pow(base, exponent - 1));
}
