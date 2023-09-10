#include "main.h"

/**
 * print_number - prints an integer.
 *
 * @n: the integer to be printed.
 */
void print_number(int n)
{
	if (n == 0)
		_putchar('0');
	else
	{
		if (n < 0)
		{
			_putchar('-');
			if (n == -2147483648)
			{
				print_n(214748364);
				print_n(8);
				return;
			}
			n *= -1;
		}

		print_n(n);
	}
}

/**
 * print_n - prints a number using recursion
 *
 * @num: the number to be printed
 */
void print_n(int num)
{
	if (num <= 0)
		return;

	print_n(num / 10);
	_putchar((num % 10) + 48);
}
