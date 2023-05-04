#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: the binary number
 * Return: unisinged int of b
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0, sum = 0, len;

	if (b == NULL)
		return (0);

	for (len = 0; b[len]; len++)
		;

	for (len -= 1; len >= 0; len--, i++)
	{
		if (b[len] != '1' && b[len] != '0')
			return (0);

		sum += _pow(2, i) * (b[len] - '0');
	}

	return (sum);
}

/**
 * _pow - calculates the power of a number
 * @base: the base
 * @expo: the exponent
 * Return: base to the power of expo
 */
int _pow(int base, int expo)
{
	if (expo == 0)
		return (1);

	return (_pow(base, expo - 1) * base);
}
