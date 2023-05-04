#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: then number
 * Return: void
 */
void print_binary(unsigned long int n)
{
	static int i = 1;

	if (n == 0)
	{
		if (i)
			_putchar('0');

		return;
	}

	i = 0;

	print_binary(n >> 1);
	_putchar('0' + (n & 1));
}
