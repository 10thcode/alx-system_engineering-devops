#include "main.h"

/**
 * main - a program that finds and prints the sum of the even-valued terms
 *
 * Return: 0
 */
int main(void)
{
	unsigned long int sum = 0;
	long int fn = 1, sn = 1, i, tmp, print_sep = 0;

	for (; sn <= 4000000; i++)
	{
		if (sn % 2 = 0)
			sum += sn;

		tmp = fn;
		fn = sn;
		sn += tmp;
	}

	print_ulnum(sum);
	_putchar('\n');

	return (0);
}

/**
 * print_ulnum - prints a number using recursion
 *
 * @num: the number to be printed
 */
void print_ulnum(unsigned long int num)
{
	if (num <= 0)
		return;

	print_ulnum(num / 10);
	_putchar((num % 10) + 48);
}
