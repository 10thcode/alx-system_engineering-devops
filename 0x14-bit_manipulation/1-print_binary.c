#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: the number
 * Return: void
 */
void print_binary(unsigned long int n)
{
	static int init = 1;

	if (init && n == 0)
	{
		_putchar('0');
		return;
	}

	init = 0;

	if (n == 0)
		return;

	print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
