#include "main.h"

/**
 * main - a program that  prints the first 50
 * Fibonacci numbers, starting with 1 and 2.
 *
 * Return: 0
 */
int main(void)
{
	long int fn = 1, sn = 1, i, tmp, print_sep = 0;

	for (i = 0; i < 50; i++)
	{
		if (print_sep)
		{
			_putchar(',');
			_putchar(' ');
		}
		print_lnum(sn);
		tmp = fn;
		fn = sn;
		sn += tmp;
		print_sep = 1;
	}

	_putchar('\n');

	return (0);
}

/**
 * print_lnum - prints a number using recursion
 *
 * @num: the number to be printed
 */
void print_lnum(long int num)
{
	if (num <= 0)
		return;

	print_lnum(num / 10);
	_putchar((num % 10) + 48);
}
