#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: Nothing
 */
void times_table(void)
{
	int i = 0;
	int j;
	int k;
	int first_digit;
	int last_digit;

	while (i < 10)
	{
		_putchar('0');
		j = 1;
		while (j < 10)
		{
			_putchar(',');
			_putchar(' ');
			k = i * j;
			if (k < 10)
			{
				_putchar(' ');
				_putchar(k + '0');
			}
			else
			{
				first_digit = k / 10;
				last_digit = k % 10;
				_putchar(first_digit + '0');
				_putchar(last_digit + '0');
			}
			j++;
		}
		i++;
		_putchar('\n');
	}
}
