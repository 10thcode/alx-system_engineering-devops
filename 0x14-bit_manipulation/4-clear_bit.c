#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: the number
 * @index: the given index
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(int) * 8)
		return (-1);

	*n &= ~(1 << index);

	return (1);
}