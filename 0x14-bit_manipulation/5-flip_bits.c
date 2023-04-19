#include "main.h"

/**
 * flip_bits - calculates the number of bits you
 * would need to flip to get from one number to another.
 * @n: the first number
 * @m: the second number
 * Return: number of bits that need to be fliped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i;
	int j = 0;

	for (i = n > m ? n : m; i != 0; i >>= 1)
	{
		if ((n & 1) != (m & 1))
			j++;

		n >>= 1;
		m >>= 1;
	}

	return (j);
}
