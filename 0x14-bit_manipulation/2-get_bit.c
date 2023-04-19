#include "main.h"

/**
 * get_bit - gets the value of a bit at a given index.
 * @n: the number
 * @index: the given index
 * Return: the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 32)
		return (-1);

	return ((n >> index) & 1);
}
