#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @n: The number
 *
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	if (n < 0)
		n *= -1;

	int last_digit = n % 10;

	_putchar(last_digit + '0');

	return (last_digit);
}
