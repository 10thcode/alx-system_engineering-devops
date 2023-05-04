#include "main.h"

/**
 * get_bit - get the value of a bit at a given index.
 * @n: the number
 * @index: the given index
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(int) * 8)
		return (-1);

	return ((n >> index) & 1);
}
