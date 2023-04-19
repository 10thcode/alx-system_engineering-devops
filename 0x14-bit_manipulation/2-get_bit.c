#include "main.h"
#include <stdio.h>

/**
 * get_bit - gets the value of a bit at a given index.
 * @n: the number
 * @index: the given index
 * Return: the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int len = getlength(n);

	if (index >= len)
		return (-1);

	return ((n >> index) & 1);
}

/**
 * getlength - get the length of a binary number
 * @n: the number
 * Return: the length of binary number n.
 */
int getlength(unsigned long int n)
{
	if (n == 0)
		return (0);

	return (getlength(n >> 1) + 1);
}
