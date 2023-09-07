#include "main.h"

/**
 * main - a program that  prints the first 98
 * Fibonacci numbers, starting with 1 and 2.
 *
 * Return: 0
 */
int main(void)
{
	unsigned long int sn = 1, fn = 1, tmp, fnp1, fnp2, snp1, snp2, tmp1, tmp2;
	int i, print_sep = 0, overflow = 0;

	for (i = 0; i < 98; i++)
	{
		if (print_sep)
		{
			_putchar(',');
			_putchar(' ');
		}
		if (sn > 5000000000000000000 && overflow == 0)
		{
			snp1 = sn / 10000000000;
			snp2 = sn % 10000000000;
			fnp1 = fn / 10000000000;
			fnp2 = fn % 10000000000;
			overflow = 1;
		}
		if (overflow)
		{
			print_ulnum(snp1);
			print_ulnum(snp2);
			tmp1 = fnp1, tmp2 = fnp2, fnp1 = snp1;
			fnp2 = snp2, snp1 += tmp1, snp2 += tmp2;
			if (snp2 > 9999999999)
			{
				snp1 += snp2 / 10000000000;
				snp2 = snp2 % 10000000000;
			}
		}
		else
		{
			print_ulnum(sn);
			tmp = fn, fn = sn;
			sn += tmp, print_sep = 1;
		}
	}
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
